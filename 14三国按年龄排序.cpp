//#include<iostream>
//using namespace std;
//#include<string>
//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//void bubblesort(hero arr[], int len) {
//	//数组名就是数组的地址，传入的是数组的首地址，[]和*都能改变实参
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j].age > arr[j + 1].age) {
//				hero temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//
//	struct hero arr[5] =
//	{
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//
//	int len = sizeof(arr) / sizeof(hero); //获取数组元素个数
//
//	bubblesort(arr, len); //排序
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名： " << arr[i].name << " 性别： " << arr[i].sex 
//			<< " 年龄： " << arr[i].age << endl;
//	}
//	system("pause");
//	return 0;
//}