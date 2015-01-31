/*
 * assign_3.cpp
 *
 *  Created on: 30-Jan-2015
 *      Author: Chayan
 */
#include<iostream>
#include <string>
#include <list>
#include <sstream>
using namespace std;
int main()
{
	int k_value;
    string value;
    list<int> vect;
    cout<<"Enter the value of k : ";
	cin>>k_value;
	cout<<"Enter the set :";
	cin>>value;
	stringstream ss(value);
	int i;

	while (ss >> i)
	{
	    vect.push_back(i);

	    if (ss.peek() == ',')
	        ss.ignore();
	}
	int ar[vect.size()];
	int size = vect.size();
	for(int j=0;j<size;j++)
	{
		ar[j]=vect.front();
		vect.pop_front();
	}
	for(int j=0;j<size;j++)
	{
		for(int k=0;k<size;k++)
		{
			if(j!=k)
			{
				for(int l=0;l<size;l++)
				{
					if(j!=l && k!=l)
					{
						for(int h=0;h<size;h++)
						{
							//cout<<j<<" "<<k<<" "<<l<<"\n";
							if(h!=j && h!=k && h!=l && ((ar[j]+ar[k]+(ar[l]*ar[h]))<=k_value))
								cout<<"{ "<<ar[j]<<ar[k]<<ar[l]<<ar[h]<<" }"<<"\n";
						}
					}
				}
			}
		}
	}
	cout<<"code is running";
return 0;
}




