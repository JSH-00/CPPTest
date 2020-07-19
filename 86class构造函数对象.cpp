//#include<iostream>
//using namespace std;
//#include<string>
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class MyPrint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count = 0;
//};
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//void test01() {
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;
//}
//void test02() {
//	MyPrint myPrint;
//	myPrint("hello world");
//	myPrint("hello world"); 
//	myPrint("hello world");
//	myPrint("hello world");
//	myPrint("hello world");
//	cout << "调用次数" << myPrint.count << endl;
//
//	doPrint(myPrint, "Hello c++");
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}