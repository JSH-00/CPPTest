//#include<iostream>
//using namespace std;
//#include<deque>
//
//void printDeque(const deque<int>&d)//加入const后变成只读不写的状态，防止it半路被更改
//{  
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printDeque(d1);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}