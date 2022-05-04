#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int r;

    cout << "Podaj liczbe calkowita a " << endl;
    cin >> a;
    cout << "Podaj liczbe calkowita b " << endl;
    cin >> b;



    if (a>b)
    {
      while (a%b!=0)
      {
          r=a%b;
          a=b;
          b=r;
      }
    cout << b << endl;
    }

    if (b>a)
    {
      while (b%a!=0)
      {
          r=b%a;
          b=a;
          a=r;
      }
    cout << a << endl;
    }

}

