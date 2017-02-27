#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    srand (time(0));
   int a=rand()%30+10;
   int *mass=new int[a];
   srand (time(0));
   for (int i=0; i<a; i++)
   {
       *(mass+i)=rand ()%9+1;
       cout<<*(mass+i)<<" ";
   }
    int b;
    if (pow((sqrt(a)),2)==a) b=sqrt(a);
    else b=sqrt(a)+1;
    cout<<endl;
    int **mass1;
    mass1=new int*[b];
    for (int i=0;i<b;i++)
    {
        mass1[i]=new int[b];
    }
    for(int i=0;i<b*b;i++)
    {
        if ((i%b)==0) cout<<endl;
        if (i<a) mass1[i/b][i%b]=*(mass+i);
        else mass1[i/b][i%b]=0;
        cout<<mass1[i/b][i%b]<<" ";
    }
delete[]mass;
delete[]mass1;
}
