//#include<iostream>
//using namespace std;
//#include<string>
//
//class Building01 {
//	friend void goodGay(Building01* building);
//public:
//	Building01() {
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//
//public:
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
//
//
//class Building {
//	friend class GoodGay;
//	friend void GoodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
////����д��Ա����
//Building::Building (){
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//class GoodGay {
//public:
//	GoodGay();
//	void visit();
//	Building* building;
//};
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//void GoodGay::visit() {
//	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
////ȫ�ֺ���
//void goodGay(Building01 *building) 
//{
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void test01() {
//	Building01 building;
//	goodGay(&building);
//}
//
//void test02() {
//	GoodGay gg;
//	gg.visit();
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}