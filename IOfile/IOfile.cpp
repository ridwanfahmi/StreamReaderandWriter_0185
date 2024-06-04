#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan nama file : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk kesebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);


	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true)
	{
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;

	//menunjuk ke sebuah file 
	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika ada file maka
	if (infile.is_open()) {
		while (getline(infile, baris))
		{
			cout << baris << '\n';
		}
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else
		cout << "Unable to open file";
	return 0;
}