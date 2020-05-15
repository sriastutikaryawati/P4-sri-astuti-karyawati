#include <stdio.h>
#include <conio.h>

main (){
   printf ("nama : sri astuti karyawati\n");
   printf ("nim : F1B019133\n ");
   printf ("kelompok : 24\n");
	
int A [2][2];
int B [2][2];
int C [2][2];
int m,n;
printf ("PERKALIAN matriks\n");
for (m =1; m<=3; m++){
for (n = 1; n<=3; n++){
printf ("Masukkan nilai index %d, %d = ", m,n);
scanf ("%d", &A[m][n]);
}
}
printf ("\n");
for (m = 1; m<=3; m++){
for (n = 1; n <=3; n++){
printf ("Masukkan nilai index %d, %d = ", m,n);
scanf ("%d", &B[m][n]);
}
}
for (m = 1; m<=3; m++){
for (n = 1; n <=3; n++){
C [m][n]=A[m][0]*B[0][n]+A[m][1]*B[1][n];
printf ("%d ", C[m][n]);
}
printf ("\n");
}
getch();
}
