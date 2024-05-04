#include <iostream>

using namespace std;

int main()
{
    /*
        Time Complexity => means how much time it takes to run the code

        time Complexity => depends on the number of lines of code
    */
    // const int n = 10;
    // // cin >> n;
    // for (int i = 0; i < n; i++) // n times
    // {
    //     cout << i << endl;
    // }
    // complexity => O(1) => constant time
    // time complexity => O(n)
    // itraions => times
    // O(itraions) => maximum number of steps to run the code
    // O(N) => N times  variable

    // int n;      // O(1)
    // cin >> n;   // O(1)
    // int arr[n]; // O(1)

    // for (int i = 0; i < n; i++) // n times => O(n)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++) // n times => O(n)
    // {
    //     cout << arr[i] << " ";
    // }
    // O(1) + O(1) + O(1) + O(n) + O(n)
    // O(3) + O(2n)
    // O(3 + 2n)
    // O(2n)
    // O(n)
    // caculate for each element the number of elements smaller than it

    // for (int i = 0; i < n; i++) // n times => O(n)
    // {
    //     int count = 0;              // O(1)
    //     for (int j = 0; j < n; j++) // n times => O(n)
    //     {
    //         if (arr[j] < arr[i]) // O(1)
    //         {
    //             count++; // O(1)
    //         }
    //     }
    //     cout << count << " "; // O(1)
    // }
    // cout << endl;

    /*
       O(n) + O(n) + O(n*n) + O(n)
       O(3n + n^2)
       O(n^2)
    */

    /*
        which one is better => O(n) or O(n^2)
    */

    // int n, m;
    // cin >> n >> m;
    // int arr[n];
    // int arr2[m];

    // for (int i = 0; i < n; i++) // n times => O(n)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < m; i++) // m times => O(m)
    // {
    //     cin >> arr2[i];
    // }

    // for (int i = 0; i < n; i++) // n times => O(n)
    // {
    //     int counter = 0;            // O(1)
    //     for (int j = 0; j < m; j++) // m times => O(m)
    //     {
    //         if (arr[i] > arr2[j]) // O(1)
    //         {
    //             counter++; // O(1)
    //         }
    //     }

    //     cout << counter << " "; // O(1)
    // }

    /*
        O(n) + O(m) + O(n) + O(n*m) + O(n*m) +  O(n*m)  + O(n)

        O(3n + m +  3*n*m)

        O(n + m + n*m)

        O(n*m) => n*m != n*n
    */

    // int n, m, k;
    // cin >> n >> m >> k;
    // int arr[k];
    // int matrix[n][m]; // array of arrays => matrix
    /*
        0 1 2
        1 2 3 => 0
        4 5 6 => 1
        7 8 9 => 2

        1 => arr[0][0]
        9 => arr[2][2]
        7 => arr[2][0]
    */
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }

    // for (int i = 0; i < k; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < k; i++)
    // {
    //     for (int i = 0; i < k; i++)
    //     {
    //     }
    // } // O(k*k) => O(k^2)

    /*
        O(n*m) +  O(k^2)
        => assume k > n*m
        => worst case is n*m is worng
        O(n*m + k^2)

        why we did not remove k?
            k is the largest power for this variable

        when to remove ?
            n , m , n*m

            n  n*m?  n > n*m => impossible remove n
            m  n*m?  m > n*m => impossible remove m
            k  n*m?  k > n*m => possible must add k
            k  k^2?   k > k^2 => impossible => remove k

            // in the case n and m not zero
    */

    // calculate the speed of the code

    /*
        codeforces, hackerrank, leetcode, topcoder, atcoder
        1s => 10^9 operations
        2s => 2*10^9 operations
        10s => 10^10 operations
    */

    int n;
    // cin >> n;
    // long long X = 1378;
    // // X^n X*X*X........ X*X*X => n times
    // // last digit of a number =>  number % 10
    // long long res = 1;
    // for (int i = 0; i < n; i++) // 2 operations inside the loop
    // {
    //     res *= X;  // 1 operation
    //     res %= 10; // 1 operation
    // }
    // /*
    //     Time Complexity => O(n)
    //     n upper bound is 10^9

    //     10^9 * (2+1+log10(res)) => 12 * 10^9
    // */

    // cout << res;
}