#include<iostream>

#define NIL 0
#define MAX 100

using namespace std;

int lookup[MAX];

void initialize()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		lookup[i]=NIL;
	}
}

int fact(int num)
{
	if(lookup[num]==0)
	{
		if(num<=1)
		lookup[num]=num;
		else
		lookup[num]=num*fact(num-1);
	}	
	return lookup[num];
}

int main()
{
	int num;
	cout<<"Enter the number to find its factorial :" <<endl;
	cin>> num;
	long int factorial;
	factorial = fact(num);
	cout<<"The factorial of number " << num <<" is " <<factorial;
	
	return 0;
}
