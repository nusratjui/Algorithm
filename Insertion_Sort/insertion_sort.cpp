#include<iostream>
#include<conio.h>
using namespace std;
void Insertion_sort(int arr[],int n)
 {
     for(int i=1;i<=n-1;i++)
    {
       int  temp=arr[i];
        int j=i-1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
 }
 void display(int arr[],int n)
   {
       cout<<"Sorted values: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   }

int main()
{
    int n;
    cout<<"Number of value you want to enter: " ;
    cin>>n;

    int arr[n];
    cout<<"Enter the values :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The values you gave: ";
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }



     Insertion_sort(arr,n);
     display(arr,n);
     getch();
}

