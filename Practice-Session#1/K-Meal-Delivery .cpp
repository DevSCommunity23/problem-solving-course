/*

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*

    */

    int X, a, b;
    cin >> X >> a >> b;

    if (abs(X - a) < abs(X - b))
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
    }
}