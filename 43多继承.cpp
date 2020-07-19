//#include<iostream>
//using namespace std;
//class Base1 {
//public:
//    Base1()
//    {
//        m_A = 100;
//    }
//public:
//    int m_A;
//};
//
//class Base2 {
//public:
//    Base2()
//    {
//        m_B = 200;  //开始是m_B 不会出问题，但是改为mA就会出现不明确
//    }
//public:
//    int m_B;
//};
//
//class Son :public Base1, public Base2 {
//public:
//    Son()
//    {
//        m_C = 300;
//        m_D = 400;
//    }
//public:
//    int m_C;
//    int m_D;
//};
//
//void test01() {
//    Son s;
//    cout << "sizeof Son = " << sizeof(s) << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
////class Son       size(16) :
////         +-- -
////    0    | +-- - (base class Base1)
////    0    | | m_A
////         | +-- -
////    4    | +-- - (base class Base2)
////    4    | | m_B
////         | +-- -
////    8    | m_C
////   12    | m_D
////         + -- -