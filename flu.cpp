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
	int n;
	cin>>n;
	char r[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>r[i][j];

	int day;
	cin>>day;

	for(int a=0; a<day; a++)
	{
		for(int i=0; i<n; i++)
				for(int j=0; j<n; j++)
				{
					if(r[i][j]=='@')
					{
						if(r[i-1][j]=='.' && i-1>=0 && i-1 <n) r[i-1][j]='*';
						if(r[i+1][j]=='.' && i+1>=0 && i+1 <n) r[i+1][j]='*';
						if(r[i][j-1]=='.' && j-1>=0 && j-1 <n) r[i][j-1]='*';
						if(r[i][j+1]=='.' && j+1>=0 && j+1 <n) r[i][j+1]='*';
					}
				}

		for(int e=0; e<n; e++)
					for(int f=0; f<n; f++)
						if(r[e][f]=='*') r[e][f]='@';


		for(int b=0; b<n; b++)
		{
			for(int c=0; c<n; c++)
				cout<<r[b][c];
			cout<<"\n";
		}
		cout<<"\n";


	}

	int count = 0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
				if(r[i][j]=='@') count++;

	cout<< count;


	return 0;
}
