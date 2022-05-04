#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char *zwroc (char ** tablicatablic, int n)
{

    for (int i=0; i<n-1; i++)
    {
            int j=0;
            if (tablicatablic[i][j]<tablicatablic[i+1][j])
            {
                    tablicatablic[i+1] = tablicatablic[i];
            }

            else if (tablicatablic[i][j]==tablicatablic[i+1][j])
            {
                int zmienna = 1;
                for(int k=0; zmienna != 0 ; k++)
                {
                        if (tablicatablic[i][k] < tablicatablic[i+1][k])
                        {
                                tablicatablic[i+1] = tablicatablic [i];
                                zmienna = 0;
                        }
                        else if (tablicatablic[i][k] > tablicatablic[i+1][k])
                        {
                                zmienna = 0;
                        }

                }
            }

    }



return *tablicatablic;

}

int main()
{
    char tab1[] = "ARBA";
    char tab2[] = "ARAA";
    char tab3[] = "ARCA";

    char *wsk1  = tab1;
    char *wsk2  = tab2;
    char *wsk3  = tab3;

    char *tabwsk [] = {wsk1, wsk2, wsk3};


    int a = 3;

    cout << zwroc (tabwsk, a) << endl;
}
