#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;

	public:
		void set_data(int x, int y)
		{
			a=x;
			b=y;
		}

		void show_data()
		{
			cout<<a<<" "<<b<<endl;
		}
		
		Complex operator-()
		{
			Complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
		
		Complex operator +(Complex c)
		{
			Complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}

	friend void do_mul(Complex);
		
};

void do_mul(Complex c)
{
	int z=c.a*c.b;
	cout<<z<<endl;
}
int main()
{
	Complex c1,c2,c3,c4;
	c1.set_data(3,4);
	c2.set_data(5,6);
	//c1.show_data();
	//c2.show_data();
	c3=c1+c2;
	c4=-c3;
	c4.show_data();
	do_mul(c3);

	return 0;
}

