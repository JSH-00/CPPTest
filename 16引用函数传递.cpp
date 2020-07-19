#include<iostream>
using namespace std;
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void mySwap03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 10;
	int b = 20;
	mySwap01(a, b);
	cout << a << " " << b << endl;
	a = 10;
	b = 20;
	mySwap02(&a, &b);
	cout << a << " " << b << endl;
	a = 10;
	b = 20;
	mySwap03(a, b);
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}