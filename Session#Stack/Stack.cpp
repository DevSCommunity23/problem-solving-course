#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
    int *data;
    int size;
    int currentIndex;

    void checkIndex()
    {
        if (currentIndex == 0)
        {
            cout << "Stack is empty" << endl;
            exit(1);
        }
    }

public:
    Stack()
    {
        size = 4;
        data = new int[size];
        currentIndex = 0;
    }

    void push(int value)
    {
        if (currentIndex == size)
        {
            int *newData = new int[size * 2];
            for (int i = 0; i < size; i++)
                newData[i] = data[i];

            delete[] data;

            data = newData;
        }
        data[currentIndex] = value;
        currentIndex++;
    }
    void pop()
    {
        checkIndex();
        currentIndex--;
    }
    int top()
    {
        checkIndex();
        return data[currentIndex - 1];
    }
    bool empty()
    {
        return currentIndex == 0;
    }
};
bool check(const string &sequnce)
{
    Stack s;

    for (int i = 0; i < sequnce.size(); i++)
    {
        if (sequnce[i] == '(')
            s.push(i);
        else if (sequnce[i] == ')')
        {
            if (s.empty())
                return false;
            s.pop();
        }
    }

    return s.empty();
}

vector<int> make_next_grater(const vector<int> &v)
{

    Stack st;

    vector<int> ans(v.size(), -1);

    for (int i = 0; i < v.size(); i++)
    {
        while (not st.empty() and v[i] > v[st.top()])
        {
            ans[st.top()] = v[i];

            st.pop();
        }

        st.push(i);
    }

    return ans;
}

int main()
{
}