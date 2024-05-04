/*
    H,I
    F


*/

#include <iostream>

using namespace std;

int main()
{
    /*
        He bays A days before X

        he by at time (X - A) => Date

        ate it at time => A+B

        4 3 6
        X A B

        X-A = 4-3 = 1
        A+B = 3+6 = 9


        6 5 1
        X A B
        =>
        by at => 6-5 = 1 => Date
        ate at => 1 + 1 => 2

        when is it delicious?   BuyDate <= AteAt <= X+1
                                    1 <= 2 <= 7


        3 7 12
        X A B

        buyDate = 3-7 = -4
        ateAt = -4 + 12 = 8

        BuyDate <= AteAt <= X+1

        -4 <= 8 <= 4 => false => dangerous

    */

    long long X, A, B;
    cin >> X >> A >> B;
    // current time 0
    // bought at time -A => 5 => a = 3 , 2
    // at at time -A+B => 2+6 = 8
    // X => delicious
    // X+1 => safe
    // X+1 > AteAt => dangerous

    long long BuyDate = -A;
    long long AteAt = BuyDate + B;

    if (BuyDate <= AteAt && AteAt < X - A)
    {
        cout << "delicious" << endl;
    }
    else if (BuyDate <= AteAt && AteAt < X + 1)
    {
        cout << "safe" << endl;
    }
    else
    {
        cout << "dangerous" << endl;
    }
}