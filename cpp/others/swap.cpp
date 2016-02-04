#include<iostream>
using namespace std;

void swap(int& x, int& y)
{
	int temp=x;
	x=y;
	y=temp;
}

int main()
{
	int x=2,y=3;
	swap(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}


