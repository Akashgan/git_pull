#include<iostream>
using namespace std;
int main ()
{
	int num,prime=1;
	cout<<"enter the number";
	cin>>num;
	for (int i=2;i<num;i++)
	{
		if (num%i==0)
		{
			cout<<"non prime";
			prime=0;
			break;
		}
	}
	if (prime==1)
	{
		cout<<"prime number";
	}
	return 0;
}
