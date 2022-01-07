#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int > moon(n);   // zadeklarowanie pojedynczego wektora o nazwie zmiennej moon i ilosci elementow n
                            // inicjalizacja zmiennych jest od razu bez ¿adnej deklaracji ustawiana na 0
                            // wektor jest obiektem
    for(int &x : moon)      // &  - symbol referencji
        cin >> x;

    if(moon[n-1] == 15)             // ostatni element wektora
        cout << "DOWN\ ";
    else if(moon[n-1] == 0)
        cout << "UP\n";
    else if(n == 1)                 // jesli rozmiar danych wynosi 1
        cout << "UNNOWN\n";
    else if(moon[n-2] < moon[n-1])  // jesli przedostatni jest mniejszy od ostatniego
        cout << "UP\n";
    else
        cout << "DOWN\n";   // wariant po zupe³nym wykluczeniu innych warunkow

    return 0;
}
