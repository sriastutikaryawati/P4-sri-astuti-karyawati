#include <stdio.h>
#include <conio.h>

main (){
	printf ("nama : sri astuti karyawati\n");
printf ("nim : F1B019133\n ");
printf ("kelompok :24\n");

int nim1 [10][10];
int i, j, m, n;
printf ("MATRIX TRANSPOSE\n");
printf ("Masukkan jumlahbaris = ");
scanf ("%i", &m);
printf ("Masukkan jumlahkolom = ");
scanf ("%i", &n);
printf ("MATRIX \n");
for (i = 0; i< m; i++){
for (j = 0; j < n; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &nim1[i][j]);
}
}
for (i = 0; i< m; i++){
for (j = 0; j < n; j++){
printf ("%d ",nim1[i][j]);
}
printf ("\n");
}
printf ("TRANSPOSE MATRIX  \n");
for (i = 0; i< n; i++){
for (j = 0; j < m; j++){
printf ("%d ", nim1[j][i]);
}
printf ("\n");
}
getch();
}
