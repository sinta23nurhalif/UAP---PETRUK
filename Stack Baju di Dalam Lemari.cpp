#include <iostream>
#include <stack>	//stl

using namespace std;

int main(){
	stack <string> tumpukan;	//deklarasi variabel
	int pilih;
	string input;

do{		//perulangan do while
cout <<"\t\t\t\t=================================================\n"; 
cout <<"\t\t\t\t======PROGRAM TUMPUKAN BAJU DI DALAM LEMARI======\n";
cout <<"\t\t\t\t 1. Masukan baju di lemari\n";
cout <<"\t\t\t\t 2. Mengambil baju dari tumpukkan di lemari\n";
cout <<"\t\t\t\t 3. Melihat tumpukan baju di lemari\n";
cout <<"\t\t\t\t 4. Hapus \n";
cout <<"\t\t\t\t 5. Melihat jumlah tumpukan baju di lemari\n";
cout <<"\t\t\t\t 6. keluar Program\n";
cout <<"\t\t\t\t=================================================\n";
	
cout <<"\t\t\t\t Masukan Pilihan (1-6) : ";
cin >> pilih;
	
	switch (pilih){		//percabangan switch case
	case 1:
		cout <<"\t\t\t\t============================================\n";
		cout <<"\t\t\t\tMasukan Baju  :" ;
		cin >> input;		//Memasukan Baju dilemari
		tumpukan.push(input);
		system("CLS");
		cout<<"\n\n\n";
		break;
			
	case 2:
		if (tumpukan.empty()){		//kondisi jika data masih kosong
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout <<"\t\t\t\t>>>>>Tumpukan Baju di Lemari Sudah Kosong gan<<<<<<\n";
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}else{
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout <<"\t\t\t\tTumpukan Baju ["<<tumpukan.top() <<"] telah di ambil\n";
			tumpukan.pop();
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}
		cout<<"\n\n\n";
		break;
			
	case 3:
		if(tumpukan.empty()){			//kondisi jika data masih kosong
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout <<"\t\t\t\t>>>>>Tumpukan Baju dilemari Sudah Kosong gan<<<<<<\n";
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		}else{
			cout <<"\t\t\t\tTumpukan baju di dalam lemari : \n";
			while (!tumpukan.empty()){
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout <<"\t\t\t\t ["<<tumpukan.top() <<"]\n";		//menampilkan tumpukan baju
			tumpukan.pop();
			}
		}
		cout<<"\n\n\n";
		break;
			
	case 4:
		system ("CLS");
		break;
			
	case 5:
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout <<"\t\t\t\t Jumlah Tumpukan Baju di Lemari ada  " <<tumpukan.size() <<" baju gan\n"; 	//melihat jumlah tumpukan baju
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		break;
			
	case 6:
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout <<"\t\t\t\t Program Selesai\n";
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		exit (0);
		break;
			
	default:
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout <<"\t\t\t\t Pilihan tidak ada gan, baca lagi coba pilihannya gan\n";
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
			
		}
	}while (pilih >=1 && pilih <=5);
	 return 0;
}
