//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//class MyCompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//
//void test01() 
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到大于5的数字为：" << *it << endl;
//	}
//}
//void test02()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//
//	//默认从小到大
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << "----------------------------" << endl;
//
//	sort(v.begin(), v.end(),MyCompare());
//	sort(v.begin(), v.end(), MyCompare());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}