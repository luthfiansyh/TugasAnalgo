/*	Nama : M Luthfiansyah
	NPM	 : 140810170023
	Deskripsi : Tugas 2
*/
#include <iostream>
using namespace std;

main(){

int i, x[99],y,index,n;
bool found=false;
cout<<"Masukkan Jumlah Array : ";cin>>n;
i=1;
while (i<=n){
	cout<<"Bilangan ke - : ";cin>> x[i];
	i++;
}
i=1;
cout<<"Input Bilangan Yang Dicari : ";cin>>y;
	while(i<n && found==false)
	{
		if (x[i] == y)
		{
			found=true;
		}
		else
			i=i+1;
	}
if (found==true)
	idx=i;
else
	idx=0;
cout<<"Bilangan berada di index ke-"<<index;
}
