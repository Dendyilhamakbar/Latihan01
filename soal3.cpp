#include <iostream>

using namespace std;

int main (){
	double jk,lb,jl,jtot;
	long gtot,gaber;
	
	cout <<"Program Perhitungan Gajih" <<endl;
	cout <<"----------------------------------" <<endl;
	cout <<"Lama Jam Kerja perminggu = ";cin>>jk;
	cout <<"----------------------------------"<<endl;
	if (jk>40 ){
		cout << "Gajih Pokok \t \t = Rp 2.000.000" <<endl;
		cout <<"Jam Kerja \t = 40 Jam " <<endl;
		lb=jk*40;
		cout <<"Lembur \t \t \t = "<<lb<<" Jam" <<endl;
		jl=lb*1.5;
		jtot=40+jl;
		cout <<"Total jam kerja \t \t =" <<jtot<<" jam"<<endl;
		gtot=2000000+(jl*100000);
		cout <<"Total Gajih	\t \t = "<<"Rp "<<gtot<<endl;
		cout <<"Potongan \t \t = 15 %"<<endl;
		gaber=gtot*(0.15*gtot);
		cout <<"Gaji bersih \t \t = " <<"Rp "<<gaber;
	}
	else if (jk<=40){
		cout <<"Gajih Pokok \t \t = Rp. 2.000.000" <<endl;
		cout <<"Jam Kerja \t = 40 Jam "<<endl;
		lb=0;
		cout <<"Lembur \t \t \t = " <<lb<< " Jam"<<endl;
		jl=lb*1.5;
		jtot=40+jl;
		cout <<"Total Jam Kerja \t \t = "<<jtot<<" jam"<<endl;
		gtot=2000000+(jl*100000);
		cout <<"Total Gajih \t \t = "<<"Rp"<<gtot<<endl;
		cout <<"Potongan \t \t =15%"<<endl;
		gaber=gtot*(0.15*gtot);
		cout <<"Gaji bersih \t \t = "<<"Rp"<<gaber;
	}
	return 0;
}
