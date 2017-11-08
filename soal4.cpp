#include <iostream>

using namespace std;

int main (){
	int ta;
	
	cout <<"Positif Negatif	Nol"<<endl;
	cout <<"-------------------"<<endl;
	cout <<"Masukkan Angka = ";cin>>ta;
	cout <<"-------------------"<<endl;
	if (ta>0){
		cout <<"Angka yang anda masukkan positif";
	}
	else if (ta<0){
		cout <<"Angka yang anda masukkan negatif";
	}
	else if (ta=0){
		cout <<"Angka yang anda masukkan Nol";
	}
	else {
		cout <<"Angka yang anda masukkan pecahan";
	}
}
