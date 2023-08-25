#include<iostream>
#include<cstdlib>
using namespace std;

int Linier_Search(int A[], int n, int k)
{
    for (int i=0; i<n; i++)
    {
        if (A[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int n, kriteria, Posisi;
    cout << "Masukkan ukuran Array: ";
    cin >> n;
    int Array[n];
    cout << "Masukkan Elemen Array" << endl;
    for(int i=0; i<n; i++) {
        cin >> Array[i];
    }
    cout << "Masukkan kriteria yg ingin dicari: ";
    cin >> kriteria;
    Posisi = Linier_Search(Array, n, kriteria);
    if(Posisi == -1)
    {
        cout << ("Elemen yang dicari tidak ada");
    }
    else
    {
        cout << "Elemen ada di indeks: " << Posisi << endl;
    }
    system("Pause");
    return 0;
}