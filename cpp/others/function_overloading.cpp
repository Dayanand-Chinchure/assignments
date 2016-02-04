#include<iostream>
using namespace std;

float area(int);
int area(int,int,int=1);

int main()
{
	int r=2;
	int l=2,b=3;
	cout<<area(r)<<endl;
	cout<<area(l,b)<<endl;
	return 0;
}

float area(int r)
{
	return 3.14*r*r;
}

int area(int l, int b,int c)
{
	return l*b*c;
}
