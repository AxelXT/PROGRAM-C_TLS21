#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	
	double jum_beli, bayar,diskon,jumlah[10], harga[10], sub_tot[10], total;
	string nama_barang[10];
	
	cout<<"TOKO ELEKTRONIK SOESIANTO"<<endl; 
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukkan Jumlah Jenis Barang Dibeli : "; 
	cin>>jum_beli; 
	
	for (int i = 0; i < jum_beli; i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<< i+1 << endl;
		cout<<endl;
		
		cout<<"Nama Barang          : ";
		cin>>nama_barang[i];
		
		cout<<"Jumlah               : ";
		cin>>jumlah[i];
		
		cout<<"Harga Perbarang      : ";
		cin>>harga[i];

		sub_tot[i]=jumlah[i]*harga[i];
		total+=sub_tot[i]; 
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA TOKO ELEKTRONIK SOESIANTO"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang   Jumlah     Harga      Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(10)<<nama_barang[i]<<setw(8)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
	}
	cout<<"---------------------------------------------------------"<<endl;

	
	if (total >= 1000000){
		diskon = 0.06 * total;
	}
    else if (total >= 500000){
		diskon = 0.04 * total;
	}
    else if (total >= 250000){
		diskon = 0.02 * total;
	}
    else {
		diskon = 0;
	}
	
	cout<<"Jumlah Bayar : Rp." << total <<endl;
	cout<<"Diskon       : Rp." << diskon << endl;
	cout<<"Total Bayar  : Rp." << total-diskon << endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar;
	cout<<"Kembali      : Rp." << (bayar-(total-diskon)) << endl;
	
    return 0;
}