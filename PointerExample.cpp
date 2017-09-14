#include<iostream>
using namespace std;

int main()
{
	int  icount = 18;

	int *pointer = &icount;
	*pointer = 58;

	cout << icount <<endl;
	cout << pointer<<endl;
	cout << &icount << endl;
	cout << *pointer << endl;
	cout << &pointer<< endl;


	return 0;
}
