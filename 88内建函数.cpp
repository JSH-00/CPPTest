//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>//�ڽ���������ͷ�ļ�
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	//�����º���
//	negate<int>n;
//
//	cout << n(50) << endl;
//
//	plus<int>p;
//
//	cout << p(10, 20) << endl;
//}
//
//void test02()
//{
//	//��ϵ�º���
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//sort(v.begin(), v.end(),MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test03()
//{
//	//�߼��º���
//	vector <bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//�߼���  ��v�������˵�v2�У���ִ���߼�������(�߼�ȡ��)
//	vector<bool> v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() 
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}