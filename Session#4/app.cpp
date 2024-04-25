#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// void pass_array(int *arr, int n) // array pass by reference
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void pass_vec

// void pass_vector(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }
// void pass_string(string &str)
// {
// }
// void pass_int(int &x)
// {
// }

int my_compare(string &str1, string &str2)
{
    int answer = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (i > str2.size())
            return answer;

        answer += str1[i] - str2[i];
    }

    return answer;
}
int main()
{
    // string str = "Bbcdedfghij";
    // string str2 = "AbcdedfghiK";
    // cout << str2.compare(str) << endl; first index where the strings differ
    // cout << my_compare(str, str2) << endl;
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // pass_array(arr, 10);

    // int n = 40;
    // vector<int> v(10, 0);
    // pass_vector(v);
    // int arr[n] = {};

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[6] = 30;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int n;

    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n + 1]; // 0 1 2 3 4 5 6 ........ n-1
    // // arr[n] => out of bound
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Enter the value of arr[" << i << "]: ";
    //     cin >> arr[i];
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "arr[" << i << "]: " << arr[i] << endl;
    // }

    /*
        what is a string?

        string is an array of characters
    */

    // char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '\0'};

    // int x = 'a' + 'x'; // =>
    // cout << x << endl;
    // str[0] = 'z';

    // string str = "abcdedfghij"; // jihgfedcba
    // str.append("!!!");
    // reverse(str.begin() + 3, str.end() - 5);
    // str.erase(3, 4);
    // string co = str.substr(3, str.size() - 3);
    // cout << co << endl;
    // cout << str << endl;
    // cout << str << endl;
    // cout << str.at(-1) << endl;
    // str[0] = 'x';
    // cout << str << endl;
    // string somestring = "some string";
    // string searchSrting = "stringgg";
    // if (somestring.find(searchSrting) != -1)
    // {
    //     cout << "Found" << endl;
    //     return 0;
    // }
    // else
    //     cout << "Not Found" << endl;

    // vector is a dynamic array

    // vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // v[0] = 1;

    // v.pop_back(); // remove
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // vector<string> v(5, "I am a string");

    // v.at(5) = "I";
    // v[5] = "I";
    // v.pop_back();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    // vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // v[4] = 30000;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // v = vector<int>(5, 5);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << endl;

    // vector<int> v2 = {1};
    // v += v2;

    // bool isPresent = find(v.begin(), v.end(), 10);

    // for each loop

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (int &x : arr)
    // {
    //     // x = 100;
    //     cout << x << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // int n;
    // cin >> n;
    // vector<int> v, x;
    // v = x = vector<int>(n, 0);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < n; i++)
    //     cin >> x[i];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << x[i] << " ";
    // }
    // cout << endl;
    // a b c d e f g h i j k
}