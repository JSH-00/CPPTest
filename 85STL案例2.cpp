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
////����Ա��
//void creatWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];
//		worker.m_Salary = rand() % 10000 + 10000;
//		v.push_back(worker);
//	}
//}
//
////Ա������
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ű��
//		int depaId = rand() % 3;
//
//		//��Ա�����뵽������
//		m.insert(make_pair(depaId, *it));
//	}
//}
//
////������ʾԱ��
//void showWorkerByGroup(multimap<int, Worker>& m)
//{
//	// 0  A  B  C   1  D  E   2  F G ...
//	cout << "�߻����ţ�" << endl;
//
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int index = 0;
//	int count = m.count(CEHUA);
//	for (; pos != m.end() && index < count; pos++ , index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "�������ţ� " << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU); // ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//	cout << "----------------------" << endl;
//	cout << "�з����ţ� " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA); // ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//}
//
//void test01() {
//
//	srand((unsigned int)time(NULL));
//
//	//����Ա��
//	vector<Worker>vWorker;
//	creatWorker(vWorker);
//
//	//Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//������ʾԱ��
//	showWorkerByGroup(mWorker);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}