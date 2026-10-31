#include<iostream>
using namespace std;
int main()
{
const int n=6;

double a[6][7]=
{
{2,1,-1,1,1,-1,4},
{1,3,1,-1,2,1,22},
{-1,1,4,1,-1,2,24},
{1,-1,1,5,2,-1,26},
{2,1,-1,2,4,1,35},
{-1,2,1,-1,1,3,25}
};

double X[6];

for(int k=0;k<n-1;k++)
{
 for(int i=k+1;i<n;i++)
  {
   double factor = a[i][k]/a[k][k];
    for(int j=k;j<=n;j++)
     {
       a[i][j]=a[i][j]-factor*a[k][j];
     }
  }
}


cout<<"solution:\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
return 0;
}