//#include<iostream>
//using namespace std;
////����
//template<typename T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
////����
//template<typename T>
//void mySort(T arr[],int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] > arr[j]) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
////��ӡ����
//template<typename T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
////char����
//void test01() {
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, num);
//	printArray(charArr,num);
//
////int����
//}void test02() {
//	int charArr[] = { 7,5,1,3,9,2,4,6,8 };
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, num);
//	printArray(charArr,num);
//}
//
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}