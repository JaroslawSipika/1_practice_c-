#include <iostream>
using namespace std;

class funkcja{

public:
    int x;
    virtual int wartosc();
};


int funkcja::wartosc()
{
    return x;
}
