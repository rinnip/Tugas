#include<iostream>
using namespace std;
int main()
{
	double x, y, z, v;
	cout << "Menghitung Volume Balok\n";
	cout << "Masukkan panjang = ";
	cin >> x;
	cout << "Masukkan lebar = ";
	cin >> y;
	cout << "Masukkan Tinggi = ";
	cin >> z;	
	
	v = x * y * z;
	
	cout << "Volume Balok = "<< v << endl;
	return 0;
}
