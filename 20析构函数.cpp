//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//���캯��
//	Person() {
//		cout << "Person �޲ι��캯������" << endl;
//	}
//	Person(int a,int heigh) {
//		age = a;
//		height = new int(heigh); //�����򿪱�
//		cout << "Person �вι��캯������" << endl;
//
//
//	}
//	//�������캯��
//	Person(const Person& p) {
//		age = p.age;
//		height = new int(*p.height);//���ָ��ָ���µ�ַ
//		cout << "Person �������캯������" << endl;
//
//	}
//	//��������
//	~Person() {
//		if (height != NULL) {
//			delete height;
//			height = NULL;//ָ���ÿ�
//		}//�ͷ�����
//		cout << "Person ������������" << endl;
//	}
//public:
//	int age;
//	int* height;
//};
//
//void test01() {
//	////1�����ŷ�
//	////Person p1;//Ĭ�Ϲ��캯��
//	////Person p2(10);//�вι��캯��
//	////Person p3(p2); //����
//	////2����ʾ��
//	//Person p1;
//	//Person p2 = Person(10);
//	//Person p3 = Person(p2);
//	////3������
//	//Person(10);//���г�ʼ��ֱ������
//	////Person(p3) == Person  p3;(���﷨����)
//	//Person p4 = 10;//Ϊ Person p4 = Person (10);
//	//Person p5 = p4;//Ϊ Person p5 = Person (p4);
//
//	Person p1(18, 160);
//	cout << "p1������Ϊ��" << p1.age << "���Ϊ��" << *p1.height << endl;
//
//}
//int main() {
//	
//	test01();
//	system("pause");
//	return 0;
//}