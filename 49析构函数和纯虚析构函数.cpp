//#include<iostream>
//using namespace std;
//#include<string>
//
//class Animal {
//public:
//
//    Animal()
//    {
//        cout << "Animal 构造函数调用" << endl;
//    }
//
//    //virtual ~Animal()
//    //{
//    //    cout << "Animal 析构函数调用" << endl;
//    //}
//    virtual ~Animal() = 0;
//
//    virtual void speak() = 0;
//};
//
//Animal::~Animal() {
//    cout << "Animal 析构函数调用" << endl;
//}
//class Cat : public Animal {
//public:
//    Cat(string name) {
//        cout << "Cat构造函数调用" << endl;
//
//        m_Name = new string(name);
//    }
//
//    virtual void speak() {
//        cout << *m_Name << "小猫在说话" << endl;
//     }
//    ~Cat() {
//        if (m_Name != NULL) {
//            cout << "Cat析构函数调用" << endl;
//            delete m_Name;
//            m_Name = NULL;
//        }
//    }
//    string* m_Name;
//};
//
//void test01() {
//    Animal* animal = new Cat("Tom");
//    animal->speak();
//    delete animal;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}