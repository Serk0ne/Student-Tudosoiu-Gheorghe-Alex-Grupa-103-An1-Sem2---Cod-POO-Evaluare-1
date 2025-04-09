# Proiect POO - Conturi Bancare

## Descriere

Acesta este proiectul meu scris în C++ pentru disciplina Programare Orientată pe Obiect. Scopul programului este de a simula funcționarea unor conturi bancare de bază. 

- `Account` – clasa de bază pentru un cont simplu.
- `SavingsAccount` – cont de economii care calculează dobândă.
- `CheckingAccount` – cont curent care are un comision pentru fiecare tranzacție.

## Funcționalitate

Programul creează trei obiecte:

- un cont normal cu sold inițial de 100 lei,
- un cont de economii cu sold inițial de 200 lei și rată de dobândă de 5%,
- un cont curent cu sold inițial de 300 lei și comision de 2 lei pentru fiecare operațiune.

Se efectuează câteva operațiuni de creditare și debitare pe fiecare cont, iar la final se afișează soldurile actualizate.

## Cum se folosește

1. Se compilează fișierul `COD EV1 POO.cpp` cu un compilator C++ (ex: `g++`).
2. Se rulează fișierul executabil.
3. Se observă comportamentul conturilor în consola de ieșire.

Exemplu de compilare:
```bash
g++ COD\ EV1\ POO.cpp -o conturi
./conturi
