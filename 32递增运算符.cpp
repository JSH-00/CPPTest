//#include<iostream>
//using namespace std;
//class MyInteger {
//	friend ostream& operator<<(ostream& cout, MyInteger p);
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//����ǰ��++�����
//	MyInteger& operator++() {
//			m_Num++;
//			cout << "����a++";
//			return *this;
//	}
//
//	//���غ���++�����
//	MyInteger operator++(int) {
//		MyInteger temp = *this;
//		m_Num++;
//		cout << "����++a";
//
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
////���������
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