//#include<iostream>
//using namespace std;
//#include<string>
//template<class T1, class T2>//Ҫ�����������������
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1,T2> &p) {
//	cout << "����ʵ�� ---- ������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
//
//}
//template<class T1, class T2>
//class Person {
//
//	friend void printPerosn(Person<T1,T2> &p)
//	{
//		cout << "����ʵ�� ---- ������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
//	}
//	friend void printPerson2<>(Person<T1, T2>& p);
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//private: 
//	T1 m_Name;
//
//	T2 m_Age;
//};
//
//
//
//
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "����: " << this->m_Name << " ����:" << this->m_Age << endl;
//}
//
//
//void test01() {
//	Person<string,int> p("����",18);
//	p.showPerson();
//	printPerosn(p);
//	printPerson2(p);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}