//#include<iostream>
//using namespace std;
//#include"MyArray.hpp"
//void printIntArray(MyArray<int>& arr) {
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//
//void test01() {
//
//	MyArray<int> arr1(5);
//	for (int i = 0; i < 5; i++) {
//		arr1.Push_Back(i);
//	}
//	cout << "array1��ӡ�����" << endl;
//	printIntArray(arr1);
//	cout << "array1�Ĵ�С��" << arr1.getSize() << endl;
//	cout << "array1��������" << arr1.getCapacity() << endl;
//
//	cout << "--------------------------" << endl;
//	MyArray<int> arr2(arr1);
//	cout << "array2��ӡ�����" << endl;
//	printIntArray(arr2);
//	arr2.Pop_Back();
//	cout << "array2βɾ�������" << endl;
//	cout << "array1�Ĵ�С��" << arr2.getSize() << endl;
//	cout << "array1��������" << arr2.getCapacity() << endl;
//
//	cout << "--------------------------" << endl;
//
//	//MyArray<int> arr1(5);
//	//MyArray<int> arr2(arr1);
//	//MyArray<int> arr3(100);
//	//arr3 = arr1;
//}
//
////�����Զ�����������
//class Person {
//public:
//	Person() {}
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//void printPersonArray(MyArray<Person>& arr) {
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << "������" << arr[i].m_Name << " ���䣺 " << arr[i].m_Age << endl;
//	}
//}
//void test02() {
//	MyArray<Person>pArray(10);
//	Person p1("�����", 30);
//	Person p2("����", 20);
//	Person p3("槼�", 18);
//	Person p4("���Ѿ�", 15);
//	Person p5("����", 24);
//
//	//��������
//	pArray.Push_Back(p1);
//	pArray.Push_Back(p2);
//	pArray.Push_Back(p3);
//	pArray.Push_Back(p4);
//	pArray.Push_Back(p5);
//
//	printPersonArray(pArray);
//
//	cout << "pArray�Ĵ�С��" << pArray.getSize() << endl;
//	cout << "pArray��������" << pArray.getCapacity() << endl;
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}