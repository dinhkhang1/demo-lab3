#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool kiemTraSoNguyenTo(int n){
	if (n <= -1) {
		return false;
	}
	if (n == 2){
		return true;
	}
	if( n%2 == 0){
		return false;
	}
	for( int i = 3; i * i<=n; i +=2){
	if(n % i == 0){
		return false;
	}
	}
	return true;
};
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	//cout << "Khang, tong";
	//cin >> a, b;
	//cout << "KQ" << a + b << endl;
	int so;
	cout << "khang///Nhap 1 so nguyen duong";
	cin >> so;
	if(kiemTraSoNguyenTo(so)){
		cout<< so << "la so nguyen to" << endl;
	}else{
		cout << so << " khong la so nguyen to"<<endl;
	}
	system("pause");
	return 0;
}