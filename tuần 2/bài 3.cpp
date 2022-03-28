#include <iostream.h>
int main()
{
	int n;
	int P=1;
	cout<<"Nhap n = ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
	    	P = P*2*i;	    	
	}
	cout<<"P = "<<P<<endl;
	return 0;
}