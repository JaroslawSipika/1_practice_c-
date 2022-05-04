#include <iostream>
using namespace std;

class figura{

public:
    double pole;
    double obwod;
};

class trojkat : public figura{

public:
    double a;
    double h;
};

class prostokat : public figura{

public:
    double a;
    double b;
};



int main()
{

    trojkat trojkat1;

    trojkat1.pole = trojkat1.a * 0.5 * trojkat1.h;

    cout << trojkat1.pole << endl;

}



