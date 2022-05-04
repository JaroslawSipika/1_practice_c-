#include <iostream>
using namespace std;



int *funkcja ()
{
    return new int;

}


int main()
{

    cout << *funkcja() << endl;
}


