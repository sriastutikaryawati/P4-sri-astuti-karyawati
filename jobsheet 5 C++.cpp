#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

main()
{
	cout<<"nama :sri astuti karyawati\n";
	cout<<"nim :133\n";
	cout<<"kelompok :24\n"<<endl;
int A[2][2], B[2][2], C[2][2],m,n;
for(m=1; m<3; m++)
{ for(n=1; n<=3;n++)
{ 
cout<< "\nmasukkan nilai matriks A("<<m<<","<<n<<") :";
cin>>A[m][n];
}
}
for(m=1; m<3; m++)
{ for(n=1; n<=3;n++)
{ cout<< "\nmasukkan nilai matriks B("<<n<<","<<n<<") :";
cin>>B[m][n];
}
}
cout<< "c:\n"<<endl; for(m=1; m<3; m++)
{
for(n=1;n<=3;n++)
{
cout<< setw(3)<<(A[m][0]*B[0][n]+A[m][1]*B[1][n]);
}
cout<<"\n";
system("pause");
return EXIT_SUCCESS;
}

}
