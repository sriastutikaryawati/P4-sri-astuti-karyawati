#include <stdio.h>
#include <conio.h>

main (){
printf ("nama : sri astuti karyawati\n");
printf ("nim : F1B019133\n ");
printf ("kelompok : 24\n");

	
int matriks_A [2][2];
int matriks_B[2][2];
int matriks_C[2][2];
int i, x;
printf ("Penjumlahan NIM\n");
for (i = 1; i<=3; i++){
for (x= 1; x <=3; x++){
printf ("Masukkan nilai index %d, %d = ", i, x);
scanf ("%d", &matriks_A[i][x]);
}
}
printf ("\n");
for (i = 1; i<=3; i++){
for (x = 1; x <=3; x++){
printf ("Masukkan nilai index %d, %d = ", i, x);
scanf ("%d", &matriks_B[i][x]);
}
}
for (i = 1; i<=3; i++){
for (x = 1; x <=3; x++){
matriks_C [i][x]=matriks_A[i][x]+matriks_B[i][x];
printf ("%d ", matriks_C[i][x]);
}
printf ("\n");
}
getch();
}
