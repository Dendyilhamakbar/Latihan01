#include <iostream>

using namespace std;

int main ()
{
	float berat,kurus,normal,kegemukkan;
	int tinggi;
	
	cout << "Silahkan masukkan tinggi badan anda\n" <<endl;
	cin >> tinggi;
	cout << "Silahkan masukkan berat badan anda\n" <<endl;
	cin >> berat;
	
	if (berat < tinggi/2.5)
	cout <<"Hasil : Kurus" << endl;
	else if (tinggi/2.5 <= berat <= tinggi/2.3)
	cout << "Hasil : Normal" <<endl;
	else if (tinggi/2.3 <berat)
	cout <<"Hasil : Kegemukkan" <<endl;
	
	return 0;
}
