#include <iostream>
// assert
// #include <cmath>
// #include <iomanip>
#include <algorithm>
// accumulate
#include <numeric>
using namespace std;

// char my_to_upper(char small)
// {
//     assert(small >= 'a' and small <= 'z');
//     return small - 32;
// }
int main()
{
    // cout << my_to_upper('A') << endl;
    // sqrt, pow, min,max , floor, ceil, round,

    // floor => rounds down
    // ceil => rounds up

    // double useFloor = floor(2.999999);
    // double useRound = round(2.6);
    // double useCeil = ceil(2.00001);
    // cout << "round(2.6) = " << useRound << endl;
    // cout << "floor(2.3) = " << useFloor << endl;
    // cout << "ceil(2.00001) = " << useCeil << endl;

    // double useSqrt = sqrt(6); // 10
    // cout << fixed << setprecision(12);
    // cout << "sqrt(6) = " << useSqrt << endl;

    // long long usePow = pow(25, 1 / 2.0);

    // cout << fixed << setprecision(12);
    // cout << "pow(2,3) = " << usePow << endl;

    // time complexity of pow function is O(log(n))
    // time complexity of sqrt function is O(log(n))

    // double x = 10;
    // double y = 2;
    // // min,max => taks same data types
    // double ans = min(x, y);
    // cout << "min(10,2) = " << ans << endl;

    // char a = 'a';
    // char b = 'B';
    // char A = toupper(a);
    // char B = tolower(b);

    // cout << "toupper(a) = " << A << endl;
    // cout << "tolower(B) = " << B << endl;

    // string s = "hello";
    // string caplitalaized = s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     caplitalaized[i] = toupper(s[i]);
    // }
    // cout << caplitalaized << endl;

    // binary_search

    // binary_search => O(log(n))
    // true => if element is present
    // false => if element is not present

    // bool isPresent = binary_search(v.begin(), v.end(), 5);

    // lower_bound => O(log(n))
    // loewr_bound => returns itrator points to the first element graeter than or equal to the target element

    // auto it = lower_bound(v.begin(), v.end(), 5);
    // cout << *it << endl;

    // upper_bound => O(log(n))
    // upper_bound => returns itrator points to the first element greater than the target element

    // auto it = upper_bound(v.begin(), v.end(), 5);

    // if (it == v.end())
    // {
    //     cout << "Element not found" << endl;
    // }
    // else
    //     cout << *it << endl;

    // count , acccumulate

    // count => O(n)
    // accumulate => O(n)

    // count counts the numbre of occurences of the target element
    // accumulate => returns the sum of all the elements in the range
    // vector<double> v = {1e9, 1e9, 1e9, 1e9};

    // cout << accumulate(v.begin(), v.end(), 0ll) << endl;

    // sort => O(nlog(n)) n * log(n)

    // sort(v.begin(), v.end()); // 1 2 3 4
    // sort(v.begin(), v.end(), greater<int>()); // 4 3 2 1
    // sort(v.rbegin(), v.rend()); // 4 3 2 1

    // find

    // find => O(n)
    // search in a non sorted array
    // vector<int> v = {2, 2, 3, 4, 5};
    // auto it = find(v.begin(), v.end(), 1);

    // cout << (it - v.begin()) << endl; // if not found then it will return v.end()
}