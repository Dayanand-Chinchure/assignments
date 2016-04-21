#include<iostream>
using namespace std;


class A
{
	public:
		void fun() {}
		void fun2(){
		cout<<"In class a"<<endl;
		}
};

class B:public A
{	
	public:
		void fun(){}
		//void fun2(){cout<<"In class b"<<endl;}

};

int main()
{
	B b;
	b.fun2();
	return 0;
}
