#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = nullptr;
    }
    Node(int data, Node *next = nullptr) : data(data), next(next) {}

    ~Node()
    {

        cout << "Deleting Node with data: " << data << endl;
        if (next != nullptr)
        {
            delete next;
        }
    }
};

class LinkedList
{
    Node *head, *tail;

public:
    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteFromList(int value)
    {
        if (head != nullptr and head->data == value)
        {
            Node *temp = head->next;
            head->next = nullptr;

            delete head;

            head = temp;

            return;
        }
        Node *curr = head;
        while (curr != nullptr and curr->next != nullptr)
        {
            if (curr->next->data == value)
            {
                Node *temp = curr->next->next; // store reference to the remaiing list

                // cout << temp << " " << curr->next->next << endl;
                // cout << "DATA IS :" << curr->next->next->data << endl;
                // cout << "TEMP IS :" << temp->data << endl;
                if (curr->next == tail)
                    tail = curr;
                // if the node to be deleted is the last node

                curr->next->next = nullptr; // cut the link

                delete curr->next; // delete the node
                curr->next = temp; // link the remaining list
                return;
            }
            curr = curr->next;
        }
    }

    void print()
    {
        auto temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~LinkedList()
    {
        if (head != nullptr)
            delete head;
    }
};

int main()
{
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.print();

    list.deleteFromList(2);
    cout << "------------------------" << endl;
    list.deleteFromList(4);
    cout << "------------------------" << endl;
    // list.insert(5);
    // list.insert(6);

    // list.print();
}