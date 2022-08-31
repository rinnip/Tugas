#include<iostream>
using namespace std;
int main()
{
	double p, l, t, r, tt, v;
	cout << "Menghitung Volume balok dan Volume tadon";
	cout << "Masukkan Panjang Balok =";
	cin >> p;
	cout << "Masukkan lebar Balok =";
	cin >> l;
	cout << "Masukkan Tinggi Balok =";
	cin >> t;
	cout << "Masukkan Jari-jari Balok =";
	cin >> r;
	cout << "Masukkan Tinggi Tandon ="; 
	cin >> tt;	
	
	v = (p * l * t) + (3.14 * r * r * tt);
	cout << "Jumlah Volume Balok dan Tandon Adalah :" << v << endl;
	return 0;
}

