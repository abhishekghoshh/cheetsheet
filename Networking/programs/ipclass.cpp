#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
	string ip;
	int ip1,ip2,ip3,ip4,ip_match;
	cout<<"Enter your IP"<<endl;
	cin>>ip;
	ip1=ip2=ip3=ip4=0;
	ip_match=1;
	for(int i=0;i<ip.length();i++)
	{
		if(ip[i]=='.')
		{
			ip_match++;
			if(ip_match==5)
			{
				cout<<"Please enter a valid ip"<<endl;
				return 0;
			}
			continue;
		}
		else
		{
			if(ip_match==1)
			{
				ip1=ip1*10+ip[i]-'0';
			}
			if(ip_match==2)
			{
				ip2=ip2*10+ip[i]-'0';
			}
			if(ip_match==3)
			{
				ip3=ip3*10+ip[i]-'0';
			}
			if(ip_match==4)
			{
				ip4=ip4*10+ip[i]-'0';
			}
		}
	}
	int m=ip1;
	if(ip1<=255&&ip2<=255&&ip3<=255&&ip4<=255&&ip_match==4)
	{
		cout<<"IP in the class of ";
		if(m<=127)
		cout<<"A";
		else if(m<=191)
		cout<<"B";
		else if(m<=223)
		cout<<"C";
		else if(m<=239)
		cout<<"D";
		else
		cout<<"E";
	}
	else
	{
		cout<<"Please enter a valid ip"<<endl;
	}
	return 0;
}
