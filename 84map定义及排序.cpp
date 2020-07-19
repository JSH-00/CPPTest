//#include<iostream>
//using namespace std;
//#include <map>
//class MyCompare
//{
//public:
//    bool operator ()(int v1, int v2)const
//    {
//        return v1 > v2;
//    }
//};
//void printMap(map<int, int, MyCompare>& m)
//{
//    for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//    {
//        cout << "key = " << (*it).first << " value = " << (*it).second << endl;
//    }
//    cout << endl;
//}
//
//void test01() {
//
//    map<int,  int, MyCompare> m;
//    m.insert(pair<int, int>(1, 10));
//    m.insert(pair<int, int>(2, 20));
//    m.insert(pair<int, int>(3, 30));
//    m.insert(pair<int, int>(4, 10));
//    m.insert(make_pair(5, 20));
//    m.insert(map<int, int>::value_type(6,30));
//    m[7] = 40;
//    printMap(m);
//    map<int, int>::iterator pos = m.find(3);
//    
//    if (pos != m.end())
//    {
//        cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
//    }
//    else
//    {
//        cout << "未找到元素" << endl;
//    }
//    //统计
//    int num = m.count(3);
//    cout << "num = " << num << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}