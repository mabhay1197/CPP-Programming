#include<iostream>

#define NIL 0
#define MAX 100 

int lookup[MAX];

using namespace std;

void initialize()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		lookup[i]=NIL;
	}
}

int fib(int num)
{
    if(lookup[num]==0)
	{
		if(num<=1)
		{
			lookup[num] = num;	
		}
		else
		{
			lookup[num] = fib(num-1)+fib(num-2);	
		}	
	}
	return lookup[num];	
}

int main()
{
	int num;
	cout <<"Enter the limit for fibonacci series : " <<endl;
	cin>> num;
	long int series = fib(num);
	cout<<"The value of Fibonacci series for limit " << num << " is " << series ;
	
	return 0;
}
