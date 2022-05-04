#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class identyfikator2{

private:
    int n;

public:
    int id();
    identyfikator2();
};


identyfikator2::identyfikator2()
{
    n = 0;
}

int identyfikator2::id()
{
    return n++;
}




int main()
{
    identyfikator2 identyfikator1;

    cout << identyfikator1.id() << endl;
    cout << identyfikator1.id() << endl;
    cout << identyfikator1.id() << endl;
    cout << identyfikator1.id() << endl;
}
