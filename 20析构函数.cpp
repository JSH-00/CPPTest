//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//构造函数
//	Person() {
//		cout << "Person 无参构造函数调用" << endl;
//	}
//	Person(int a,int heigh) {
//		age = a;
//		height = new int(heigh); //堆区域开辟
//		cout << "Person 有参构造函数调用" << endl;
//
//
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		height = new int(*p.height);//深拷贝指针指向新地址
//		cout << "Person 拷贝构造函数调用" << endl;
//
//	}
//	//析构函数
//	~Person() {
//		if (height != NULL) {
//			delete height;
//			height = NULL;//指针置空
//		}//释放两次
//		cout << "Person 析构函数调用" << endl;
//	}
//public:
//	int age;
//	int* height;
//};
//
//void test01() {
//	////1、括号法
//	////Person p1;//默认构造函数
//	////Person p2(10);//有参构造函数
//	////Person p3(p2); //拷贝
//	////2、显示法
//	//Person p1;
//	//Person p2 = Person(10);
//	//Person p3 = Person(p2);
//	////3、匿名
//	//Person(10);//本行初始后直接清理
//	////Person(p3) == Person  p3;(有语法错误)
//	//Person p4 = 10;//为 Person p4 = Person (10);
//	//Person p5 = p4;//为 Person p5 = Person (p4);
//
//	Person p1(18, 160);
//	cout << "p1的年龄为：" << p1.age << "身高为：" << *p1.height << endl;
//
//}
//int main() {
//	
//	test01();
//	system("pause");
//	return 0;
//}