#include<iostream>
using namespace std;

int fibonacci(int);

int main()
{
	cout << "Enter the number : ";
	int n;
	cin >> n;

	cout<< fibonacci(n)<<endl;

	return 0;
}

int fibonacci(int num)
{
	if (num == 0)
		return 0;

	else if (num == 1)
		return 1;

	else
		return fibonacci(num - 1) + fibonacci(num - 2);
}