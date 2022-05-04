#include <iostream>
using namespace std;

void funkcja (int *wsk)
{
    delete [] wsk;
}


int main()
{
    funkcja (new int[5]);
}
