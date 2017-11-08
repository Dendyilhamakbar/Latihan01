#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int x,y,z;
	char r;
	
	cout <<"Program Hitung Luas"<<endl;
	cout <<"---------------------"<<endl;
	cout <<"P = Persegi Panjang" <<endl;
	cout <<"S = Segitiga"<<endl;
	cout <<"Ketikkan huruf [P/S] = ";cin>>r;
	
	if (r=='P'||r=='p'){
		cout << "Menghitung Luas Persegi Panjang "<<endl;
		cout <<"\n";
		cout <<"Masukkan nilai Panjang  \t = ";cin>>x;
		cout <<"Masukkan nilai Lebar \t = ";cin>>y;
		z=x*y;
		cout<<"Luas Persegi panjang \t = " <<z<<" cm";
	}
	else if (r=='S'|| r=='s'){
	cout << "Menghitung Luas Segitiga"<<endl;
	cout <<"\n";
	cout <<"Masukkan nilai atas \t = ";cin>>x;
	cout <<"Masukkan nilai bawah \t = ";cin>>y;
	z=0.5*x*y;
	cout <<"Luas Segitiga \t \t = " <<z<<" cm";
	}
	else {
		cout <<"Inputan anda tidak valid !!!!!! ";
	}
	return 0;
}



