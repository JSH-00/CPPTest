//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void myPrint(int val) {
//	cout << val << endl;
//}
//
//
//void test01() {
//	vector<int> v;
//	//β��
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//��һ��
//	vector<int>::iterator itBegin = v.begin();
//	//��ʼ��������ָ�������е�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();
//	//��ʼ��������ָ�����������һ��Ԫ�ص���һλ
//	while (itBegin != itEnd) {
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//�ڶ���
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//
//	//������
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}