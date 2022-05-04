#include <iostream>
using namespace std;



double *funkcja ()
{
    return new double;

}


int main()
{

    cout << *funkcja() << endl;
}



