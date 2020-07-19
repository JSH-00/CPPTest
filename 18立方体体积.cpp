//#include<iostream>
//using namespace std;
//class Cube {
//public:
//	void setL(int l) {
//		m_L = l;
//	}	
//	void setW(int w) {
//		m_W = w;
//	}
//	void setH(int h) {
//		m_H = h;
//	}
//	int getL()
//	{
//		return m_L;
//	}
//	int getW()
//	{
//		return m_W;
//	}
//	int getH()
//	{
//		return m_H;
//	}
//	//体积
//	int calculateV() {
//		return m_L * m_W * m_H;
//	}
//
//	//面积
//	int calculateS() {
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//	bool isSameByClass(Cube& c) { //引用会节省内存
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private :
//	int m_L;
//	int m_W;
//	int m_H;
//};
//
//bool isSame(Cube& c1, Cube& c2) { //引用会节省内存
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//int main() {
//	Cube c1, c2;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(20);
//	bool ret = isSame(c1, c2);
//	if (ret)
//		cout << "两个相同" << endl;
//	else 
//		cout << "两个不相同" << endl;
//	bool ret2 = c1.isSameByClass(c2);
//	if (ret2)
//		cout << "两个相同" << endl;
//	else
//		cout << "两个不相同" << endl;
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//	system("pause");
//	return 0;
//}