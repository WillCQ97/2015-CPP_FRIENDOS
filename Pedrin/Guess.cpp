#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    system("color F0");

    int x, aux, c = 10;
    bool game = 1;


    srand(time(NULL));
    x = rand() % 100 + 1;

    while(game == 1)
    {
        cout << "You have " << c << " tries. Guess the number, kid: ";
        cin >> aux;

        if(aux < x)
        {
            cout << "The secret number is more!" << endl << endl;
            c = c - 1;
        }

        if(aux > x)
        {
            cout << "The secret number is less!" << endl << endl;
            c = c - 1;
        }

        if(aux == x)
        {
            cout << "Congratulations! Play again and again!" << endl << endl;
            game = 0;
        }

        if(c == 0)
        {
            game = 0;
            cout << "Your asshole!" << endl;
            cout << "Get out of my game!" << endl;
        }
    }

    return 0;
}
