#include<iostream>

using namespace std;

void reverseArray(int arr[],int start,int end)
{
	int temp;
	while(start < end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
                                  
void printArray(int arr[], int size)
{
	int i=0;
	while(i<size)
	{
		cout <<arr[i] <<"";
		i++;
	}
	cout <<endl;	
}


int main()
{
	int array[]= {1,2,3,4,5,6,7,8,9,0};
	int n = sizeof(array)/ sizeof(array[0]);
	cout <<"Array before reversal : " <<endl;
	printArray(array, n);
	reverseArray(array,0,n-1);
	cout <<"Array after reversal : " <<endl;
	printArray(array,n);
	
	return 0;
}
