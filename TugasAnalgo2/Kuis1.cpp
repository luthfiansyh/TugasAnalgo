#include<iostream>
#include<stdio.h>
using namespace std;

void mergesort(int data[], int temp[], int kiri, int tengah, int kanan){
	int n1,n2,tmp,banyak;
	n1=tengah-kanan+1; //bagian kiri
	n2=tengah-kiri; //bagian kanan
	while((kiri<=n1)&&(tengah<=n2)){
		if(data[kiri]<=data[tengah]){
			temp[tmp]= data[kiri];
			tmp=tmp+1;
			kiri=kiri+1;
		}
		else{
			temp[tmp] = data[tengah];
            tmp = tmp+1;
            tengah = tengah+1;
		}
		//Salin bagiankiri
		while(kiri<=n1){
			temp[tmp] = data[kiri];
        	kiri = kiri+1;
        	tmp = tmp+1;
		}
		while (tengah <= kanan){
           temp[tmp] = data[tengah];
           tengah = tengah+1;
           tmp = tmp+1;
    	}
        //Salin ke array asal
         for(int i=0;i<banyak;i++){
          data[kanan] = temp[kanan];
          kanan = kanan-1;
          }
	}
}
void cetakmerge(int data[], int n) { 
    int i; 
    for (i=0; i < n; i++) 
        cout<<" "<<data[i]<<endl; 
	}	 
int main(){
	int jumlah;
	cout<<"Masukkan Jumlah Data : ";cin>>jumlah;
	for(int i;i<=jumlah;i++){
		int angka;
		cout<<"Masukkan angka : ";cin>>angka;
	}
	int data[jumlah];
	cetakmerge(data,jumlah);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
           int bagiankiri, banyak, tmp;
 
           bagiankiri = (tengah-1);
           tmp = kiri;
           banyak = ((kanan-kiri)+1);
 
           while((kiri <= bagiankiri) && (tengah <= kanan)){
                if(data[kiri] <= data[tengah]){
                temp[tmp] = data[kiri];
                tmp = tmp+1;
                kiri = kiri+1;
                }
                else{
                temp[tmp] = data[tengah];
                tmp = tmp+1;
                tengah = tengah+1;
                }
           }
           //kopi bagian kiri
           while(kiri <= bagiankiri){
           temp[tmp] = data[kiri];
           kiri = kiri+1;
           tmp = tmp+1;
           }
           //kopi bagian kanan
           while (tengah <= kanan){
           temp[tmp] = data[tengah];
           tengah = tengah+1;
           tmp = tmp+1;
           }
           //kopi ke array asal
         for(int i=0;i<banyak;i++){
          data[kanan] = temp[kanan];
          kanan = kanan-1;
          }
      }
      
void printmerge(int data[], int n) 
{ 
    int i; 
    for (i=0; i < n; i++) 
        cout<<" "<<data[i]<<endl; 
} 
*/
  
