//#include<iostream>
//using namespace std;
//class Base {
//public:
//    Base()
//    {
//        m_A = 100;
//    }
//
//    void func()
//    {
//        cout << "Base - func()调用" << endl;
//    }
//
//    void func(int a)
//    {
//        cout << "base - func(int a)调用" << endl;
//    }
//
//public:
//    int m_A;
//};
//class Son :public Base {
//public:
//    Son() {
//        m_A = 200;
//    }
//
//
//    void func()
//    {
//        cout << "Son - func()调用" << endl;
//    }
//
//    int m_A;
//};
//void test01() {
//    Son s;
//    cout << "Son下 m_A = " << s.m_A << endl;
//    cout << "Base下 m_A = " << s.Base::m_A << endl;
//}
//void test02() {
//    Son s;
//    s.Base::func(100);
//    s.Base::func();
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}