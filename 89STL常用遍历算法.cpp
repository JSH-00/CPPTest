//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//void print01(int val)
//{
//	cout << val << " ";
//}
//
//class TransForm
//{
//public:
//	int operator()(int val)
//	{
//		return val +100;
//	}
//
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
////函数对象
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//遍历算法
//	for_each(v.begin(), v.end(), print01);
//	for_each(v.begin(), v.end(), print02());
//
//
//
//}
//
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector <int>vTarget; //目标容器
//	vTarget.resize(v.size()); // 目标容器需要提前开辟空间
//
//	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//	cout << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}