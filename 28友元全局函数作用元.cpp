//#include<iostream>
//using namespace std;
//#include<string>
//
//class Building01 {
//	friend void goodGay(Building01* building);
//public:
//	Building01() {
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//
//class Building {
//	friend class GoodGay;
//	friend void GoodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
////类外写成员函数
//Building::Building (){
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
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
//	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问：" << building->m_BedRoom << endl;
//}
////全局函数
//void goodGay(Building01 *building) 
//{
//	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
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