//#include<iostream>
//using namespace std;
//class Base{
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//	static int m_A;
//
//};
//
//int Base::m_A = 100;
//class Son :public Base {
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//
//};
//int Son::m_A = 200;
//
//void test01() {
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	cout << "Son  下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son  下 m_A = " << Son::m_A << endl;
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//}
//void test02() {
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(20);
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Base::func();
//	Son::Base::func(10);
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}