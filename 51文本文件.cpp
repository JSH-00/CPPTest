//#include<iostream>
//using namespace std;
//#include<fstream>//ͷ�ļ�����
//#include<string>
//
////�ı��ļ� д�ļ�
//
//void test01() {
//	//����������
//	ofstream ofs;
//	//ָ���򿪷�ʽ
//	ofs.open("test.txt",ios::out);
//	//д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//	//�ر��ļ�
//	ofs.close();
//}
//
////�ı��ļ� ���ļ�
//void test02() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) //�ж��ļ����Ƿ�ɹ�
//	{
//		cout << "�ļ���ʧ��" << endl;
//		//·�����ļ���д��
//		return;
//	}
//	//�����ݣ���һ�֣�
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf) {
//	//	cout << buf << endl;
//	//}
//	//�����ݣ��ڶ��֣�
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(1024))) {
//	//	cout << buf << endl;
//	//}
//	//�����ݣ������֣�
//	//string buf;
//	//while (getline(ifs,buf)) {
//	//	cout << buf << endl;
//	//}
//	//�����ݣ������֣�������
//	char c;
//	while ((c = ifs.get()) != EOF) {//EOF end of file
//		cout << c;//û��endl
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