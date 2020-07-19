//#include<iostream>
//using namespace std;
////动物类
//class Animal
//{
//public:
//	int m_Age;
//};
//
////羊类
//class Sheep :virtual public Animal {
//
//};
//
////驼类
//class Tuo :virtual public Animal {
//
//};
////羊驼类
//class SheepTuo :public Sheep, public Tuo {
//	
//};
//
//void test01() {
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//	cout << "羊的属性是：" << st.Sheep::m_Age << endl;
//	cout << "驼的属性是：" << st.Tuo::m_Age << endl;
//
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
//
////class SheepTuo  size(12) :
////       +-- -
////0      | +-- - (base class Sheep)
////0      | | {vbptr}
////       | +-- -
////4      | +-- - (base class Tuo)
////4      | | {vbptr}
////       | +-- -
////       +-- -
////       +-- - (virtual base Animal)
////8      | m_Age
////       + -- -
