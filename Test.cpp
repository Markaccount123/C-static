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
//	A _aobj;      // û��Ĭ�Ϲ��캯��    
//	int& _ref;    // ����    
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
//	A aa1(2); //��������������main������
//	A(2); //�������������������ھ�����һ��
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
//A.���1  1
//B.�������
//C.���벻ͨ�� 
//D.���1  ���ֵ


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
//}��
//
//void TestDate() 
//{
//	Date d1(2018);        
//	// ��һ�����α������������Ͷ���ֵ    
//	// ʵ�ʱ������������2019����һ������������������������d1������и�ֵ 
//	//ʵ�����ǽ�����һ����ʽ��ת��������ת����ֵ��һ����ʱ����
//	d1 = 2019; 
//}


//ʵ��һ���࣬��������д����˶��ٸ������
//��ÿ����һ��������Ӧ�ľͻ����һ�ι���Ϳ������캯��
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
//	static int _count; //��ʱ����һ�����󶼿��Է��������Ա�������ҷ��ʵ���ͬһ��
//};
////����������д��������ģ���Ϊ�޷�ʶ�����_count��ʱ��ȫ���򣬲�����A���������
////int _count = 0;
//int A::_count = 0;
//
//int main()
//{
//	cout << sizeof(A) << endl; //��Ϊ��ĳ�Ա�����ھ�̬�������Բ�ռ�ռ��С��������ʾ1����ռλ����ʾ�ഴ��������
//	A a1;
//	A a2;
//	A a3;
//	A a4;
//
//	//��ᷢ��������޷�����ͨ���ģ���Ϊ���_count��˽�еĳ�Ա����
//	//cout << _count << endl;
//
//	//����a1�൱�ڰ�����ȥͻ������ȥ��λ��,����������Ǵ�ʱ����Ҫ�����_count��Ϊ���е�
//	//cout << a1._count<< endl;
//	//cout << A::_count << endl;
//
//	//����Ϊ˽�е�ʱ�򣬿���дһ����Ա����ȥ���������Ա����
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
//	//�Ǿ�̬��Ա�����������ڳ�Ա����ʱ��ȱʡֵ
//	//һ��Ҫ��������ﲻ�Ǹ�ֵ���Ǹ���һ��ȱʡֵ
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

	//������ʵ�ǿ����õģ����Ƕ����Զ�����������Ҫ���������
	//cin >> d1;
	//cout << d1;

	return 0;
}