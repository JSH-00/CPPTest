//#include<iostream>
//using namespace std;
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//class Son1 :public Base1 {
//public:
//	void func() {
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;
//	}
//};
//class Son2 :protected Base1 {
//public:
//	void func() {
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;
//	}
//};
//class Son3 :private Base1 {
//public:
//	void func() {
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;
//	}
//};
//void test01() {
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;
//	Son2 s2;
//	//s2.m_A = 100;
//	//s1.m_B = 100;
//	Son3 s3;
//	//s2.m_A = 100;
//	//s1.m_B = 100;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}