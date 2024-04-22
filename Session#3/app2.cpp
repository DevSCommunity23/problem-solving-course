#include <iostream>
#include <functional>
using namespace std;

// const double PI = 3.14;

// double circleArea(double raduis)
// {
//     return PI * raduis * raduis;
// }

// void someFunction()
// {
//     PI = 5;
// }
// pass by value -> copy of the value
// pass by reference -> reference to the value

// void change(int &b)
// {
//     b = 100; // alters the value of x
// }
int main()
{
    // int x = 5;
    // change(x);
    // cout << x << endl;
    // someFunction();
    // cout << circleArea(1) << endl;

    // lamda function is a function can be assigned to a variable
    // const double PI = 3.14;

    // auto circleArea = [&](double raduis) -> double
    // {
    //     return PI * raduis * raduis;
    // };

    /*

        function<retrunType(parameter1,parameter2)> name = [&](parameter1,parameter2) -> returnType
        {
            // function body
            // return
        };

    */
    // x is a normal variable
    // Type name value
    // function<int(int, int)> x = [&](int a, int b) -> int
    // {
    //     return a + b;
    // };

    // cout << x(5, 6) << endl;
    return 0;
}