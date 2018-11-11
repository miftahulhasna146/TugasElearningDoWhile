#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main (){
	int a, n;
	float nilai, rata;
	cout<<"Masukkan bilangan = "; cin>>n;
	while (a<=n){
		nilai=nilai+a;
		a++;
	}
	cout<<"Nilai Total ="<<nilai<<endl;
	rata=nilai/n;
	cout<<"Rata-rata = "<<rata<<endl;
}
