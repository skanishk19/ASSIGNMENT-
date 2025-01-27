#include<iostream>
using namespace std;
int fact(int num)
{
	if(num!=0)
	{
		return num * fact(num-1);
	}
	else
	{
		return 1; 
	}
}
int main()
{
	int num;
	cout<<"Enter the number = ";
	cin>>num;
	int ans = fact(num);
	cout<<"\nThe facts of natural numbers is = "<<ans;
	return 0;
}