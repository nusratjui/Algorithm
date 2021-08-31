#include<iostream>
using namespace std;

void Selection_Sort(int array[], int n)
{
    int select, minIndex, minValue;

    for (select = 0; select < n - 1; select++)
    {
        minIndex = select;
        minValue = array[select];

        for (int i = select + 1; i < n; i++)
        {
            if (array[i] < minValue)
            {
                minValue = array[i];
                minIndex = i;
            }
        }

        array[minIndex] = array[select];
        array[select] = minValue;
    }
}

void showData(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}


int main()
{
    int n;
    cout<<"Number of value you want to enter:" ;
    cin>>n;

    int array[n];
    cout<<"Enter the values:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The values you entered:";
     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"  ";
    }


     Selection_Sort(array,n);
     cout<<"\n Sorted value: ";
     showData(array,n);
}



