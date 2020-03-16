/*
	Nama	: Muhamad Fahrul Azimi
	Kelas	: A
	NPM 	: 140810180027
	Tanggal : Senin, 9 Maret 2020
	Nama Program : Insertion
*/

#include <iostream>
using namespace std;

int data[100],data2[100],n;

void insertion_sort(){
	int temp,i,j;
	for(i=1;i<=n;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}

int main(){
	cout << "Masukkan Jumlah Data : "; cin >> n;
	cout <<endl;
	cout << "\n----------------------------------" <<endl;
	
	for(int i=1; i<=n; i++){
	  cout << "Masukkan data ke-" << i << " : ";
	  cin >> data[i];
	  data2[i]=data[i];
	}
	
	cout << "\n----------------------------------" <<endl;
	insertion_sort();
	cout << "\nData Setelah di Sort : " <<endl;
	
	for(int i=1; i<=n; i++){
	  cout << data[i] << " ";
	}
	return 0;
}
