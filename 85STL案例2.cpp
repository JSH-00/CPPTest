//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<map>
//#include<ctime>
//
//#define CEHUA  0
//#define MEISHU 1
//#define YANFA  2
//
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
////创建员工
//void creatWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "员工";
//		worker.m_Name += nameSeed[i];
//		worker.m_Salary = rand() % 10000 + 10000;
//		v.push_back(worker);
//	}
//}
//
////员工分组
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门编号
//		int depaId = rand() % 3;
//
//		//将员工插入到分组中
//		m.insert(make_pair(depaId, *it));
//	}
//}
//
////分组显示员工
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	// 0  A  B  C   1  D  E   2  F G ...
//	cout << "策划部门：" << endl;
//
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int index = 0;
//	int count = m.count(CEHUA);
//	for (; pos != m.end() && index < count; pos++ , index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "美术部门： " << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU); // 统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//	cout << "----------------------" << endl;
//	cout << "研发部门： " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA); // 统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//}
//
//void test01() {
//
//	srand((unsigned int)time(NULL));
//
//	//创建员工
//	vector<Worker>vWorker;
//	creatWorker(vWorker);
//
//	//员工分组
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//分组显示员工
//	showWorkerByGroup(mWorker);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}