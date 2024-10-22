#include <iostream>

using namespace std;

void csere(int* egyik, int* masik) 
{
    int temp = *egyik;
    *egyik = *masik;
    *masik = temp;
}

void csere2(int& egyik, int& masik)
{
    int temp = egyik;
    egyik = masik;
    masik = temp;
}

int main()
{
    cout << "Hello World!" << endl << "sadljkfh" << " "<< " sdf ";

    int a;
    a = 7;

    int b = 10;
    a = 8;

    string s;
    s = "asdf";

    char c = '4';
    cout << s[0];

    float d = 6.2;
    double e = 10.2;

    bool log = a == 5;
    if (a)
    {
        cout << "ez";
    }
    else 
    {
        cout << "az";
    }

    while (log)
    {

    }

    do
    {

    } while (log);


    //for (int& elem : tomb) // ez lesz a foreach
    //{

    //}

    for (size_t i = 0; i < 5; i++)
    {
        cout << i<<endl;
    }


    // visszafele iterálásnál sose legyen size_t!!!
    for (int  i = 5; i >= 0; i--)
    {
        cout << i << endl;
    }

    long x = 6; // akár negatív szám, de több byte-on tároljuk, mint az int. Olyan mint az int csak nagyobb.
    unsigned long long  y = -2;
    cout << y;

    // ----------------------------------------
    cout << "-----------------------"<<endl;
    cout << a << endl;
    cout << &a << endl;
    cout << *&a << endl;
    a++;
    cout << a << endl;
    cout << &a << endl;
    cout << *&a << endl;
    cout << *&*&*&*&*&*&*&*&a << endl;

    int* p = &a;
    //double* q = &a; ezt azért kiszúrja, hogy rossz
    cout << p;

    int n = 5;
    int m = 7;
    cout << "\nn = " << n << ", " << "m = " << m << endl;
    csere(&n, &m);
    cout << "\nn = " << n << ", " << "m = " << m << endl;

    csere2(n, m);
    cout << "\nn = " << n << ", " << "m = " << m << endl;

}
