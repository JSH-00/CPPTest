//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//}
//
//void test01() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//
//	//ͨ��������й���
//	vector<int> v2(v1.begin(), v1.end()-3);//�����൱��int����v2��ֵ����
//	printVector(v2);
//
//	//n��elem��ʽ����
//	vector<int>v3(10, 100);//10��100����
//	printVector(v3);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}