#include <iostream>

using namespace std;

int main()
{
    // logratimic time complexity

    /*
        1000

        log2(1000)

        2^(x) = 1000

        x = 10 aproximately
    */

    /*
        when to say this code runs in a logratimic time complexity

        when the number of steps is reduced by ????? in each iteration
        reduced by a number grather than 1 by dividing the number of steps by a number grather than 1
    */

    /*
         1 => n
         2=> n/2 => n/3 . n/4, n/1.5, n/1.1
        3 => n/2  n/3 . n/4, n/1.5, n/1.1
        4 => n/2  n/3 . n/4, n/1.5, n/1.1

        1 => n => 10
        2 => n/2 => 5
        3 => n/2 => 3
        4 => n/2 => 2
        5 => n/2 => 1


        n = 100

        1 => 100
        2 => 50
        3 => 25
        4 => 12
        5 => 6
        6 => 3
        7 => 1


        binary search

        searches on a sorted array => logratimic time complexity

        is 10 inside the array?

        1 2 3 4 5 6 7 8 9 10
        O(n) => linear search

        array is sorted

        1. 10 > 8 => 8 is the random index picked
        2. arrays is sorted

        3=> go the right side
    */

    // factorial

    // long long n = 30; // factorial of 30 is grater that 10^18

    // long long fact = 1;
    // for (long long i = 1; i <= n; i++)
    // {
    //     fact *= i;
    // }
    // cout << fact << endl;
}