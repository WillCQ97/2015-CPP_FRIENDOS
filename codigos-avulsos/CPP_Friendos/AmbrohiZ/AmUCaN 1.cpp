#include <iostream>
//#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    //system("color 02");
    float x, y, z;
    cout << "    AmUCaN - AmbroiZ Universal Calculeitor National   " << endl;
    cout << "#----------------------------------------------------#\n" << endl;
    int aux;
    cout << "Escreva your first numero: ";
    cin >> x;
    cout << "Escreva your second numero: ";
    cin >> y;
    cout << endl;

//Índice de operaçoes
    cout << "Selecione sua operation desejada:" << endl << endl;
    cout << "1) Soma" << endl;
    cout << "2) Subtracao" << endl;
    cout << "3) Multiplicacao" << endl;
    cout << "4) divisao" << endl;
    cout << "5) Potenciacao" << endl;
    cout << "6) Exitacao" << endl;
    cout << "Escreva your opcao: ";
    cin >> aux;
    cout << endl;

// SOMA DOS NÚMEROS
    if(aux == 1)
    {
        z = x + y;
        cout << "A soma of your numeros its: ";
        cout << z << endl;
    }

//SUBTRAÇÃO DOS NÚMEROS
    if(aux == 2)
    {
        z = x - y;
        cout << "The subtracao of your numeros its: ";
        cout << z << endl;
    }

//MULTIPLICAÇÃO DOS NÚMEROS
    if(aux == 3)
    {
        z = x * y;
        cout << "A multiplicacao of your numeros its: ";
        cout << z << endl;
    }

//DIVISÃO DOS NÚMEROS
    if(aux == 4)
    {
        z = x / y;
        cout << "A divisao of your numeros its: ";
        cout << z << endl;
    }

//POTENCIAÇÃO DOS NÚMEROS
    if(aux == 5)
    {
        z = pow(x,y);
        cout << "The potenciasseition of your numeros its: ";
        cout << z << endl;
    }

    return 0;
}
