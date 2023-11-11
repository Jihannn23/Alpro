#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
char ulang;
string username;
string password;
string nik;
char nama [30] ;
char alamat [100];
string telepon;
string email;
int wcheckin,wcheckout,durasi;
char tipekamar,jawaban;
	
void reservasi() {
	cout << "reservasi" << endl;
	cout << "Tanggal Check in : ";
	cin >> wcheckin;
	cout << "Tanggal Check out : ";
	cin >> wcheckout;
	cout << "Lama menginap dalam hari"
	cin >> durasi;
	system ("CLS");
		
	cout << "pemilihan kamar \n";
	cout << "tipe kamar A \n Standard Room \n Rp1.500.000/malam";
	cout << "tipe kamar B \n Superior Room \n Rp3.000.000/malam";
	cout << "tipe kamar C \n Deluxe Room \n Rp4.500.000/malam";
	cout << "tipe kamar D \n Junior Suite Room \n Rp5.500.000/malam";
	cout << "tipe kamar E \n Suite Room \n Rp6.500.000/malam";
	cout << "tipe kamar F \n Family Room \n Rp8.500.000/malam";
	cout << "tipe kamar G \n Presidential Room \n Rp9.500.000/malam";
	cout << "pilih kamar (A/B/C/D/E/F/G) : ";
	cin >> tipekamar;
	system ("CLS");
	
	switch (tipekamar) {
		case 'A' {
		cout << "A";
		break;
	}case 'B' {
		cout << "B";
		break;
	}case 'C' {
		cout << "C";
		break;
	}case 'D' {
		cout << "D";
		break;
	}case 'E' {
		cout << "E";
		break;
	}case 'F' {
		cout << "F";
		break;
	}case 'G' {
		cout << "G";
		break;
	}default {
		cout << "pilihan menu tidak ada";
	}
	cout << "Lanjutkan ke pengisian data? (y/t) :";
	cin >> jawaban;
	system ("CLS");
		
	cout << "\t NIK \t: ";
	cin >> nik;
	cout << "\t Nama \t\t: ";
	cin.ignore();
	cin.getline(nama, 30);
	cout << "\t Alamat \t: " ;
	cin.ignore();
	cin.getline(alamat,100);
	cout<< "\t No. Telepon \t: ";
	cin >> telepon;
	cout << "\t Alamat email \t: ";
	cin >> email;
	cout << endl << endl << "Data anda telah diterima" << endl << endl;
	system ("PAUSE");
	system ("CLS");
		
	cout << "pembayaran";
	
	system ("PAUSE");
	system ("CLS");
		
	cout << "Berikut adalah data anda";
	cout << "No. Kamar : ";
	cout << "Tipe kamar : ";
	cout << "Nama : ";
	cout << "Tanggal check in :";
	cout << "Tanggal check out :";
	cout << "reservasi telah selesai dilakukan";
	system ("PAUSE");
	system ("CLS");
	}


void checkout () {
	cout<< "\t No. Kamar \t: ";
	cout << "\t Tggl Check out \t: ";
	string checkout;
	cin >> checkout;
};

int main() {
	int i;
	cout << " HOTEL " << endl << endl;
	for(i = 2; i >=0;) {
		cout << "\t login" << endl << endl;
		cout << "username \t:\t";
		cin >> username; 
		cout << "password \t:\t";
		cin >> password; 
		if(username=="admin") {
			if(password=="admin"){
				 cout<<"*** Berhasil Login ***"<<endl;
				 system ("PAUSE");
				 system ("CLS");
				 break;
			}else{
				cout<<"Password yang anda masukan salah!. Sisa percobaan anda adalah " << i << " kali" <<endl << endl;
				system ("PAUSE");
				system ("CLS");
				i--;
			}
		}else if(password=="admin"){
			cout<<"Username yang anda masukan salah!. Sisa percobaan anda adalah " << i << " kali"<<endl << endl;
			system ("PAUSE");
			system ("CLS");
			i--;
		}else{
			cout<<"username dan password anda salah!. Sisa percobaan anda adalah " << i << " kali"<<endl << endl;
			system ("PAUSE");
			system ("CLS");
			i--;
		}
	 }
	 if (i < 0) {
		cout << "Percobaan anda habis";
		return 0; }
	else if (i > 0) {
	do
	{
		cout << "\n-------- Menu ----------" << endl << endl;
		cout << "1. Reservasi " << endl;
		cout << "2. Check out " << endl;
		cout << "3. Kamar yang tersedia " << endl;
		cout << "4. Cari tamu " << endl;
		cout << "5. Daftar Tamu " << endl;
		cout << "6. Exit " << endl << endl;
		
		cout << "Pilih tindakan yang ingin dilakukan (1/2/3/4/5/6) : ";
		int tindakan;
		cin >> tindakan;
		
		if (tindakan==1) {
			system ("CLS");
			reservasi();
		}
			
		else if (tindakan==2) {
			system ("CLS");
			cout << "menu check out";
		}
		else if (tindakan==3) {
			system ("CLS");
			cout << "Kamar yang tersedia";
		}
		else if (tindakan==4) {
			system ("CLS");
			cout << "Cari tamu";
		}
		else if (tindakan==5) {
			system ("CLS");
			cout << "Daftar Tamu ";
		}
		else if (tindakan==6) {
			break;
		}
		else {
			cout << "Pilihan menu tidak ada";
		}
	cout << "\n Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang != 't');
 
  cout << "Terima kasih";
 
  cout << endl;
  return 0;
}
}
