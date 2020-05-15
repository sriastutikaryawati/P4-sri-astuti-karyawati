#include<iostream>
#include<conio.h>
using namespace std;

int main(){

cout<<"nama :sri astuti karyawati\n";
	cout<<"nim :133\n";
	cout<<"kelompok :24\n"<<endl;
int A[10][10], B[10][10], C[10][10];
int cc,i,j,k;

cout<< "\nPengurangan 2 Matriks Ordo 2x2 \n\n";
cout<< "\nelemen matriks A baris ke-"<<endl; for(i=1; i<3; i++)
{ for(j=1; j<=3;j++)
{ cout<< "elemen matriks A baris ke-"<<i<<"kolom ke-"<<j<<": ";
cin>>A[i][j];
}
}
cout<< "\nelemen matriks B \n"<<endl; for(i=1; i<3; i++)
{
for(j=1;j<=3;j++)
{
cout<< "elemen matriks B baris ke-"<<i<<"kolom ke-"<<j<<" : ";
cin>>B[i][j];
}
}
cout<< endl;
for(i=1; i<=3; i++)
{
for(j=1; j<=3; j++)
{ C[i][j]=0;
for (k=1;k<=3;k++){

cc=A[i][k]-B[k][j];
C[i][j]=C[i][j]+cc;
}
}
}
cout<< "\nelemen matriks c[hasil]\n";
for(i=1; i<=3; i++)
{
for(j=1; j<=3; j++){
cout<< "    "<<C[i][j];
}
cout<<endl;
}
getch();
}
