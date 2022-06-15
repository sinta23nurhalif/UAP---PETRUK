#include <iostream>
#include <stack>	//stl
using namespace std;

int main(){
stack <string> tumpukan;	//deklarasi variabel
int pilih;
string input;

do{		//perulangan do while
cout <<"=================================================" <<endl; 
cout <<"======PROGRAM TUMPUKAN BAJU DI DALAM LEMARI======" << endl;
cout <<" 1. Masukan baju di lemari" << endl;
cout <<" 2. Mengambil baju dari tumpukkan di lemari" << endl;
cout <<" 3. Melihat tumpukan baju di lemari" <<endl;
cout <<" 4. Hapus "<<endl;
cout <<" 5. Melihat jumlah tumpukan baju di lemari" <<endl;
cout <<" 6. keluar Program" <<endl;
cout <<"=================================================" <<endl;
	
cout <<"Masukan Pilihan (1-6) : ";
cin >> pilih;
	
	switch (pilih){		//percabangan switch case
	case 1:
		cout<<"============================================"<<endl;
		cout<<" Masukan Baju  :" ;
		cin >> input;		//Memasukan Baju dilemari
		tumpukan.push(input);
		system("CLS");
		cout <<endl;
		break;
			
	case 2:
		if (tumpukan.empty()){		//kondisi jika data masih kosong
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
			cout <<">>>>>Tumpukan Baju di Lemari Sudah Kosong gan<<<<<<"<<endl ;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl ;
		}else{
			cout <<"Tumpukan Baju ["<<tumpukan.top() <<"] telah di ambil" <<endl;
			tumpukan.pop();
		}
		cout <<endl;
		break;
			
	case 3:
		if(tumpukan.empty()){			//kondisi jika data masih kosong
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
			cout <<">>>>>Tumpukan Baju dilemari Sudah Kosong gan<<<<<<"<<endl;
			cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		}else{
			cout <<"Tumpukan baju di dalam lemari : " <<endl;
			while (!tumpukan.empty()){
			cout <<"["<<tumpukan.top() <<"]"<<endl;		//menampilkan tumpukan baju
			tumpukan.pop();
		}
		}
		break;
			
	case 4:
		system ("CLS");
		break;
			
	case 5:
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout <<"Jumlah Tumpukan Baju di Lemari ada  " <<tumpukan.size() <<" baju gan"<<endl; 	//melihat jumlah tumpukan baju
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		break;
			
	case 6:
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout <<"Program Selesai"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		break;
			
	default:
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout <<"Pilihan tidak ada gan, baca lagi coba pilihannya gan"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		}
	
}while (pilih >=1 && pilih <=4);
	   return 0;
}
