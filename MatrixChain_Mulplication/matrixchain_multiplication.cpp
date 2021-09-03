#include<iostream>
#include<conio.h>
#include<limits.h>
using namespace std;

void MCM(int nof,int di[])
{   int m[nof+1][nof+1],i,mc,k,value;
    for(i=1;i<=nof;i++)
    {m[i][i]=0;}
    for(i=1;i<nof;i++)
    {   int row=1;
        int col=row+i;
        for(int j=0;j<nof-i;j++)
        { mc=INT_MAX;
        for(k=row;k<col;k++)
        { value=m[row][k]+ m[k+1][col] + (di[row-1]*di[k]*di[col]);
        if(value<mc)
        { mc=value;}}
        m[row][col]=mc;
        row++;
        col++;}}
        for(int i=1; i<= nof; i++)
        {for(int j=1; j<=nof; j++)
        {if(i<j)
        { cout<<m[i][j]<<"\t";}}
        cout<<"\n";}
        cout<<"Minimum cost of matrix chain multiflication:"<<m[1][nof]<<"\n";
}
int main()
{  int i,j,nof;
   cout<<"Enter the number of matrices:";
   cin>>nof;
   int di[nof+1];
   cout<<"Enter number of row in matrix 1:";
   cin>>di[0];
   for(i=1;i<=nof;i++)
   {cout<<"Enter number of column in matrix "<< i <<":" ;
   cin>>di[i];}
   MCM(nof,di);
   getch();}
