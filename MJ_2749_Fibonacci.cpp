#include <iostream>
using namespace std;

void fib(int& a, int& b) {
	a = b;
	b += a;
}
int main() {

	int num1 = 0;
	int num2 = 1;
	int nth;
	cin >> nth;

	for (int i = 0; i < nth; i++) {
		fib(num1, num2);
	}

	cout << num1;

	system("pause");
	return 0;
}