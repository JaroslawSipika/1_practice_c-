#include <iostream>
using namespace std;

class bazowa
{
public:
    void typ_wskaznika()
    {
        cout << "bazowa" << endl;
    }

    virtual void typ_obiektu()
    {
        cout << "bazowa" << endl;
    }

};

class pochodna1 : public bazowa
{
    public:
    void typ_wskaznika()
    {
        cout << "pochodna1" << endl;
    }

    void typ_obiektu()
    {
        cout << "pochodna1" << endl;
    }
};

class pochodna2 : public bazowa
{
public:
    void typ_wskaznika()
    {
        cout << "pochodna2" << endl;
    }

    void typ_obiektu()
    {
        cout << "pochodna2" << endl;
    }
};


int main()
{


    bazowa bazowa1;

    pochodna1 pochodna11;
    pochodna2 pochodna22;

    pochodna11.typ_obiektu();
    pochodna22.typ_obiektu();
    bazowa1.typ_obiektu();

    bazowa *wskaznik = &pochodna11;
    wskaznik -> typ_obiektu();


}
