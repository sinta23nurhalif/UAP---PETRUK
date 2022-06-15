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
cout <<"\t\t\t\t 5. Melihat jumlah tumpukan baju di lemari" <<endl;
cout <<"\t\t\t\t 6. keluar Program" <<endl;
cout <<"\t\t\t\t=================================================" <<endl;
	
cout <<"\t\t\t\t Masukan Pilihan (1-6) : ";
cin >> pilih;
	
	switch (pilih){		//percabangan switch case
	case 1:
		cout <<"\t\t\t\t============================================"<<endl;
		cout <<"\t\t\t\tMasukan Baju  :" ;
		cin >> input;		//Memasukan Baju dilemari
		tumpukan.push(input);
		system("CLS");
		cout <<endl;
		cout <<endl;
		cout <<endl;
		break;
			
	case 2:
		if (tumpukan.empty()){		//kondisi jika data masih kosong
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
			cout <<"\t\t\t\t>>>>>Tumpukan Baju di Lemari Sudah Kosong gan<<<<<<"<<endl ;
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
		}else{
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout <<"\t\t\t\tTumpukan Baju ["<<tumpukan.top() <<"] telah di ambil" <<endl;
			tumpukan.pop();
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		}
		cout <<endl;
		cout <<endl;
		cout <<endl;
		break;
			
	case 3:
		if(tumpukan.empty()){			//kondisi jika data masih kosong
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout <<"\t\t\t\t>>>>>Tumpukan Baju dilemari Sudah Kosong gan<<<<<<"<<endl;
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		}else{
			cout <<"\t\t\t\tTumpukan baju di dalam lemari : " <<endl;
			while (!tumpukan.empty()){
			cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout <<"\t\t\t\t ["<<tumpukan.top() <<"]"<<endl;		//menampilkan tumpukan baju
			tumpukan.pop();
			}
		}
		cout <<endl;
		cout <<endl;
		cout <<endl;
		break;
			
	case 4:
		system ("CLS");
		break;
			
	case 5:
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout <<"\t\t\t\t Jumlah Tumpukan Baju di Lemari ada  " <<tumpukan.size() <<" baju gan"<<endl; 	//melihat jumlah tumpukan baju
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		break;
			
	case 6:
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout <<"\t\t\t\t Program Selesai"<<endl;
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		exit (0);
		break;
			
	default:
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout <<"\t\t\t\t Pilihan tidak ada gan, baca lagi coba pilihannya gan"<<endl;
		cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout <<endl;
		cout <<endl;
		cout <<endl;
		}
	}while (pilih >=1 && pilih <=5);
	 return 0;
}
