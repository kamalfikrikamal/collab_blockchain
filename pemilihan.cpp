#include<iostream>
using namespace std;
int main(){
	int a;
	char b;
	cout<<"Masukkan pilihan anda: ";
	cin>> a;
	cout <<"Apakah benar pilihan anda nomor " << a << " ? y/n";
	cout <<" \n";
	cin >> b;
	while(b == 'n'){
		cout << "Masukkan pilihan anda: ";
		cin >> a;
		cout << "Apakah benar pilihan anda nomor " << a << " ? y/n";
		cout << "\n";
		cin >> b;
	}
	cout << "Terima kasih telah memilih";
}
