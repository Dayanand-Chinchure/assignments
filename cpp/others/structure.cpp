#include<iostream>
#include<string.h>

using namespace std;

struct book
{
	int bookid;
	char title[20];
	float price;
};


int main()
{
	book b1={1,"Immortals of Meluha",100.50};
	book b2,b3;
	strcpy(b2.title,b1.title);
	b2.bookid=b1.bookid;
	b3=b2;
	cout<<b3.title<<endl;
	cout<<b3.bookid<<endl;
}
