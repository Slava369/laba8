#include <iostream>
#include <iostream>
#include <cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int massiv[9];
int massiv_2[9];
int vopros, ress=0, ocenca=0;
int user (int massiv[9], int massiv_2[9])
{
    for (int i = 1, j=1; i <=10, j<=10; i++, j++){

        massiv[i]=rand()%9+2;
        massiv_2[j]=rand()%9+2;

        cout<<""<<massiv[i]<< " * " <<massiv_2[j]<< " = ";
        ress=massiv[i]*massiv_2[j];
        cin>>vopros;
        cout<<" Pravilniy otvet " <<ress<<  " \n\n ";
        if(vopros==ress)ocenca++;
      }
return massiv[9], massiv_2[9];
}
void resultat(int ocenca)
{
cout<<ocenca<< " ballow iz 10 \n";
}


using namespace std;

int main()

{
srand(time(NULL));
int mas[9];
int mas_2[9];
user(mas, mas_2);
resultat(ocenca);

}
