#include<iostream>
using namespace std;

class Complex2;

class Complex1 
{
	private:
		int a;

	public:
		friend void fun(Complex1, Complex2);
		void set_data(int x)
		{
			a=x;
		}

		void show_data(int x)
		{
			cout<<x<<endl;
		}
};

class Complex2 
{
	private:
		int b;

	public:
		friend void fun(Complex1, Complex2);
		void set_data(int x)
		{
			b=x;
		}

		void show_data(int x)
		{
			cout<<x<<endl;
		}
};

void fun(Complex1 a, Complex2 b)
{
	a.show_data(a.a+b.b);
}	

int main()
{
	Complex1 a;
	Complex2 b;
	a.set_data(3);
	b.set_data(4);
	fun(a,b);
	return 0;
}
