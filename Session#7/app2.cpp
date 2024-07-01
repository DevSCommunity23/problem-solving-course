#include <iostream>

using namespace std;
// templates

template <class T>
class Adder
{
public:
    T Add(T a, T b)
    {
        return a + b;
    }
};

int main()
{
    freopen("output.txt", "w", stdout);

    Adder<int> adder;
    Adder<string> adder2;
    cout << adder2.Add("Hello", "World") << endl;
    cout << adder.Add(5, 6) << endl;
}