/*
 * C++Project.cpp
 *
 *  Created on: Jan 5, 2017
 *      Author: zncu
 */
#include<iostream>
using namespace std;

	int recur()
	{
	char c;
	c = cin.get();
	if(c !='\n')
		recur();
	cout<<c;
	return 0;
	}
int main()
{
	recur();
	return 0;
}



