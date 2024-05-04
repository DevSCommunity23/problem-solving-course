#include <iostream>
using namespace std;

int main()
{
    /*

        substring =>

        abcdef

        somestring

        a => substring
        ab => substring
        def => substring
        bcdef => substring
        abcdef => substring
        cde => substring
        abc => substring


        constraints:
        s,t => size of s and t is between 1 and 1000,
        the size of t is less that or equal to the size of s
        s,t is only lowercase letters

        s => cabacc => cabccc
        t => abc

        abcacc => 3


    */

    string t, s;
    cin >> s >> t;

    // int array_size = s.size() - t.size() + 1;
    // int arr[array_size];
    /*
        cabacc
           abc
        0 2
        1 3
        2 4
        3 5
    */

    int count = 0;
    int min = 10000000;
    for (int i = 0; i <= s.size() - t.size(); i++)
    {
        for (int x = 0; x < t.size(); x++)
        {
            if (t[x] != s[i + x])
            {
                count++;
            }
        }

        if (count < min)
            min = count;

        count = 0;
    }
    cout << min;
    // int min = arr[0];
    // for (int i = 0; i < array_size; i++)
    // {
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }
    // cout << min;
}
