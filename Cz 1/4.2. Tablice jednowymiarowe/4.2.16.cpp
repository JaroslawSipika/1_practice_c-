#include <iostream>
using namespace std;

void funkcja (double *wsk)
{
    delete [] wsk;
}


int main()
{
    funkcja (new double[5]);
}

