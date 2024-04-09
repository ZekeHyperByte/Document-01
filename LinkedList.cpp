#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string dataString;
    long long dataLong;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    // Fungsi untuk menambahkan node diawal linkedlist
    void insert(string dataString, long long dataLong)
    {
        Node *newNode = new Node;
        newNode->dataString = dataString;
        newNode->dataLong = dataLong;
        newNode->next = head;
        head = newNode;
    }

    // Function to print the linked list
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << "(" << temp->dataString << ", " << temp->dataLong << ") -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Function to delete the entire linked list to prevent memory leaks
    void deleteList()
    {
        Node *current = head;
        Node *next;
        while (current != nullptr)
        {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    // Destructor otomatis menghacurkan linkedlist ketika object keluar scope
    ~LinkedList()
    {
        deleteList();
    }
};

int main()
{
    LinkedList myList;

    // Memasukan elemen kedalam linkedlist
    myList.insert("Muhammad Fiqi Firmansyah", 2304130103);
    myList.insert("Adi", 2304130102);
    myList.insert("Bagas", 2304130101);

    // Menampilkan LinkedList
    cout << "Linked List: ";
    myList.display();

    return 0;
}
