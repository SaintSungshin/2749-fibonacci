#include<iostream>
using namespace std;

int fibonacci(int);

int main()
{
	cout << "Enter the number : (1000000000000000000���Ϸ�)";
	int n;
	cin >> n;

	cout<< fibonacci(n) % 1000000<<endl;

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