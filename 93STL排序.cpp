//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
//#include<vector>
//#include<ctime>
//
//void myPrint(int val)
//{
//    cout << val << " ";
//}
//
//void test01() {
//	vector<int>v;
//    v.push_back(10);
//    v.push_back(30);

//    v.push_back(50);
//    v.push_back(20);
//    v.push_back(40);
//
//    //sort默认从小到大排序
//    sort(v.begin(), v.end());
//    for_each(v.begin(), v.end(), myPrint);
//    cout << endl;
//
//    sort(v.begin(), v.end(),greater<int>());
//    for_each(v.begin(), v.end(), myPrint);
//    cout << endl;
//
//}
//void test02()
//{
//    srand((unsigned int)time(NULL));
//    vector<int>v;
//    for (int i = 0; i < 10; i++)
//    {
//        v.push_back(i);
//    }
//
//    //洗牌打乱顺序
//    random_shuffle(v.begin(), v.end());
//    for_each(v.begin(), v.end(), myPrint);
//
//    reverse(v.begin(), v.end());
//}
//void test03()
//{
//    vector<int> v1;
//    vector<int> v2;
//    for (int i = 0; i < 10; i++)
//    {
//        v1.push_back(i);
//        v2.push_back(i + 1);
//    }
//
//    vector<int> vtarget;
//    vtarget.resize(v1.size() + v2.size());
//    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
//    for_each(vtarget.begin(), vtarget.end(), myPrint);
//    cout << endl;
//
//}
//int main() {
//    //test01();
//    //test02();
//    test03();
//	system("pause");
//	return 0;
//}