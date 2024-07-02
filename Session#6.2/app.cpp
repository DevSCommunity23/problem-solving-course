#include <iostream>

using namespace std;

int main()
{

    int itrations = 1e6;
    while (itrations--)
    {
        int n = 1e6;
        int *arr = new int[n];
        // some calculations
        delete[] arr;
    }
}
