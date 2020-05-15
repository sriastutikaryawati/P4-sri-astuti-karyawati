#include <stdio.h>
#include <conio.h>

main (){
printf ("nama : sri astuti karyawati\n");
printf ("nim : F1B019133\n ");
printf ("kelompok : 24\n");

	
int A [2][2];
int B [2][2];
int C [2][2];
int i, j;
printf ("Pengurangan matriks\n");
for (i = 1; i<=3; i++){
for (j = 1; j <=3; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &A[i][j]);
}
}
printf ("\n");
for (i = 1; i<=3; i++){
for (j = 1; j <=3; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &B[i][j]);
}
}
for (i = 1; i<=3; i++){
for (j = 1; j <=3; j++){
C [i][j]=A[i][j]-B[i][j];
printf ("%d ", C[i][j]);
}
printf ("\n");
}
getch();
}

