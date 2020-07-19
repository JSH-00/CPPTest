//#include<iostream>
//using namespace std;
//#include<string>
//
////函数调用运算符重载
//
//class MyPrint
//{
//public:
//	void operator()(string text) {
//		cout << text << endl;
//	}
//};
//class MyAdd
//{
//public:
//	int operator()(int num1, int num2) {
//		return num1 + num2;
//	}
//};
//void MyPrint02(string text) {
//	cout << text << endl;
//
//}
//
//void test01() {
//	MyPrint myPrint;
//	myPrint("hello world");
//	MyPrint02("hello world");
//}
//
//void test02() {
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret = " << ret << endl;
//	cout << MyAdd()(100, 200) << endl;
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}