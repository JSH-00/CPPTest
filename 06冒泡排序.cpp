//#include<iostream>
//using namespace std;
//int main() {
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	int flag = 0;
//	int temp;
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8 - i;j++){
//			if (arr[j] > arr[j + 1]) {
//			temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//			flag = 1;
//			}
//			if (flag == 0)
//				break;
//		}
//	}
//	for (int i = 0; i < 9; i++) {
//		cout<<arr[i]<<" ";
//	}
//	system("pause");
//	return 0;
//}