#include <iostream>
using namespace std;

int main ()
{
    float a, b, c;
    

    cout << "ingrese el primer angulo: ";
    cin >> a;

    cout << "ingrese el segundo angulo: ";
    cin >> b;

if ((a+b) > 180)
    {
        cout << "No son medidas de un triangulo valido" << endl;
    }


    c = 180 - (a + b);
    
    
    

    cout << c;



















    return 0;
}