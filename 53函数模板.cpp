//#include<iostream>
//using namespace std;
//
//
////交换整型函数
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换浮点型函数
//void swapDouble(double& a, double& b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
////函数模板
//template<typename T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	//swapInt(a, b);
//	//函数使用
//	//1、自动类型推到
//	mySwap(a, b);
//	//2、显示指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	swapDouble(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}