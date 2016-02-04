#include<iostream>
using namespace std;

struct node
{
	int a,b;
	void set_data(int,int);
	void show_data();
};

void node::set_data(int x, int y)
{
	a=x;
	b=y;
}

void node::show_data()
{
	cout<<a<<" "<<b<<endl;
}

int main()
{
	node b1;
	b1.a=30;
	b1.b=20;
	b1.show_data();
	return 0;
}
