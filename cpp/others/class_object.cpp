#include<iostream>
using namespace std;

class Complex
{
	int a,b;

	public:
		void set_data(int, int);
		void show_data();

	Complex add(Complex);

};

Complex Complex::add(Complex c)
{
	Complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}

void Complex::set_data(int x, int y)
{
	a=x;
	b=y;
}	

void Complex::show_data()
{
	cout<<a<<" "<<b<<endl;
}

int main()
{
	Complex c1,c2,c3;
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3=c1.add(c2);
	c3.show_data();
	return 0;
}
