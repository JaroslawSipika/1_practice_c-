#include <iostream>
#include <string>
using namespace std;

class staly_napis{

private:
    char staly[100];

public:
    staly_napis(char*);
    char at(int);


};


staly_napis::staly_napis(char *a)
{
    for (int i=0; a[i]!=0; i++)
    {
        staly[i] = a[i];
    }
cout << staly << endl;

}


char staly_napis::at(int n)
{
    return staly[n];
}



int main()
{
    char tab[9] = "JUVENTUS";
    staly_napis napis1(tab);

    int b;
    cin >> b;
    cout << napis1.at(b) << endl;
}
