#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b) {
        if (b >= 0)
            balance = b;
        else {
            balance = 0;
            cout << "Initial balance invalid.\n";
        }
    }

    void credit(double amount) {
        balance += amount;
    }

    virtual bool debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return true;
        } else {
            cout << "Debit amount exceeded account balance\n";
            return false;
        }
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public Account {
    double interestRate;
public:
    SavingsAccount(double b, double r) : Account(b) {
        interestRate = r;
    }

    double calculateInterest() {
        return balance * interestRate;
    }
};

class CheckingAccount : public Account {
    double fee;
public:
    CheckingAccount(double b, double f) : Account(b) {
        fee = f;
    }

    void credit(double amount) {
        balance += amount;
        balance -= fee;
    }

    bool debit(double amount) {
        if (Account::debit(amount)) {
            balance -= fee;
            return true;
        }
        return false;
    }
};

int main() {
    Account a(100);
    SavingsAccount s(200, 0.05);
    CheckingAccount c(300, 2);

    a.credit(20);
    a.debit(50);
    cout << "Account balance: " << a.getBalance() << endl;

    double interest = s.calculateInterest();
    s.credit(interest);
    cout << "Savings balance: " << s.getBalance() << endl;

    c.credit(50);
    c.debit(100);
    cout << "Checking balance: " << c.getBalance() << endl;

    return 0;
}
