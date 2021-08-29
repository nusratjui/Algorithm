#include <iostream>
using namespace std;


void Bubble_Sort(int array[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)


    for (j = 0; j < n-i-1; j++)
        if (array[j] > array[j+1])
            {
            int temporary=array[j];
            array[j]=array[j+1];
            array[j+1]=temporary;
            }
}

void DisplayArray(int array[], int size)
{
    cout<<"\n Sorted array by bubble sorting : ";
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}


int main()
{
    int n;
    cout<<"Enter the number of elemnts you want to sort:" ;
    cin>>n;

    int array[n];
    cout<<"Enter the values you want to sort :";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The values you entered:";
     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"  ";
    }

    Bubble_Sort(array, n);

    DisplayArray(array, n);
    return 0;
}

