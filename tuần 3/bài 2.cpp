#include<iostream.h>
int main(){
	int n;
	cout<<"So KW tieu thu: ";
	cin>>n;
	cout<<"Don gia dien tieu thu: ";
	if(n>300){
		cout<<n*5000;
	}else if(n>200){
		cout<<n*3000;
	}else if(n>100){
		cout<<n*2500;
		
	}else
                cout<<n*2000;
		
	return 0;
}