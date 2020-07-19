//#include<iostream>
//using namespace std;
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger p);
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//重载前置++运算符
//	MyInteger& operator++() {
//			m_Num++;
//			cout << "调用a++";
//			return *this;
//	}
//
//	//重载后置++运算符
//	MyInteger operator++(int) {
//		MyInteger temp = *this;
//		m_Num++;
//		cout << "调用++a";
//
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
////左移运算符
//ostream& operator<<(ostream& cout, MyInteger p) {
//	cout << p.m_Num;
//	return cout;
//}
//
//
//
//void test01() {
//
//	MyInteger myint;
//	cout << myint++ << endl;
//}void test02() {
//
//	MyInteger myint;
//	cout << ++myint << endl;
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}