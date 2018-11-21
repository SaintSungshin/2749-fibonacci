#include <iostream>
using namespace std;

const int MAX_NUMBER = 10000000;

void fivonacci(int n)
{
	int array[MAX_NUMBER];
	array[0]=0;
	array[1]=1;
	
	for(int i=2;i<n;i++)
		array[i]=array[i-1]+array[i-2];

	cout << array[n]%1000000;
}

int main()
{
	int num;
	cin >> num;
	fivonacci(num);

	return 0;
}