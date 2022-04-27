#include <iostream>
#include "math.h"
//#include "windows.h"

using namespace std;

int main()
{
    system("color F0");
    float x, y, z;
    bool app = 1;
    while(app == 1)
    {
    cout << endl << "CALC - The Pedro's calculator" << endl;
    cout << "-----------------------------" << endl;
    cout << endl << "Digite logo X: ";
    cin >> x;
    cout << endl << "Digite agora Y: ";
    cin >> y;

    int aux;
    cout << endl << "Digite a operacao desejada" << endl;
    cout << "1) Soma" << endl;
    cout << "2) Subtracao" << endl;
    cout << "3) Multiplicacao" << endl;
    cout << "4) Divisao" << endl;
    cout << "5) Potencicao" << endl;
    cout << "6) Sair" << endl;

    cout << endl << "Operacao Selecionada: ";

    cin >> aux;

    if(aux == 1)
    //SOMA
    {
        z = x + y;
        cout << endl << "That's your result: ";
        cout << z << endl;
    }

    if(aux == 2)
    //SUBTRAÇÃO
    {
        z = x - y;
        cout << endl << "That's your result: ";
        cout << z << endl;
    }

    if(aux == 3)
    //MULTIPLICAÇÃO
    {
        z = x * y;
        cout << endl << "That's your result: ";
        cout << z << endl;
    }

    if(aux == 4)
    //DIVISÃO
    {
        z = x / y;
        cout << endl << "That's your result: ";
        cout << z << endl;
    }

    if(aux == 5)
    //POTENCIAÇÃO
    {
        z = pow(x,y);
        cout << endl << "That's your result: ";
        cout << z << endl;
    }

    if(aux == 6)
    //SAIR
    {
        app = 0;
    }
    }
    return 0;
}
