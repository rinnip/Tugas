#include<iostream>
using namespace std;
int main()
{
  	string warna;
  	cout << "Masukkan Warna :";
  	cin >> warna;
  	
  	if (warna == "hijau"){
  		cout << "Jalan" << endl;
	  } else if(warna == "merah") {
	  	cout << "Berhenti" << endl;
	  }
	  cout << "Selamat Jalan Kamuuu" << endl;
	  
	return 0;
}

