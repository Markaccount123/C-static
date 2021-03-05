#include<iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//
//
//class A
//{
//public:   
//	A(int a) 
//	:_a(a)    
//	{} 
//private:    
//	int _a;
//};
//
//class B 
//{
//public:    
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)    
//	{} 
//private:    
//	A _aobj;      // 没有默认构造函数    
//	int& _ref;    // 引用    
//	const int _n; // const
//};
//
//
//
//class A 
//{
//public:    
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)    
//	{}        
//
//private:    
//	int _a1;    
//	int _a2; 
//}
//
//int main()
//{
//	A aa1(2); //他的生命周期在main函数域
//	A(2); //匿名对象，他的生命周期就在这一行
//	A aa2 = 1;
//	return 0;
//}
//
//int main()
//{ 
//	A aa(1);   
//	aa.Print();
//}
//
//A.输出1  1
//B.程序崩溃
//C.编译不通过 
//D.输出1  随机值


//
//class Date 
//{
//public:      
//	Date(int year) 
//		:_year(year)     
//	{}          
//	explicit Date(int year) 
//			:_year(year)      
//			{}     
//private:      
//	int _year;      
//	int _month: 
//	int _day; 
//}；
//
//void TestDate() 
//{
//	Date d1(2018);        
//	// 用一个整形变量给日期类型对象赋值    
//	// 实际编译器背后会用2019构造一个无名对象，最后用无名对象给d1对象进行赋值 
//	//实际上是进行了一个隐式的转换，对于转换的值是一个临时变量
//	d1 = 2019; 
//}


//实现一个类，计算程序中创建了多少个类对象
//我每创建一个对象相应的就会调用一次构造和拷贝构造函数
//class A
//{
//public:
//	A()
//	{
//		_count++;
//	}
//
//	A(const A& aa)
//	{
//
//	}
//	int GetCount()
//	{
//		return _count;
//	}
//private:
//	static int _count; //此时任意一个对象都可以访问这个成员变量，且访问的是同一个
//};
////但是这样子写是有问题的，因为无法识别你的_count此时在全局域，不是在A这个类域中
////int _count = 0;
//int A::_count = 0;
//
//int main()
//{
//	cout << sizeof(A) << endl; //因为你的成员变量在静态区，所以不占空间大小，但是显示1用来占位，表示类创建出来了
//	A a1;
//	A a2;
//	A a3;
//	A a4;
//
//	//你会发现这个是无法编译通过的，因为你的_count是私有的成员函数
//	//cout << _count << endl;
//
//	//这里a1相当于帮助他去突破类域去找位置,但是问题就是此时你需要把你的_count变为公有的
//	//cout << a1._count<< endl;
//	//cout << A::_count << endl;
//
//	//当变为私有的时候，可以写一个成员函数去调用这个成员变量
//	cout << a1.GetCount() << endl;
//	return 0;
//}
//
//
//
//class A
//{
//public:
//	void Print()
//	{
//		cout << a << endl;
//	}
//private:
//	//非静态成员变量，可以在成员声明时给缺省值
//	//一定要清楚，这里不是赋值，是给了一个缺省值
//	int a = 10;
//};


class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{

	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;

	//这里其实是可以用的，但是对于自定义类型他需要运算符重载
	//cin >> d1;
	//cout << d1;

	return 0;
}