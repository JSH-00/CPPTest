//#include<iostream>
//using namespace std;
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);
//
//public:
//	Person(int a,int b) {
//		m_A = a;
//		m_B = b;
//	}
//
//	//成员函数无法实现
//	//void operator<<(cout) {
//
//	//}
//
//private:
//
//    int m_A;
//    int m_B;
//};
//ostream& operator<<(ostream &cout, Person& p) {
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
//	return cout;
//}
//void test01() {
//	Person p(10, 10);
//	cout << p << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//
