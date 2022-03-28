#include <iostream.h>
int main()
{
	int n;
	do{
		cout<<"nhap vao thu: ";cin>>n;
	}while(0>n||n>=8);		
    if(n==1){
    	cout<<"\n Monday"<<endl;
    }else if(n==2){
    	cout<<"\n Tuesday"<<endl;
    }else if(n==3){
    	cout<<"\n Wednesday"<<endl;
    }else if(n==4){
    	cout<<"\n Thursday"<<endl;
    }else if(n==5){
    	cout<<"\n Friday"<<endl;	    		    
    }else if(n==6){
   	    cout<<"\n Saturday"<<endl;
    }else{
    	cout<<"\n Sunday"<<endl;
    }
	return 0;
}