#include<iostream>
using namespace std;

int main()
{
	int c = 76;

	cout << &c <<endl;
	cout << sizeof(&c) << endl;
	cout << *&c << endl;

	int *pointer;
	pointer = &c;//指针变量pointer指向了变量c

	cout << endl;
	cout << pointer<<endl;
	cout << *pointer << endl;

	return 0;
}
