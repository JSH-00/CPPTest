//#include<iostream>
//using namespace std;
//#include<string>
//#include<Ctime>
//struct Student {
//	string name;
//	int score;
//};
//struct Teacher {
//	string name;
//	Student sArray[5];
//};
//void allocateSpace(Teacher tArray[], int len) {
//	string tName = "��ʦ";
//	string sName = "ѧ��";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		tArray[i].name = tName + nameSeed[i];//�ַ����ӷ�
//		for (int j = 0; j < 5; j++) {//��ÿ����ʦ����ѧ��������
//			tArray[i].sArray[j].name = sName + nameSeed[j];
//			tArray[i].sArray[j].score = rand() % 61 + 40;
//		}
//	}
//
//}
//void printf(struct Teacher tArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "��ʦ������" << tArray[i].name << endl;
//		for (int j = 0; j < len; j++) {
//			cout << "\tѧ��������" << tArray[i].sArray[j].name << 
//				" \t���Է����� " << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	struct Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray,len);
//	printf(tArray, len);
//	system("pause");
//	return 0;
//}