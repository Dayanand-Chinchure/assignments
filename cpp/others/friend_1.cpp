#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;

	public:
		friend Complex operator +(Complex, Complex);
		void set_data(int x,int y)
		{
			a=x;
			b=y;
		}

		void show_data()
		{
			cout<<a<<" "<<b<<endl;
		}
};

Complex operator +(Complex X, Complex Y)
{
	Complex temp;
	temp.a=X.a+Y.a;
	temp.b=X.b+Y.b;
	return temp;
}

int main()
{
	Complex a,b,c;
	a.set_data(3,4);
	b.set_data(3,4);
	c=a+b;
	c.show_data();
	return 0;
}
