#include <iostream>
#include <iostream>
#include <cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

float modul(float modul)
{
float x;
if(modul<0)
{
x=modul*-1;
return x;
}
else return modul;
}
float stepen(float a , int stepen)
{
float c;
c=pow(a,stepen);
return c;
}

int main()
{
float a , y , x , ur;
int b;
cout<<"vvod chislo: "<<endl;
cin>>a;
cout<<"vvod stepen chisla: "<<endl;
cin>>b;
cout<<"Modul: ";
y=modul(a);
cout<<y<<endl;

x=stepen(a,b);
cout<<a<<"^"<<b<<" = "<<x<<endl;
cout<<"Uravnenie\n"<<a<<"^"<<b<<" * 4 = ";
ur=stepen(a,b)*4;
cout<<ur<<endl;
cout<<endl;
}







