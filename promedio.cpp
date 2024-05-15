#include <iostream>
using namespace std;

int main ()
{

float n1, n2, n3, n4, n5, n6;
float promedio;

cout << "ingrese las notas de su ciclo: ";
cin >> n1;
cin >> n2;
cin >> n3;
cin >> n4;
cin >> n5;
cin >> n6;

promedio = ((n1 * 0.1) + (n2 * 0.1) + (n3 * 0.15) + (n4 * 0.2) + (n5 * 0.2) + (n6 * 0.25));

cout <<"Su promedio es: " << promedio << endl;

if (promedio >= 6)
{
    cout << "Usted paso la materia, Felidicades!";
}

else cout << "Usted ha reprobado la materia";



    return 0;
}