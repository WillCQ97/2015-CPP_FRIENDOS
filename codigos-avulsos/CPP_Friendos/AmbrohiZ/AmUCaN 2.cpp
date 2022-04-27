#include <iostream>
//#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
    //system("color 2");
    float x, y, z;
    int aux;
    bool app = 1;
    
    while (app == 1)
    {
	    cout << endl;
	    cout << "#-------------------------------------------------------#\n";
	    cout << "     AmUCaN - AmbroiZ Universal Calculeitor National    " << endl;
	    cout << "#-------------------------------------------------------#\n" << endl;
	    cout << "Escreva your first numero: ";
	    cin >> x;
	    cout << "Escreva your second numero: ";
	    cin >> y;
	    cout << endl;

	//Índice de operacoes
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
		cout << "A subtracao of your numeros its: ";
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
		cout << "A potenciasseition of your numeros its: ";
		cout << z << endl;
	    }

	//FECHAR O PROGRAMA
	    if(aux == 6)
	    {
		cout << endl;
		app = 0;
		cout << endl;
	    }
    }
    return 0;
}
