//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>//内建函数对象头文件
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
//	//算术仿函数
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
//	//关系仿函数
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
//	//逻辑仿函数
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
//	//逻辑非  将v容器搬运到v2中，并执行逻辑非运算(逻辑取反)
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