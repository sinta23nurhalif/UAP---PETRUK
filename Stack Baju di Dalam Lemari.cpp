#include <iostream>
#include <stack>

using namespace std;

int main(){
int pilih;
string input;

do{

cout <<"=================================================" <<endl;
cout <<"======PROGRAM TUMPUKAN BAJU DI DALAM LEMARI======" << endl;
cout <<" 1. Masukan baju di lemari" << endl;
cout <<" 2. Mengambil baju dari tumpukkan di lemari" << endl;
cout <<" 3. Melihat Tumpukan Baju di Lemari" <<endl;
cout <<" 4. Melihat Tumpukan Baju di Lemari "<<endl;
cout <<" 5. Hapus" <<endl;
cout <<"=================================================" <<endl;
	
cout <<"Masukan Pilihan (1-5) : ";
cin >> pilih;
	
	switch (pilih){		//percabangan switch case
	case 1:
		cout <<"Masukan Baju :"<<endl;
		cin >> input;
		tumpukan.push(input);
		system("CLS");
		cout <<endl;
		break;
	case 2:
		if (tumpukan.empty()){		//kondisi jika data masih kosong
			cout <<">>>>>Tumpukan Baju di Lemari Sudah Kosong gan<<<<<<" ;
		}else{
			cout <<"Tumpukan Baju ["<<tumpukan.top() <<"] telah di ambil" <<endl;
			tumpukan.pop();
		}
		cout <<endl;
		break;
	case 3:
		if(tumpukan.empty()){			//kondisi jika data masih kosong
			cout <<">>>>>Tumpukan Baju dilemari Sudah Kosong gan<<<<<<" ;
		}else{
			while (!tumpukan.empty()){
			cout <<"["<<tumpukan.top() <<"]"<<endl;
			tumpukan.pop();
		}
		}
		break;
	case 4:
			cout <<"Jumlah Tumpukan Baju di Lemari ada  " <<tumpukan.size() <<" baju"<<endl;
		break;
	case 5:
			system("CLS");
		default:
			cout <<"Pilihan tidak ada gann";
		}
}while (pilih >=1 && pilih <=4);
	   return 0;
}
