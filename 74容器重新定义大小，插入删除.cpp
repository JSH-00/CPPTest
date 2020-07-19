//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>& p) {
//	for (vector<int >::iterator it = p.begin(); it != p.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	printVector(v);
//
//	if (v.empty())
//	{
//		cout << "v为空" << endl;
//	}
//	else
//	{
//		cout << "v不为空" << endl;
//		cout << "v的容量 = " << v.capacity() << endl;
//		cout << "v的大小 = " << v.size() << endl;
//	}
//	//重新指定大小
//	v.resize(15);//重新指定的15过长，默认用0填充新的位置
//	v.resize(20, 100);//重新指定的20过长，用100填充新的位置
//	v.resize(5);//重新指定的5过短，后面直接被删掉
//	printVector(v);
//
//	vector<int>v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入
//	v1.insert(v1.begin(), 100);//首位置插入100
//	v1.insert(v1.begin(), 2, 200);//首位置插入2个200
//	printVector(v1);
//
//	//删除
//	v1.erase(v1.begin());//删除首位置元素
//	v1.erase(v1.begin(), v1.end());//清空数据元素
//	v1.clear();//清空
//	printVector(v1);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}