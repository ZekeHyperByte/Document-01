#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string Mahasiswa;
    long long nomorMahasiswa;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    // Fungsi untuk menambahkan node diawal linkedlist
    void insert(string Mahasiswa, long long nomorMahasiswa)
    {
        Node *newNode = new Node;
        newNode->Mahasiswa = Mahasiswa;
        newNode->nomorMahasiswa = nomorMahasiswa;
        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk menampilkan seluruh linkedlist
    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << "(" << temp->Mahasiswa << ", " << temp->nomorMahasiswa << ") -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Fungsi untuk menghapus seluruh linked list
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
    LinkedList idMahasiswa;

    // Memasukan elemen kedalam linkedlist
    idMahasiswa.insert("Muhammad Fiqi Firmansyah", 2304130103);
    idMahasiswa.insert("Adi", 2304130102);
    idMahasiswa.insert("Bagas", 2304130101);

    // Menampilkan LinkedList
    cout << "Linked List: ";
    idMahasiswa.display();

    return 0;
}
