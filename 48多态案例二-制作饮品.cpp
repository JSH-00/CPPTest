//#include<iostream>
//using namespace std;
//class AbstractDrinking {
//public:
//	//煮水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//导入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	//制作音频
//	void makeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//
//};
//
//class Coffe :public AbstractDrinking {
//
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮农夫山泉!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡咖啡!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将咖啡倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入牛奶!" << endl;
//	}
//
//};
////制作茶水
//class Tea : public AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮自来水!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡茶叶!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将茶水倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入枸杞!" << endl;
//	}
//};
//
//void doWork(AbstractDrinking * abs) {
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01() {
//	//制作咖啡
//	doWork(new Coffe);
//	cout << "-----------------" << endl;
//	doWork(new Tea);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}