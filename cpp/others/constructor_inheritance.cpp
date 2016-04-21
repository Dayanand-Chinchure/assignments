#include<iostream>
using namespace std;


class A
{
		int a;
		this->a=10;

	public:
		A(int x)
		{
		a=x;
		cout<<a<<endl;
		}
};

class B:public A
{
	int b;
	public:
		B(int x,int y):A(x)
		{
			b=y;
			cout<<b<<endl;
		}
};

int main()
{
	B c(3,4);
	return 0;
}
