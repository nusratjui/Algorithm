#include<iostream>
using namespace std;

void sort(int array[], int start, int mid, int end)
{
	int i,j,k;
	 i=start;j=mid+1;k=start;
	int newArr[end+1];

	while(i<=mid && j<=end){
		if(array[i]<=array[j]){
			newArr[k]=array[i];
			i++;  k++;
		}else{
			newArr[k]=array[j];
			j++;  k++;
		}
	}
	while(i<=mid){
		newArr[k]=array[i];
		i++; k++;
	}
	while(j<=end){
		newArr[k]=array[j];
		j++; k++;
	}
	for(int i=start;i<k;i++){
		array[i]=newArr[i];
	}
}

void mergeSort(int array[], int start, int end){
if(start>=end)
		return;
    int mid=(start+end)/2;

	mergeSort(array,start,mid);
	mergeSort(array,mid+1,end);
	sort(array,start,mid,end);
}

void DisplayArray(int array[],int n){
    cout<<"\n Sorted array by counting sort : ";
    for(int i=0;i<n;i++)
    cout<<array[i]<<' ';
    cout<<endl;
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

	mergeSort(array,0,n-1);
	 DisplayArray(array,n);
}






