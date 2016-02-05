#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	
	protected:
		void set_value(int x)
		{
			a=x;
		}

		
	void show_data()
	{
		cout<<a<<endl;
	}
};

class B:public A
{
	public :
		void set_data(int x)
		{
			set_value(x);
		}

		void show_ddata()
		{
			show_data();
		}

};

int main()
{
	B c;
	c.set_data(2);
	c.show_ddata();
	return 0;
}
