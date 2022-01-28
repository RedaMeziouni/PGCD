#include <bits/stdc++.h>

/*
l'algorithme d'Euclide est un algorithme qui calcule le plus grand commun diviseur (PGCD) de deux entiers, c'est-à-dire le plus grand entier qui divise les deux entiers, en laissant un reste nul. 
L'algorithme ne requiert pas de connaître la factorisation de ces deux nombres.
*/

// ### L’algorithme euclidien ### 

using namespace std;
  
// // gcd de a et b

// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
  
// // Driver Code
// int main()
// {
//     int a = 10, b = 15;
//     cout << "GCD(" << a << ", " 
//          << b << ") = " << gcd(a, b) 
//                         << endl;
//     a = 35, b = 10;
//     cout << "GCD(" << a << ", " 
//          << b << ") = " << gcd(a, b) 
//                         << endl;
//     a = 31, b = 2;
//     cout << "GCD(" << a << ", " 
//          << b << ") = " << gcd(a, b) 
//                         << endl;
//     return 0;
// }

// ### L’algorithme euclidien étendu ### 
/*
L’algorithme euclidien étendu met à jour les résultats de pgcd(a, b) en utilisant les résultats calculés par l’appel récursif pgcd(b%a, a). 
Soit x 1 et y 1 les valeurs de x et y calculées par l’appel récursif . 
x et y sont mis à jour à l’aide des expressions ci-dessous. 
    x = y1 - ⌊b/a⌋ * x1
    y = x1
*/ 

// Demonstration de l'algo euclidienne etendu

int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
 
// Driver
int main()
{
    int x, y, a = 35, b = 15;
    int g = gcdExtended(a, b, &x, &y);
    cout << "GCD(" << a << ", " << b
         << ") = " << g << endl;
    return 0;
}