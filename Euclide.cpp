#include <bits/stdc++.h>

/*
l'algorithme d'Euclide est un algorithme qui calcule le plus grand commun diviseur (PGCD) de deux entiers, c'est-à-dire le plus grand entier qui divise les deux entiers, en laissant un reste nul. 
L'algorithme ne requiert pas de connaître la factorisation de ces deux nombres.
*/

using namespace std;
  
// gcd de a et b

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
  
// Driver Code
int main()
{
    int a = 10, b = 15;
    cout << "GCD(" << a << ", " 
         << b << ") = " << gcd(a, b) 
                        << endl;
    a = 35, b = 10;
    cout << "GCD(" << a << ", " 
         << b << ") = " << gcd(a, b) 
                        << endl;
    a = 31, b = 2;
    cout << "GCD(" << a << ", " 
         << b << ") = " << gcd(a, b) 
                        << endl;
    return 0;
}