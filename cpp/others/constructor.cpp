#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	
	public:
		Complex(int x, int y)
		{
			cout<<"In Constructor :)"<<endl;
			a=x;
			b=y;
		}	

		Complex(int x)
		{
			a=x;
			b=0;
		}
	
		Complex()
		{
		}

		Complex(Complex &c)
		{
			a=c.a;
			b=c.b;
		}

		void show_data()
		{
			cout<<a<<" "<<b<<endl;
		}	
};

int main()
{
	Complex c1(3,4),c2(6),c3;
	Complex c4(c1);
	c1.show_data();
	c4.show_data();
	return 0;
}

