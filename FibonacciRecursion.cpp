#include<iostream>

using namespace std;

int fib(int num)
{
	if(num<=2)
	{
		return 1;
	}
	else
	{
		return fib(num-1)+fib(num-2);
	}
}
int main()
{
	int num,a=1,b=1;
	cout<< "Enter the range for Fibonacci number" <<endl;
	cin >> num;
	
	int sum = fib(num);
	cout <<"Fibonacci series of number " << num <<" is " << sum;
	
	return 0;
}
