//#include<iostream>
//using namespace std;
//void myPrint(int, int b) {
//	cout << "调用的普通函数" << endl;
//
//}
//
//template<typename T>
//void myPrint(T a, T b) {
//	cout << "调用的模板" << endl;
//
//}
//template<typename T>
//void myPrint(T a, T b, T c) {
//	cout << "调用的重载模板" << endl;
//
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	myPrint(a, b); //调用普通函数
//	myPrint<>(a, b); //调用模板函数
//	myPrint(a, b, 100); //调用模板函数
//
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1,c2);
//
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}