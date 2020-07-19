//#include<iostream>
//using namespace std;
/////////////////////匿名联合///////////////////////////////////////////////////
//int main(int argc, char* argv[])
//{
//    union {
//        int quantity_todate;
//        int quantity_balance;
//    };
//    std::cout << "Enter quantity to date:";
//    std::cin >> quantity_todate;
//    std::cout << "Enter quantity sold:";
//    int quantitiy_sold;
//    std::cin >> quantitiy_sold;
//    quantity_balance = quantity_todate - quantitiy_sold;
//    std::cout << "quantity_balance=" << quantity_balance << "\n";
//
//    return 0;
//}
//////////////////联合//////////////////////////////////////////////////////

//union Holder {
//    char holderChar;
//    short int holdint;
//    long int holdlong;
//    float holdfloat;
//
//};
//
//void DisplayHolder(Holder hold, char* tag) {
//    std::cout << "--Initialized" << tag << "---\n";
//    std::cout << "holdChar-->" << hold.holderChar << "\n";
//    std::cout << "holdint-->" << hold.holdint << "\n";
//    std::cout << "holdlong-->" << hold.holdlong << "\n";
//    std::cout << "holdfloat-->" << hold.holdfloat << "\n";
//}
//int main()
//{
//
//    Holder holder;
//    holder.holderChar = 'x';
//    DisplayHolder(holder, "Char");
//    holder.holdint = 13;
//    DisplayHolder(holder, "int");
//
//    holder.holdlong = 7654321;
//    DisplayHolder(holder, "long");
//
//    holder.holdfloat = 1.23;
//    DisplayHolder(holder, "float");
//
//    return 0;
//}


////////////////////////////////////////////////////////////////////////

//struct Date
//{
//	int month, day, year;
//};
//Date getToday()
//{
//	Date dt;
//	cout << "Enter today";
//	cin >> dt.month >> dt.day >> dt.year;
//	return dt;
//}
//void printDate(Date dt) {
//	cout << dt.month << "/"
//		<< dt.day << "/"
//		<< dt.year << "\n";
//}
//
//int main(int argc, char* argv[])
//{
//	Date dt = getToday();
//	printDate(dt);
//	return 0;
//}

////////////////////////////////////////////////////////////////////////
////struct Date
//{
//	int month, day, year;
//};
//
//struct employee {
//	int emplNO;
//	float salary;
//	Date birthday;
//};
//
//int main(int argc, char* argv[])
//{
//	//Date dt;
//	//dt.month = 10;
//	//dt.day = 12;
//	//dt.year = 2020;
//	employee joe = { 123,5000,{10,12,2010} };
//	Date dt = { 10,12,2010 };
//	cout << dt.month << "/" << dt.day << "/" << dt.year << "\n";
//	cout << "工号为："
//		<< joe.emplNO
//		<< "\n薪资为："
//		<< joe.salary
//		<< "\n生日为："
//		<< joe.birthday.month << "/" << joe.birthday.day << "/" << joe.birthday.year << "\n";
//	system("pause");
//	return 0;
//
//}