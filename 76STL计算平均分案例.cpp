//#include<iostream>
//using namespace std;
//#include<vector>
//#include<deque>
//#include<string>
//#include<ctim>
//#include<algorithm>
//
////选手类
//
//class Person
//{
//public:
//    Person(string name, int score)
//    {
//        this->m_Name = name;
//        this->m_Score = score;
//    }
//
//    string m_Name; //姓名
//    int m_Score;  //平均分
//};
//
//void createPerson(vector<Person>& v)
//{
//    string nameSeed = "ABCDE";
//    for (int i = 0; i < 5; i++)
//    {
//        string name = "选手";
//        name += nameSeed[i];
//
//        int score = 0;
//
//        Person p(name, score);
//
//        v.push_back(p);
//    }
//
//}
//
//void setScore(vector<Person>&v)
//{
//    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        deque<int>d;
//        for (int i = 0; i < 10; i++)
//        {
//            int score = rand() % 41 + 60;
//            d.push_back(score);
//        }
//
//        sort(d.begin(), d.end());
//
//        //去除最高最低分
//        d.pop_back();
//        d.pop_front();
//
//        //取平均分
//        int sum = 0;
//        for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//        {
//            sum += *dit;
//        }
//
//        int avg = sum / d.size();
//        it->m_Score = avg;
//    }
//}
//
//   
//void  showScore(vector<Person>& v)
//{
//    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << "姓名： " << it->m_Name << " 平均分： " << it->m_Score << endl;
//    }
//}
//
//void test01() {
//
//    srand((unsigned int)time(NULL));
//
//    vector<Person>v;
//    createPerson(v);
//
//    setScore(v);
//
//    showScore(v);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}