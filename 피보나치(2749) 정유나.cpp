#include<iostream>
using namespace std;

//재귀함수 이용해서 피보나치 수열 구함
int fibonacci(int number)
{
	if (number == 0)
		return 0;
	else if (number == 1)
		return 1;
	else
		return fibonacci(number-1) + fibonacci(number - 2);
}

int main()
{
	cout << "Enter the number : ";
	int number;

	if (number >= 0 && number <= 1000000000000000000) {
		cin >> number;
	}

	cout<<"The result is " <<fibonacci(number)%100000;

	return 0;
}