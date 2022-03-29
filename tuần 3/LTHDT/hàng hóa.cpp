#include <iostream.h>

class HangHoa{
	private:
		char MaHang[8];
		char TenHang[30];
		int soluong;
		float dongia, thanhtien;
		
	public:
		void nhap()
		{
			cout<<"\nNhap ma hang: ";
			cin.getline(MaHang, 8);
			cout<<"\nNhap ten hang: ";
			cin.getline(TenHang, 30);
			cout<<"\nNhap so luong: ";
			cin>>soluong;
			cout<<"\nNhap don gia: ";
			cin>>dongia;
			fflush(stdin);
		}
		
		void TinhTien()
		{
			thanhtien = soluong*dongia;
		}
		
		void xuat()
		{
			cout<<"Ma hang: "<<MaHang   <<"\t"
				<<"Ten hang: "<<TenHang <<"\t"
				<<"So luong: "<<soluong <<"\t"
				<<"Don gia: "<<dongia   <<"\t"
				<<"Thanh tien: "<<thanhtien<<endl;
		}
		
		void lonhon50()
		{
			if(dongia > 50)
			{
				xuat();
			}
		}	
};

int main()
{
	int n;
	cout<<"\nNhap so luong hang hoa: ";
	cin>>n;
	HangHoa a[n];
	fflush(stdin);
	cout<<"Nhap thong tin hang hoa: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nHang hoa thu "<<i+1<<endl;
		a[i].nhap();
	}
	
	cout<<"\nXuat thong tin hang hoa co don gia lon hon 50: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"\nHang hoa thu "<<i+1<<endl;
		a[i].lonhon50();
	}
	return 0;
}