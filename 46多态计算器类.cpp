//#include<iostream>
//using namespace std;
//#include<string>
//
//
////��ͨд��
//class Calculator {
//public:
//	int getResult(string oper) {
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//	}
//public:
//	int m_Num1;
//	int m_Num2;
//};
//
////��̬����
////ʵ�ּ�����������
//class AbstractCaculator {
//public:
//	virtual int getResult() {
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
////�ӷ���������
//class AddCalculator :public AbstractCaculator {
//public:
//	int getResult() {
//		return m_Num1 + m_Num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCaculator {
//public:
//	int getResult() {
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷���������
//class MulCalculator :public AbstractCaculator {
//public:
//	int getResult() {
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test01() {
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//void test02() {
//	AbstractCaculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2
//		<< " = " << abc->getResult() << endl;
//
//	//���������
//	delete abc;
//
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " - " << abc->m_Num2
//		<< " = " << abc->getResult() << endl;
//	abc = new MulCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " * " << abc->m_Num2
//		<< " = " << abc->getResult() << endl;
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}