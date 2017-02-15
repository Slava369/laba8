#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int sort (int arr[])
{
    cout<<"otsort\n";
int a , x;
for(int i=0 ; i<13 ; i++)
{
a=i ; x=arr[i];
for(int j=i+1 ; j<13 ; j++)
{
if(arr[j]<x)
{
a=j ; x=arr[j];
}
}
arr[a]=arr[i] ; arr[i]=x;
cout<<arr[i]<<" ";
}
}
int max (int arr[])
{

int maxx=0, minn, inmax, inmin, x ;
for(int i=0 ; i<13 ; i++)
{
 if (maxx < arr[i])
        {
            maxx = arr[i];
            inmax = i;
        }
       if (arr[i] > maxx) maxx = arr[i];
            if (arr[i] < minn) minn = arr[i];

}
cout<<endl;
cout<<"max "<<maxx<<endl<<endl;
cout<<"min "<<minn<<endl;
}

int main ()
{
cout<<"ne otsort\n";
srand(time(NULL));
int arr[13] , a , x ;
for(int i=0 ; i<13 ; i++)
{
arr[i]=rand()%99+1;
cout<<arr[i]<<" ";
}
cout<<endl<<endl;
sort(arr);
cout<<endl;
max (arr);
}

