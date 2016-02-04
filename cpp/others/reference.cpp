#include<iostream>
using namespace std;

int main()
{
	int x=10;
	int& ref=x;

	ref=30;
	cout<<"X= "<< ref<<endl;

	x=30;
	cout<<"X= "<<x<<endl;

	return 0;
}

