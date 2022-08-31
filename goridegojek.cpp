#include<iostream>
#include<string>
using namespace std;
int main()
{
	int jarak, b; 
	string gojek;
	
	cout << "==Gojek==\n";
	cout << "Pilihan gojek : ";
	cin >> gojek;
	if (gojek == "goride") {
		cout << "Pilih Jarak : ";
    	cin >> jarak;
      	if (jarak <= 5) {
	        b = (2000 * jarak) + 5000;
	        cout << b << endl;      
			} else {
				if (jarak <= 10) {
		           b = (2500 * jarak) + 7500;
		           cout << b << endl;        
			} else {
				if (jarak<=15) {
			        b = (3000 * jarak) + 10000;
			        cout << b << endl;            
			} else {
			    if (jarak > 15) {
					cout << "Maaf pesanan anda tidak dapat dilayani" << endl;               
			} else {
	               }
	            }
	         }
	      }
   } else {
   		if (gojek == "gocar") {
	        cout << "Pilih Jarak : ";
	        cin >> jarak;
        	if (jarak <= 5) {
	            b = (3000 * jarak) + 15000;
	            cout << b << endl;         
			} else {
				if (jarak <= 10) {
				b = (4500 * jarak) + 17500;
				cout << b << endl;           
			} else {
				if (jarak <= 15) {
				b = (5000 * jarak) + 20000;
				cout << b << endl;               
			} else {
				if (jarak > 15) {
				cout << "Maaf pesanan anda tidak dapat dilayani" << endl;                  
			} else {
                  }
               }
            }
         }
      } else {
      }
   }

   return 0;
}
