/*
	Nama	: Muhamad Fahrul Azimi
	Kelas	: A
	NPM 	: 140810180027
	Tanggal : Senin, 9 Maret 2020
	Nama Program : Sequential Search
*/

#include <iostream>
using namespace std;

int main(){
    int n, cari, A[100], index, jwb;
	bool ketemu = false;
	cout << "\nMasukan banyak data =  "; cin >> n;
	cout << "\n-------------------------------------" <<endl;	  
	
	for(int i=0; i<n; i++){
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> A[i];
	}
	
	cout << "\nMasukan data yang akan dicari : "; cin >> cari;
	cout << "\n-------------------------------------" <<endl;
	  
	for(int i=0; i<n; i++){
	    if(A[i] == cari){
	 	    ketemu = true;
	        index = i;
	    	i = n;
	   }
	}
	if(ketemu == true){
	   cout << "Data telah ditemukan pada data ke-" << index+1;
	}
	else{
	   cout << "Maaf. Data tidak ditemukan!";
	}
	return 0;
}
