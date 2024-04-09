#include <iostream>
using namespace std;

typedef struct Node
{
    int NIM;
    string nama;
    char JK;
    int Nilai;
    string NilaiAbjad;
    Node *next;
} Node;
Node *front, *rear;
void Insert(int nimStudent, string NameStudent, char jkl, int grade, string wordgrade)
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));

    if (temp == NULL)
    {
        cout << "No memory left" << endl;
    }
    else
    {
        temp->NIM = nimStudent;
        temp->nama = NameStudent;
        temp->JK = jkl;
        temp->Nilai = grade;
        temp->NilaiAbjad = wordgrade;
        temp->next = NULL;

        if (front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
        cout << "The data has successfully added to the system" << endl;
    }
}
/*void Display()
{
    Node *t;
    if (front == NULL)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        t = front;
        cout << "Front->";
        while (t)
        {
            cout << "Nama Mahasiswa : " <<
        }
    }
}*/

int main()
{

    int option;
    front = NULL;
    rear == NULL;
    cout << "Welcome to Data Center" << endl;
    cout << "Here's some of our feature that you can access" << endl;
    cout << "1 . Add Data" << endl;
    cout << "2 . Find Data" << endl;
    cout << "3 . Student Statistic" << endl;
    cout << "4 . Find Student " << endl;
    cout << "5 . Exit " << endl;
    cout << "Select Option : " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        /* int numNIM;
         string namaMaha;
         char jenisKel;
         int nilaiMaha;
         string nilaiKata;
         cout << "Please enter the student Number : " << endl;
         cin >> numNIM;
         cout << "Please enter the student Name : " << endl;
         cin >> namaMaha;
         cout << "Please enter the student gender : " << endl;
         cin >> jenisKel;
         cout << "Please enter the student grade (number from 0-100) : " << endl;
         cin >> nilaiMaha;
         cout << "Please enter the student grade with word (E-A) : " << endl;
         cin >> nilaiKata;
         Insert(numNIM, namaMaha, jenisKel, nilaiMaha, nilaiKata);*/
    case 2:
    case 3:
    case 4:
        cout << "Exiting" << endl;
        break;
    default:
        cout << "Invalid Input !! Try inserting the correct one !!" << endl;
        break;
    }

    return 0;
}