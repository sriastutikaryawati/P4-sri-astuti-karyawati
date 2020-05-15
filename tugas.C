#include <stdio.h>

using namespace std;
void login(){
	awal:
		char username[50];
		int pass;
		printf("===SELAMAT DATANG===\n");
		printf("MASUKKAN USERNAME DAN PASSWORD UNTUK LOGIN\n");
		printf("masukkan username: ");
		scanf("%s",&username);
		printf("masukkan password: ");
		scanf("%s",&pass);
		if(username||pass==133){
			printf("\n\n");
			printf("|===============================|\n");
			printf("| SELAMAT DATANG MAHASISWA |\n");
			printf("|===============================|\n");
			printf("| DATA MAHASISWA |\n");
			printf("| sri astuti karyawati |\n");
			printf("| F1B019133 |\n");
			printf("| kelompok 24 |\n");
		}
		else{
			printf("mohon maaf username dan password yang anda masukkan salah\n");
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
	printf("=============================================\n");
	printf("PROGRAM MENGHITUNG NILAI AKHIR MAHASISWA\n");
	printf("MATA KULIAH BAHASA INGGRIS AKADEMIK\n");
    printf("=============================================\n");
	printf("\n");
	int o,p;
	printf("masukkan jumlah mahasiswa: ");
	scanf("%d",&p);
	for(o=0;o<p;o++){
		printf("nama mahasiswa: ");
		scanf("%s",&mahasiswa[o].nama);
		printf("nim mahasiswa: ");
		scanf("%s",&mahasiswa[o].nim);
		printf("nilai kehadiran mahasiswa: ");
		scanf("%d",&mahasiswa[o].kehadiran);
		printf("nilai tugas mahasiswa: ");
		scanf("%d",&mahasiswa[o].tugas);
		printf("nilai kuis mahasiswa: ");
		scanf("%d",&mahasiswa[o].kuis);
		printf("nilai uts mahasiswa: ");
		scanf("%d",&mahasiswa[o].uts);
		printf("nilai uas mahasiswa: ");
		scanf("%d",&mahasiswa[o].uas);
		printf("\n");
	}
	printf("HASIL NILAI MAHASISWA\n");
	printf("========================================================================================================================\n");
	printf("nama""\t\t""nim""\t""kehadiran""\t""tugas""\t""kuis""\t""uts""\t""uas""\t""nilai akhir\n");
	printf("========================================================================================================================\n");
	for(o=0;o<p;o++){
		mahasiswa[o].nilai=(mahasiswa[o].kehadiran*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100);
		printf("%s\t\t%s\t%d\t\t%d\t%d\t%d\t%d\t",mahasiswa[o].nama,mahasiswa[o].nim,mahasiswa[o].kehadiran,mahasiswa[o].tugas,mahasiswa[o].kuis,mahasiswa[o].uts,mahasiswa[o].uas);
		mahasiswa[o].nilai=(mahasiswa[o].kehadiran*10/100)+(mahasiswa[o].tugas*15/100)+(mahasiswa[o].kuis*15/100)+(mahasiswa[o].uts*40/100)+(mahasiswa[o].uas*40/100);
		if(mahasiswa[o].nilai>=85)
		printf("(A)");
		else if(mahasiswa[o].nilai>=75)
		printf("(B)");
		else if(mahasiswa[o].nilai>=55)
		printf("(C)");
		else if(mahasiswa[o].nilai>=45)
		printf("(D)");
		else if(mahasiswa[o].nilai<45)
		printf("(E)");
		printf("\n");
	}
	printf("\n");
}
