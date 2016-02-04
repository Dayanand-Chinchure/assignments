#include<iostream>
using namespace std;

int sum(int,int ,int=0);

int main()
{
	int a=3,b=5;
	cout<<sum(a,b)<<endl;
	int l=8;
	cout<<sum(a,b,l)<<endl;
}

int sum(int x,int y, int z)
{
	return x+y+z;
}
