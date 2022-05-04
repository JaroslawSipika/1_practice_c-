#include <iostream>
using namespace std;

class funkcja{

public:
    int a;
    int b;

    int wartosc(int);

};



funkcja::wartosc(int n)
{


return a*n+b;

}



int main()
{

funkcja liniowa;

cout << "Podaj a" << endl;
cin >> liniowa.a;
cout << "Podaj b" << endl;
cin >> liniowa.b;

cout << "Podaj x" << endl;
int x;
cin >> x;

cout << liniowa.wartosc(x) << endl;

}
