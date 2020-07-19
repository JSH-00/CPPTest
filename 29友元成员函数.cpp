//#include<iostream>
//using namespace std;
//#include<string>
//
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//可访问Building
//	void visit2();//不可访问Building
//	Building* building;
//};
//class Building {
//	friend void GoodGay::visit();
//
//public:
//	Building();
//public:
//	string m_SittingRoom;//客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//Building::Building() {
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	//cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//void test01() {
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}