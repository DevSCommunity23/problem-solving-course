#include <iostream>

using namespace std;

// struct Name
// {
//     int x, y;    // x => 4 bytes, y => 4 bytes
//     long long z; // 8 bytes
//     string st;   // 24 bytes
// };

int x = 10; // global

int main()
{
    // Name name;
    // name.st = "Hello";
    // name.x = 10;
    // name.y = 20;
    // name.z = 30;

    // Name *ptr = &name;
    // cout << "Address of Name: " << ptr << endl;
    // cout << "Size of Pointer: " << sizeof(ptr) << endl;
    // cout << "Size of Name: " << sizeof(name) << endl;

    // cout << "x = " << x << endl;
    // cout << "Address of x = " << &x << endl;

    // int *pointer_to_x = &x;

    // cout << pointer_to_x << endl;

    // // cout << *pointer_to_x << endl;
    // cout << "After: " << endl;
    // *pointer_to_x = 20;

    // cout << "x = " << x << endl;
    // cout << "Address of x = " << &x << endl;
    // cout << pointer_to_x << endl;
    // cout << *pointer_to_x << endl;

    // // Pointer points to X
    // // Value of the Pointer is The Address of X

    /*
        Types of Pointers
    */

    // pointer to a type

    // pointer to int, pointer to long long, pointer to string, pointer to vector,

    // double x1 = 10.5;
    // long long x2 = 10;
    // string x3 = "Hello";
    // int x4 = 10;

    // long long *p2 = &x2;
    // string *p3 = &x3;
    // double *p1 = &x1;
    // int *p4 = &x4;

    // cout << sizeof(p1) << " " << sizeof(x1) << endl;
    // cout << sizeof(p2) << " " << sizeof(x2) << endl;
    // cout << sizeof(p3) << " " << sizeof(x3) << endl;
    // cout << sizeof(p4) << " " << sizeof(x4) << endl;

    // char *ptr = "Hello";
    // cout << ptr << endl;
    // // ptr[0] = 'X';

    // cout << ptr << endl;

    // long long arr[5] = {1, 2, 3, 4, 5};
    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // char *ptr = (char *)arr;

    // long long *endAddress = arr + n;

    // for (char *ptr = (char *)arr; ptr < (char *)endAddress; ptr += sizeof(long long))
    // {
    //     cout << *((long long *)ptr) << " ";
    // }

    // // cout << sizeof(arr) << endl;
    // // first number => arr[0] , second number => arr[1], third number => arr[2]
    // // cout << &arr[0] << endl;
    // cout << *arr << endl;

    /*
        new , delete
    */

    // int *ptr = new int(10);

    // cout << ptr << endl;
    // delete ptr;

    // ptr = new int(20);

    // cout << ptr << endl;

    // delete ptr;
}
