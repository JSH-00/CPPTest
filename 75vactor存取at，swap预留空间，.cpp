//#include<iostream>
//using namespace std;
//#include <vector>
//
//void printVector(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for (int i = 0; i < v1.size(); i++) {
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//
//	//获取第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//
//	//获取最后一个元素
//	cout << "最后一个元素为：" << v1.back() << endl;
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	//互换容器
//	cout << "互换后" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//
//	cout << "v的容量为：" << v1.capacity() << endl;
//	cout << "v的大小为：" << v1.size() << endl;
//	//swap收缩容器
//	vector<int>(v1).swap(v1);//使v1的capacity==size
//
//	cout << "v的容量为：" << v1.capacity() << endl;
//	cout << "v的大小为：" << v1.size() << endl;
//}
//
//void test02() {
//	vector<int> v;
//	
//	v.reserve(100000);
//	int num = 0;
//	int* p = NULL;
//
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//
//	}
//	cout << "num = " << num << endl;
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}