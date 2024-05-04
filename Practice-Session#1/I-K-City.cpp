/*
    H,I
    F


*/

#include <iostream>

using namespace std;

int main()
{
    /*
        he has A,B packets of cookies
        he has three goats
        he can use A only
        or B only
        or both

        he wants to give each goat the same number of cookies

        A=> divide by 3
        B=> divide by 3
        A+b => divide by 3
    */

    long long A, B;
    cin >> A >> B;
    if (A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0)
    {
        cout << "Possible" << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
}