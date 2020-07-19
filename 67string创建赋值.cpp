//#include<iostream>
//using namespace std;
//#include<string>
//
//
//void test01() {
//    string s1; //创建空字符串，调用无参构造函数
//    cout << "str1 = " << s1 << endl;
//
//    const char* str = "hello world";
//    string s2(str); //把c_string转换成了string
//
//    cout << "str2 = " << s2 << endl;
//
//    string s3(s2); //调用拷贝构造函数
//    cout << "str3 = " << s3 << endl;
//
//	string s4(10, 'a');//10个a
//	cout << "s4 = " << s4 << endl;
//
//
//    //赋值操作
//    string str1 = "hello world";
//    cout << "str1 = " << str1 << endl;
//    string str2 = str1;
//    cout << "str2 = " << str2 << endl;
//
//    string str3;
//    str3 = 'a';
//
//    string str4;
//   str4.assign("hello C++");//assign赋值("字符串"，int)
//    cout << "str4 = " << str4 << endl;
//
//    string str5;
//    str5.assign("hello C++",5);//用字符串的前5个字符给assign赋值
//    cout << "str5 = " << str5 << endl;
//
//    string str6;
//    str6.assign(str5);//assign拷贝赋值
//    cout << "str6 = " << str6 << endl;
//
//    string str7;
//   str7.assign(10,'a');//assign赋值(int，'字符')
//    cout << "str7 = " << str7 << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}