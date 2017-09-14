#include<iostream>
using namespace std;

	void tower (int n, char x, char y, char z)
	{
		if(n==1)
			cout<<"把一个盘子从 "<< x <<" 移动到 "<< z <<endl;
		else
		{
			tower(n-1, x, z, y);
			cout<<"把一个盘子从 "<< x <<" 移动到 "<< z <<endl;
			tower(n-1, y, x, z);
		}



	}
int main()
{

	int n;
	cin>>n;
	tower(n, 'A','B','C');

	return 0;
}
