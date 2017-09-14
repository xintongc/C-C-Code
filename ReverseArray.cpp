/*
 * C++Project.cpp
 *
 *  Created on: Jan 5, 2017
 *      Author: zncu
 */
#include<iostream>
using namespace std;

int main()
{
	int  a[5], *p = NULL, *q = NULL, temp;
	for(p=a; p<a+5; p++)
		cin>>*p;

	for(p=a, q=a+4; p<q; p++,q--)
	{
		temp = *p;
		*p =*q;
		*q = temp;
	}

	for(p=a; p<a+5;p++)
		cout<<*p<<endl;





	return 0;
}



