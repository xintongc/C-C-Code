/*
 * invoice.cpp
 *
 *  Created on: Jan 1, 2017
 *      Author: zncu
 */

#include <iostream>
using namespace std;

int main()
{
	double atotal, btotal, ctotal, t1, t2, t3;
	for(int i=0; i<3; i++)
	{
		int id; cin>>id;
		int n;  cin>> n;


		for(int j =0; j<n; j++)
		{
			char invoiceType;
			double amout;
			cin>>invoiceType;
			cin>>amout;
			if(id == 1)
			{
				t1 += amout;
				if(invoiceType == 'A') atotal += amout;
				else if (invoiceType == 'B') btotal += amout;
				else if(invoiceType == 'C') ctotal += amout;
			}
			if(id == 2)
			{
				t2 += amout;
				if(invoiceType == 'A') atotal += amout;
				else if (invoiceType == 'B') btotal += amout;
				else if(invoiceType == 'C') ctotal += amout;
			}
			if(id == 3)
			{
				t3 += amout;
				if(invoiceType == 'A') atotal += amout;
				else if (invoiceType == 'B') btotal += amout;
				else if(invoiceType == 'C') ctotal += amout;
			}

		}
	}
	cout<<"1"<<t1<<endl;
	cout<<"2"<<t2<<endl;
	cout<<"3"<<t3<<endl;
	cout<<"A"<<atotal<<endl;
	cout<<"B"<<btotal<<endl;
	cout<<"C"<<ctotal<<endl;

	return 0;
}
