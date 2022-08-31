#include<iostream>
using namespace std;
int main()
{
	string kartu, pilih;
	cout << "Kartu Langganan Anda : " << endl;
	cout << "Masukkan Kartu Anda : ";
	cin >> kartu;
	
	if (kartu=="gold") {
		cout << "Masukkan Bonus Anda : ";
		cin >> pilih;
		if (pilih=="ambil bonus") {
			cout << "Selamat Bonus Anda telah Diambil" << endl;
		} else {
			cout << "Selamat Bonus Anda telah masuk ke poin" << endl;
		}
	}else {
		if (kartu=="premium") {
			cout << "Masukkan Bonus anda : ";
			cin >> pilih;
			if (pilih=="ambil bonus") {
				cout << "Selamat bonus anda telah diambil" << endl;
			} else {
				cout << "Selamat Bonus anda telah masuk ke poin" << endl;
			}
		}else {
			cout << "buat kartu baru" << endl;
		}
	}
	return 0;
}
