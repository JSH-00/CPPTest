//#include<iostream>
//using namespace std;
////������
//class Animal
//{
//public:
//	int m_Age;
//};
//
////����
//class Sheep :virtual public Animal {
//
//};
//
////����
//class Tuo :virtual public Animal {
//
//};
////������
//class SheepTuo :public Sheep, public Tuo {
//	
//};
//
//void test01() {
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//	cout << "��������ǣ�" << st.Sheep::m_Age << endl;
//	cout << "�յ������ǣ�" << st.Tuo::m_Age << endl;
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
