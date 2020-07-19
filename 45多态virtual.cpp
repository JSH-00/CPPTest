//#include<iostream>
//using namespace std;
//class Animal
//{
//public:
//	 void  speak() {
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal {
//public:	
//	void speak() {
//		cout << "小猫在说话" << endl;
//	}
//};
//class Dog :public Animal {
//public:	
//	void speak() {
//		cout << "小狗在说话" << endl;
//	}
//};
////地址早绑定，绑好了Animal的地址
//
//void doSpeak(Animal& animal) {
//	animal.speak();
//}
//
//void test01() {
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//void test02() {
//	cout << sizeof(Animal) << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}