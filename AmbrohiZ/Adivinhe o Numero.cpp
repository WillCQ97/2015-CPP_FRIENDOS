#include <iostream>
//#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    //system("color 02");
    int x, aux, c;
    bool game = 1;
    c = 10;

    cout << endl;
    cout << "#-----------------------------------#" << endl;
    cout << "    Adivinhe o numero do AmbroiZ!    " << endl;
    cout << "#-----------------------------------#" << endl;
    srand(time(NULL));
    x = rand() % 100 + 1;

    while(game==1)
    {
        cout << "Voce tem: " << c << " tentativas... ";
        cout << "Tente sua sorte, man!: ";
        cin >> aux;
        if(aux < x)
        {
            cout << "Meu numero e maior!... Tente novamente!" << endl;
            c = c - 1;
            cout << endl;
        }
        if(aux > x)
        {
            cout << "Deu mole! Meu numero e menor... Tente de novo!" << endl;
            c = c - 1;
            cout << endl;
        }
        if(c == 0)
        {
            cout << endl;
            cout << "Voce errou o numero 10 vezes! Nao e digno de continuar no jogo!" << endl;
            game = 0;
        }
        if(aux == x)
        {
            cout << endl;
            cout << "---------------------------------" << endl;
            cout << "Parabens jovem! Acertou o numero!" << endl;
            cout << "---------------------------------" << endl;
            cout << endl;
            game = 0;
        }

    }
    return 0;
}
