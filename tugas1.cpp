#include <iostream>
using namespace std;

struct Tanggal{
	int hari;
	string bulan;
	int tahun;
};

struct Alamat{
	string jalan;
	string kota;
	
};

struct Karyawan{
	string nama;
	int gaji;
	struct Tanggal tgl;
	struct Alamat almt;
};
int main(){
	Karyawan m1;
	
	m1.nama = "mikail";
	m1.gaji = 850000;
	m1.tgl.hari = 04;
	m1.tgl.bulan = "Februari";
	m1.tgl.hari = 02;
	m1.almt.jalan = "Jl. M. Toha";
	m1.almt.kota = "Cianjur";

cout<<"nama		:"<<m1.nama<<endl;
cout<<"Tanggal masuk	:"<<m1.tgl.hari<<" "<<m1.tgl.bulan<<" "<<m1.tgl.tahun<<endl;
cout<<"Alamat		:"<<m1.almt.jalan<<"."<<m1.almt.kota<<endl;
cout<<"Gaji		:"<<m1.gaji<<endl;
	
}
