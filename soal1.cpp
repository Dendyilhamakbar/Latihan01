#include <iostream>

using namespace std;

int main (){
	int x,y,z;
	cout << "masukkan nilai X \t \t = ";cin>>x;
	cout << "masukkan nilai Y \t \t = ";cin>>y;
	if (x < y){
		z=y-x;
	}
	else {
		z=x-y;
	}
	cout << "Hasil Pengurangan \t = "<<z;
}
