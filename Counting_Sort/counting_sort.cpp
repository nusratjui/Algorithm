#include <iostream>
using namespace std;

void countingSort(int array[],int n,int maximum)
{
    int count[maximum]={0};
    int i, newArray[n];

    for(i=0;i<n;i++)
    ++count[array[i]];

    for(i=1;i<maximum;i++)
    count[i]+=count[i-1];



    for(i=n-1;i>=0;i--){
        newArray[count[array[i]]-1]=array[i];
        --count[array[i]];
    }

    for(i=0;i<n;i++)
    array[i]=newArray[i];



}
void DisplayArray(int array[],int n){
    cout<<" \n Sorted array by counting sort : ";
    for(int i=0;i<n;i++)
    cout<<array[i]<<' ';
    cout<<endl;
}

int main() {

	 int n;
    cout<<"Enter the number of elemnts you want to sort:" ;
    cin>>n;

    int array[n];
    cout<<"Enter the values you want to sort from 1 to 9:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"The values you entered: ";
     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"  ";
    }

	int maximum=9;
    countingSort(array,n,maximum);
    DisplayArray(array,n);

	return 0;
}


