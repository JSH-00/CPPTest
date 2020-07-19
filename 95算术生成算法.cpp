//#include<iostream>
//#include <numeric>
//#include <algorithm>
//using namespace std;
//#include<vector>
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//// 计算容器元素累计总和(求和)
//void test01() {
//	vector <int>v;
//	for (int i = 0; i <= 100; i++) {
//		v.push_back(i);
//	}
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//void test02()
//{
//
//	vector<int> v;
//	v.resize(10);
//	//填充
//	fill(v.begin(), v.end(), 100);
//
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}