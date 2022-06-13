#include <iostream>
#include <stack>

using namespace std;
int main();
int pilih;
string input;

cout <<"PROGRAM TUMPUKAN BAJU DI DALAM LEMARI" << endl;
cout <<" 1. Masukan baju di lemari" << endl;
cout <<" 2. Mengambil baju dari tumpukkan di lemari" << endl;
cout<<" 3. Melihat Tumpukan Baju di Lemari" <<endl;
cout <<" 4. Melihat Tumpukan Baju di Lemari "<<endl;
cout <<" 5. Hapus"<<endl;

cout <<"Masukan Pilihan (1-5) : ";
		cin >> pilih;
		
			switch (pilih){			//percabangan switch case
			case 1:
					cout <<"Masukan Baju :"<<endl;
					cin >> input;
					tumpukan.push(input);
				system("CLS");
				cout <<endl;
				break;
