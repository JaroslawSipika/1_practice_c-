#include <iostream>
using namespace std;

int counter = 0;

int zliczanie (int n)
{
    counter = counter + n;
    return counter;
}


int main()
{

    int n=1;
    zliczanie(n);
    zliczanie(n);
    zliczanie(n);

    cout << "Funkcja zostala wywolana: " << counter << " razy" << endl;
}
