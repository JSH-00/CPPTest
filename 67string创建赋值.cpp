//#include<iostream>
//using namespace std;
//#include<string>
//
//
//void test01() {
//    string s1; //�������ַ����������޲ι��캯��
//    cout << "str1 = " << s1 << endl;
//
//    const char* str = "hello world";
//    string s2(str); //��c_stringת������string
//
//    cout << "str2 = " << s2 << endl;
//
//    string s3(s2); //���ÿ������캯��
//    cout << "str3 = " << s3 << endl;
//
//	string s4(10, 'a');//10��a
//	cout << "s4 = " << s4 << endl;
//
//
//    //��ֵ����
//    string str1 = "hello world";
//    cout << "str1 = " << str1 << endl;
//    string str2 = str1;
//    cout << "str2 = " << str2 << endl;
//
//    string str3;
//    str3 = 'a';
//
//    string str4;
//   str4.assign("hello C++");//assign��ֵ("�ַ���"��int)
//    cout << "str4 = " << str4 << endl;
//
//    string str5;
//    str5.assign("hello C++",5);//���ַ�����ǰ5���ַ���assign��ֵ
//    cout << "str5 = " << str5 << endl;
//
//    string str6;
//    str6.assign(str5);//assign������ֵ
//    cout << "str6 = " << str6 << endl;
//
//    string str7;
//   str7.assign(10,'a');//assign��ֵ(int��'�ַ�')
//    cout << "str7 = " << str7 << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}