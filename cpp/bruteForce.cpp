#include<bits/stdc++.h>

/*
In this approach we first check if both a and b have the value 0. If yes, the GCD(a,b) is not defined.
If not we check if either of a and b is 0. In this case the non-zero number among a and b is the GCD(a,b).
If the values of both a and b is not 0, we check for all numbers from 1 to min(a,b) and find the largest number which divides both a and b. 
This largest number which divides both a and b is said to be the GCD(a,b).
*/
using namespace std;

int main()
{
    int a, b, mi, gcd, i;

    cout << "Enter the values of a and b" << endl;
    cin >> a >> b; // Taking a and b as input

    // 1st case
    if(a == 0 && b == 0) // checking if the values of both a and b are 0
    {
        cout << "GCD is not defined" << endl;
    }

    // 2nd case
    else if(a==0) // checking if the value of a is 0
    {
        cout << "GCD of " << a << " and " << b << " is " << b << endl;
    }

    // 3rd case
    else if(b==0) // checking if the value of b is 0
    {
        cout << "GCD of " << a << " and " << b << " is " << a << endl;
    }

    // 4th case
    else
    {
        mi = min(a, b); // finding the min of a and b
        for(i = 1;i <= mi; i++) // loop to check numbers from 1 to mi(a,b)
        {
            if( a%i == 0 && b%i == 0) //checking if i is divisible by both a and b
            {
                gcd = i; // if yes, updating the value of gcd with i
            }
        }
        cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    }
    return 0;
}