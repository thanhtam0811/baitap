#include <iostream.h>

void Nhap(int a[], int n)
{
	for (int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
		}		
}

void Xuat(int a[], int n){
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";	
}

void Xuatnguoc(int a[], int n){
	for(int i=n-1; i >= 0; i--)
		cout<<a[i]<<" ";
}

void Tangdan(int a[], int n){
	int tg;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i]<a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}

void them(int a[], int n, int x){
	cout<<"Nhap gia tri can tim: ";
	cin>>x;
	for(int i=0; i<n; i++){
		if(x == a[i]){
			cout<<"Ton tai x trong mang."<<endl;
			break;
		}else 
			{	cout<<"Khong ton tai x trong mang."<<endl;
				break;	}
			
	}
}
int main(){
	int a[50];
	int n,x;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	Nhap(a,n);
	cout<<"Mang ban dau: ";
	Xuat(a,n);
	cout<<"\n";
	cout<<"Mang theo thu tu nguoc: ";
	Xuatnguoc(a,n);
	cout<<"\n";
	cout<<"Mang theo thu tu tang dan: ";
	Tangdan(a,n);
	Xuat(a,n);
	cout<<"\n";
	them(a,n,x);
	
}
