#include<iostream>
using namespace std;

class Account
{
	private:
		int balance;
		static float roi;

	public:
		void setbalance(int b)
		{
			balance=b;
		}
		void showbalance()
		{
			cout<<balance<<" "<<roi<<endl;
		}
};

float Account::roi=3.5;

int main()
{
	Account a1,a2;
	a1.setbalance(8);
	a1.showbalance();
	a2=a1;
	a2.showbalance();
	return 0;
}
