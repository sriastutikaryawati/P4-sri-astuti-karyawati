#include <iostream>
#include<conio.h>
using namespace std;
void login(){
	awal:
		string username,pass;
		cout<<"===SELAMAT DATANG==="<<endl;
		cout<<"MASUKKAN USERNAME DAN PASSWORD UNTUK LOGIN"<<endl;
		cout<<"masukkan username: ";cin>>username;
		cout<<"masukkan password: ";cin>>pass;
		if(username=="sri"&&pass=="133"){
		system("cls");
			cout<<"|===============================|"<<endl;
			cout<<"| SELAMAT DATANG MAHASISWA |"<<endl;
			cout<<"|===============================|"<<endl;
			cout<<"| DATA MAHASISWA |"<<endl;
			cout<<"| sri astuti karyawati |"<<endl;
			cout<<"| F1B019133 |"<<endl;
			cout<<"| kelompok 24 |"<<endl;
		}
		else{
			cout<<"mohon maaf username dan password yang anda masukkan salah"<<endl;
			goto awal;
		}
	}
int main(){
	login();
	struct data{
		char nama[50],nim[50];
		int kehadiran,tugas,kuis,uts,uas;
		float nilai;
	};struct data mahasiswa[20];
	cout<<"============================================="<<endl;
	cout<<"PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA"<<endl;
	cout<<"MATA KULIAH BAHASA INGGRIS AKADEMIK"<<endl;
	cout<<"============================================="<<endl;
	cout<<endl;
	int o,p;
	cout<<"masukkan jumlah mahasiswa: ";cin>>p;
	for(o=0;o<p;o++){
		cout<<"nama mahasiswa: ";cin>>mahasiswa[o].nama;
		cout<<"nim mahasiswa: ";cin>>mahasiswa[o].nim;
		cout<<"nilai kehadiran mahasiswa: ";cin>>mahasiswa[o].kehadiran;
		cout<<"nilai tugas mahasiswa: ";cin>>mahasiswa[o].tugas;
		cout<<"nilai kuis mahasiswa: ";cin>>mahasiswa[o].kuis;
		cout<<"nilai uts mahasiswa: ";cin>>mahasiswa[o].uts;
		cout<<"nilai uas mahasiswa: ";cin>>mahasiswa[o].uas;
		cout<<"\n";
	}
	cout<<"HASIL NILAI MAHASISWA"<<endl;
	cout<<"========================================================================================================================"<<endl;
	cout<<"nama"<<"\t"<<"nim"<<"\t\t"<<"kehadiran"<<"\t"<<"tugas"<<"\t"<<"kuis"<<"\t"<<"uts"<<"\t"<<"uas"<<"\t"<<"nilai akhir"<<endl;
	cout<<"========================================================================================================================"<<endl;
	for(o=0;o<p;o++){
		mahasiswa[o].nilai=(mahasiswa[o].kehadiran*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100);
		cout<<mahasiswa[o].nama<<"\t"<<mahasiswa[o].nim<<"\t\t"<<mahasiswa[o].kehadiran<<"\t\t"<<mahasiswa[o].tugas<<"\t"<<mahasiswa[o].kuis<<"\t"<<mahasiswa[o].uts<<"\t"<<mahasiswa[o].uas<<"\t"<<mahasiswa[o].nilai<<"\t";
		mahasiswa[o].nilai=(mahasiswa[o].kehadiran*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100);
		if(mahasiswa[o].nilai>=85)
		cout<<"(A)";
		if(mahasiswa[o].nilai>=75)
		cout<<"(B)";
		if(mahasiswa[o].nilai>=55)
		cout<<"(C)";
		if(mahasiswa[o].nilai>=40)
		cout<<"(D)";
		if(mahasiswa[o].nilai<=40)
		cout<<"(E)";
		cout<<endl;
	}
	cout<<endl;
}
