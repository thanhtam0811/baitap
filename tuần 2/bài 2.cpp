#include <iostream.h>
#include <math.h>
class     Sophuc{
		private: 
	 			int pt, pa;
		public: 
				void Nhap(){
					cout<<"Nhap phan thuc: ";
					cin>>pt;
					cout<<"Nhap phan ao: ";
					cin>>pa;
				}
				
				void sp(){
					cout<<"A= "<<pt <<"+"<<pa<<"*j"<<endl;
				}
				
				int getPA()
			{
				return pa;
			}
				int getPT()
			{
				return pt;
			}
};

int main(){
	Sophuc a[2];
	for(int i = 0; i<2; i++)
	{
		a[i].Nhap();
	}
	cout<<"Tong cua 2 so phuc vua nhap la: "
		<<a[0].getPT() + a[1].getPT()
		<<" + "<<a[0].getPA() + a[1].getPA()
		<<"*j"<<endl;
		
	cout<<"Hieu cua 2 so phuc vua nhap la: "
		<<a[0].getPT() - a[1].getPT()
		<<" + "<<a[0].getPA() - a[1].getPA()
		<<"*j"<<endl;
	
	cout<<"Tich cua 2 so phuc vua nhap la: "
		<<a[0].getPT() * a[1].getPT() - a[0].getPA() * a[1].getPA()
		<<" + "<<a[0].getPT()*a[1].getPA() + a[0].getPA() * a[1].getPT()
		<<"*j"<<endl;
	
	cout<<"Thuong cua 2 so phuc vua nhap la: "
		<<(a[0].getPT() * a[2].getPA() - a[0].getPA() * a[1].getPT())/(pow(a[2].getPT(),2)+pow(a[2].getPA(),2))
		<<"*j"<<endl;
		
}