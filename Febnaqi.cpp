#include<iostream>
using namespace std;

	double fab (double n)
	{
		if(n==1)
			return 1;
		else if(n==2)
			return 1;
		else
			return fab(n-1)+ fab(n-2);
	}
int main()
{

	int n;
	cin>>n;
	cout<<fab(n);

	return 0;
}
