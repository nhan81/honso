#include <iostream>

using namespace std;

struct ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct ngay Ngay;
struct sotietkiem
{
	char maso [5];
	char loaitietkiem[10];
	char hotenkhachhang[30];
	int cmnd;
	Ngay ngaymoso;
	long sotiengui;
};
typedef struct sotietkiem stk;
void nhap( stk &stk , Ngay &ngay)
{
	cout << " nhap ngay ";
	cin >> ngay.ngay;
	cout << " nhap thang ";
	cin >> ngay.thang;
	cout << " nhap nam ";
	cin >> ngay.nam;
	cout << " nhap ma so  ";
	cin >> stk.maso;
	cout << " nhap loai tiet kiem  ";
	cin >> stk.loaitietkiem;
	cout << " nhap ho ten khach hang ";
	cin >> stk.hotenkhachhang;
	cout << " nhap cmnd ";
	cin >> stk.cmnd;
	cout << " nhap so tien gui  ";
	cin >> stk.sotiengui;
}

void xuat(stk& stk, Ngay& ngay)
{
	cout << "ho ten khach hang : " << stk.hotenkhachhang << endl;
	cout << "loai tiet kiem : " << stk.loaitietkiem << endl;
	cout << "ma so : " << stk.maso << endl;
	cout << "so tien gui : " << stk.sotiengui << endl;
	cout <<"cmnd : " << stk.cmnd;
}
int main() 
{
	Ngay ngay;
	sotietkiem stk;
	nhap(stk,ngay);
	xuat(stk, ngay);
	return 0;

}
