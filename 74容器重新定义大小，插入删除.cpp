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
//		cout << "vΪ��" << endl;
//	}
//	else
//	{
//		cout << "v��Ϊ��" << endl;
//		cout << "v������ = " << v.capacity() << endl;
//		cout << "v�Ĵ�С = " << v.size() << endl;
//	}
//	//����ָ����С
//	v.resize(15);//����ָ����15������Ĭ����0����µ�λ��
//	v.resize(20, 100);//����ָ����20��������100����µ�λ��
//	v.resize(5);//����ָ����5���̣�����ֱ�ӱ�ɾ��
//	printVector(v);
//
//	vector<int>v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//����
//	v1.insert(v1.begin(), 100);//��λ�ò���100
//	v1.insert(v1.begin(), 2, 200);//��λ�ò���2��200
//	printVector(v1);
//
//	//ɾ��
//	v1.erase(v1.begin());//ɾ����λ��Ԫ��
//	v1.erase(v1.begin(), v1.end());//�������Ԫ��
//	v1.clear();//���
//	printVector(v1);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}