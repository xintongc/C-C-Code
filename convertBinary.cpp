#include<iostream>
using namespace std;

	void convertBi (int n)
	{
		if(n/2!=0)
		{
			convertBi(n/2);
			cout<<n%2;
		}
		else
			cout<<n;
	}
int main()
{

	int n;
	cin>>n;
	convertBi(n);

	return 0;
}
