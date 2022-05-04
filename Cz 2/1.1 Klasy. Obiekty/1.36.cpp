#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class identyfikator{

private:
    int n;

public:
    int id();
};

int identyfikator::id()
{
    srand( time( NULL ) );
    n =((rand() % 1000 ) + 0 );
    return n;
}




int main()
{
    identyfikator identyfikator1;

    cout << identyfikator1.id() << endl;

}
