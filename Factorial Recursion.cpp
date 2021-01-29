#include<iostream>

using namespace std;

int fact(int num)
{
	if(num <=1)
	{
		return 1;
	}
	else
	{
		int factorial = num*fact(num-1);
		return factorial;
	}
}

int main()
{
	int num;
	cout<<"Enter the number you want to calculate factorial of" <<endl;
	cin >> num;
	int factorial = fact(num);
	cout << "The factorial of the given number " << num  << " is " << factorial; 
	
	return 0;
}
