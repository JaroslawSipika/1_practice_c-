#include <iostream>
using namespace std;

class stala2{

public:
    const double d;
    stala2(double dd) :  d(dd){}



};

class stale : public stala2
{
public:
    stala2 liczba;
    stale(double arg1, double arg2) : stala2(arg1), liczba(arg2){}
};
