#include<iostream>
#include<conio.h>
using namespace std;
int k(int n, int s, int w[], int p[])
{   int i,j;
    int k[n+1][s+1];
    for(j=0;j<=s;j++)
    k[0][j]=0;
    for(i=0;i<=n;i++)
    k[i][0]=0;
    for(i=1;i<=n;i++)
    {for(j=1;j<=s;j++)
    {if(w[i-1]<=j)
    {k[i][j]=max(k[i-1][j],p[i-1]+k[i-1][j-w[i-1]]);}
    else
    {k[i][j]=k[i-1][j];}}}
    return k[n][s];}
int main()
{   int i,n,s;
    cout<<"Insert  number of items:"<<endl;
    cin>>n;
    cout<<"Insert size of the knapsack: "<<endl;
    cin>>s;
    int w[n],p[n];
    cout<<"Insert weight and price of all the items:"<<endl;
    for(i=0;i<n;i++)
    {cin>>w[i]>>p[i];}
    cout<<"Here maximum benefit is: "<<k(n,s,w,p);
    getch();}
