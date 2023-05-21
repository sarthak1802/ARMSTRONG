#include <iostream>
using namespace std;

int main()
{
	int n,a,r,m,s=0;
	
    cout<< "enter no. "<<endl;
	cin>>n;
	m=n;
	
	for(int i=m;i>0;i=i/10)
	{
		r=i%10;
		a=r*r*r;
		s=s+a;
	}
	if(m==s)
	{
		cout<<"no. is armstrong"<<endl;
	}
	else
	{
		cout<<"no is  not armstrong"<<endl;
	}
}