#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajar di prodi TI UMY" << endl;
		//throw 0.5; //melemparkan sebuah int maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;

	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;

	}
	catch (...) {
		//jika selain int maka block ini akan dieksekusi
		cout << "default Pengecualian dieksekusi" << endl;
	}
	return 0;
}