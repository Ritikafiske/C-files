#include<iostream>
using namespace std;

void bubblesort(int array[],int size)
{
	for(int step=0;step<size-1;++step)
	{
		for(int i=0;i<size -step-1;++i)
		{
			if(array[i]>array[i+1])
			{
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
}

void printArray(int array[],int size)
{
	for(int i=0;i<size;++i)
	{
		cout<<" "<<array[i];
	}
	cout<<"\n";
}

int main()
{
	int data[]= {7,9,3,2,0};
	int size = sizeof(data) / sizeof(data[0]);
	
	bubblesort(data,size);
	
	cout<<"Sorted Array in Ascending order :\n";
	printArray(data,size);
}






