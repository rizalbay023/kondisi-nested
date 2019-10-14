#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	do
	{
		int pilihan, pilih;
		system("CLS");
		cout << "UTS Pemrograman Dasar" << endl << endl;
		cout << "Pilih: " << endl;
		cout << "1. Kalkulator \n2. Password \n3. Desimal Ke Biner \n4. Desimal Ke Heksadesimal \n5. Pembayaran Uang Kuliah" << endl << endl;
		cout << "Masukkan Pilihan: " << endl;
		cin >> pilihan;
		if (pilihan == 1) 
		{
			long double variabela, variabelb;
			long long int moda, modb, pilihan, pilihan2;
			system("CLS");
			cout << "Kakulator Dasar 2 Variabel" << endl << endl;
			system("pause");
			system("CLS");
			cout << "Pilih Pengoperasian" << endl << endl;
			cout << "1. Penjumlahan (+) \n2. Pengurangan (-) \n3. Perkalian (x) \n4. Pembagian (/) \n5. Modulus (%) \n6. Keluar Kalkulator \n" << endl;
			cout << "Pilih: ";
			cin >> pilihan;
			if (pilihan == 1)
			{
				system("CLS");
				cout << "Anda Memilih Penjumlahan" << endl << endl;
				cout << "Masukkan Angka Pertama: ";
				cin >> variabela;
				cout << "Masukkan Angka Kedua: ";
				cin >> variabelb;
				long double hasilpenjumlahan = variabela + variabelb;
				cout << endl;
				cout << variabela << " + " << variabelb << " = " << hasilpenjumlahan;
				cout << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Kalkulator?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					break;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if (pilihan == 2)
			{
				system("CLS");
				cout << "Anda Memilih Pengurangan" << endl << endl;
				cout << "Masukkan Angka Pertama: ";
				cin >> variabela;
				cout << "Masukkan Angka Kedua: ";
				cin >> variabelb;
				long double hasilpengurangan = variabela - variabelb;
				cout << endl;
				cout << variabela << " - " << variabelb << " = " << hasilpengurangan;
				cout << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Kalkulator?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					break;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if (pilihan == 3)
			{
				system("CLS");
				cout << "Anda Memilih Perkalian" << endl << endl;
				cout << "Masukkan Angka Pertama: ";
				cin >> variabela;
				cout << "Masukkan Angka Kedua: ";
				cin >> variabelb;
				long double hasilperkalian = variabela * variabelb;
				cout << endl;
				cout << variabela << " x " << variabelb << " = " << hasilperkalian;
				cout << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Kalkulator?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					break;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if (pilihan == 4)
			{
				system("CLS");
				cout << "Anda Memilih Pembagian" << endl << endl;
				cout << "Masukkan Angka Pertama: ";
				cin >> variabela;
				cout << "Masukkan Angka Kedua: ";
				cin >> variabelb;
				long double hasilpembagian = variabela / variabelb;
				cout << endl;
				cout << variabela << " / " << variabelb << " = " << hasilpembagian;
				cout << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Kalkulator?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					break;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else if (pilihan == 5)
			{
				system("CLS");
				cout << "Anda Memilih Modulus" << endl << endl;
				cout << "Masukkan Angka Pertama: ";
				cin >> moda;
				cout << "Masukkan Angka Kedua: ";
				cin >> modb;
				int hasilmod = moda % modb;
				cout << endl;
				cout << moda << " % " << modb << " = " << hasilmod;
				cout << endl << endl;
				system("pause");
				system("CLS");
				cout << "Keluar Kalkulator?" << endl;
				cout << "1. Ya \n2. Tidak" << endl << endl;
				cout << "Pilih: ";
				cin >> pilihan2;
				cout << endl;
				if (pilihan2 == 1)
				{
					break;
				}
				else if (pilihan2 == 2)
				{

				}
			}
			else
			{
				break;
			}
		}
		else if (pilihan == 2)
		{
		string username, password;

		cout << "=== Welcome ===" << endl;
		cout << "Username: ";
		cin >> username;
		cout << "Password: ";
		cin >> password;

		if (username == "petanikode") {
			if (password == "kopi") {
				cout << "Selamat datang bos!" << endl;
			}
			else {
				cout << "Password salah, coba lagi!" << endl;
			}
		}
		else {
			cout << "Anda tidak terdaftar" << endl;
		}

		}
		else if (pilihan == 3)
		{
			int des, i, pilihan2;
			string simpan;
			system("CLS");
			cout << "Anda Memilih Desimal ke Biner" << endl << endl;
			cout << "Masukkan Angka: ";
			cin >> des;
			if (des == 0)
			{
				cout << "0";
			}
			else if (des == 1)
			{
				cout << "1";
			}
			else
			{
				for (int i = 0; i != des; des /= 2)
				{
					int hasil = des % 2;
					string convert = to_string(hasil);
					simpan.append(convert);
				}
				//0101
				int panjang = simpan.length(); //4
				for (int i = panjang; i != 0; i--) // i = 4
				{
					cout << simpan[i - 1];
				}
			}
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Program?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}

		}
		else if (pilihan == 4)
		{
			int des, pilihan2;
			string simpan;
			system("CLS");
			cout << "Anda Memilih Desimal ke Heksadesimal" << endl << endl;
			cout << "Masukkan Angka: ";
			cin >> des;
			const int desTetap = des;
			for (int i = 0; des != i; des /= 16)
			{
				int bil = des % 16;
				string convert;
				switch (bil)
				{
				case 10:
					convert = "A";
					break;
				case 11:
					convert = "B";
					break;
				case 12:
					convert = "C";
					break;
				case 13:
					convert = "D";
					break;
				case 14:
					convert = "E";
					break;
				case 15:
					convert = "F";
					break;
				default:
					convert = to_string(bil);
				}

				simpan.append(convert);
			}
			int length = simpan.length();
			if (desTetap == 0) {
				cout << "0";
			}
			for (int i = length; i != 0; i--)
			{
				cout << simpan[i - 1];
			}
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Program?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}

		}
		else if (pilihan == 5) 
		{
		int  j, bayar; string i;
		cout <<"Program pembayaran uang kuliah dan pembangunan pendaftaran STMIK AMIK\n\n";
		cout << "1.Regular\n2.Non Reg Malam\n3.Non Reg Sabtu Minggu";
		cout<< "Input Kelas Anda ! :";
		cin >> j;
		cout << "Input Prodi Anda! (TI/MI) :";
		cin >> i;
		if (j == 1)
		{
			if (i == "TI" || i == "ti")
				bayar = 25;
			else if (i == "MI" || i == "mi")
				bayar = 15;
		}
		else if (j == 2)
		{
			if (i == "TI" || i == "ti")
				bayar = 30;
			else if (i == "MI" || i == "mi")
				bayar = 20;
		}
		else if (j == 3)
		{
			if (i == "TI" || i == "ti")
				bayar = 30;
			else if (i == "MI" || i == "mi")
				bayar = 20;
		}
		cout << "\nHarga Pembayaran Uang Kuliah Anda Rp.%d00000,-" << bayar;
		}

	} while (true);
}