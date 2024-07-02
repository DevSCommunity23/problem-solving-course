#include <iostream>

using namespace std;

int *someFunction()
{
    int *x = new int(10);

    return x;
}

int main()
{
    int *ptr = someFunction();

    if (ptr == nullptr)
    {
        cout << "Null Pointer" << endl;
    }
    else
    {
        cout << "Not Null Pointer" << endl;
        cout << *ptr << endl;
    }

    return 0;
}
