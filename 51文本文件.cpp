//#include<iostream>
//using namespace std;
//#include<fstream>//头文件包含
//#include<string>
//
////文本文件 写文件
//
//void test01() {
//	//创建流对象
//	ofstream ofs;
//	//指定打开方式
//	ofs.open("test.txt",ios::out);
//	//写内容
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	//关闭文件
//	ofs.close();
//}
//
////文本文件 读文件
//void test02() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) //判断文件打开是否成功
//	{
//		cout << "文件打开失败" << endl;
//		//路径或文件名写错
//		return;
//	}
//	//读数据（第一种）
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf) {
//	//	cout << buf << endl;
//	//}
//	//读数据（第二种）
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(1024))) {
//	//	cout << buf << endl;
//	//}
//	//读数据（第三种）
//	//string buf;
//	//while (getline(ifs,buf)) {
//	//	cout << buf << endl;
//	//}
//	//读数据（第四种）不常用
//	char c;
//	while ((c = ifs.get()) != EOF) {//EOF end of file
//		cout << c;//没有endl
//	}
//	ifs.close();
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}