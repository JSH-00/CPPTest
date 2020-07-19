//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//class Person
//{
//public:
//    Person(string name, int age)
//    {
//        this->m_Name = name;
//        this->m_Age = age;
//    }
//    bool operator==(const Person& p)
//    {
//
//        if (this->m_Age == p.m_Age)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    string m_Name;
//    int m_Age;
//};
//class Greater4
//{
//public:
//    bool operator()(int val)
//    {
//        return val >= 4;
//    }
//};
//void test01() {
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(5);
//    v.push_back(2);
//    v.push_back(4);
//    v.push_back(4);
//    v.push_back(3);
//
//    //查找相邻重复元素
//    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//    bool ret = binary_search(v.begin(), v.end(), 9);
//    if (ret)
//    {
//        cout << "找到了" << endl;
//    }
//    else
//    {
//        cout << "未找到" << endl;
//    }
//    int num = count(v.begin(), v.end(), 40);
//    int num = count_if(v.begin(), v.end(), Greater4());
//
//}
//
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}