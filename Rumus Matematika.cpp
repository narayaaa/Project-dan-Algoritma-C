#include <stdio.h>
int main(){
	int opsi, pilihan, angka, hasil;
	float sisi, alas, tinggi;
	
	printf("=== Rumus Bangun Datar ===\n");
	printf("1.Segitiga\n");
	printf("2.Persegi\n");
	printf("3.Persegi Panjang\n");
	printf("pilih salah satu bangun datar\n");
	scanf("%d", &opsi);
	
	if(opsi == 1){
    	printf("Pilihan rumus\n");
	    printf("1.Keliling\n");
	    printf("2.Luas\n");
	    printf("Masukkan pilihan\n");
	    scanf("%d",&pilihan);
	    if(pilihan == 1){
	        printf("masukkan sisi\n");
	        scanf("%f", &sisi);
	        hasil = sisi * sisi * sisi;
	        printf("hasilnya adalah = %d", hasil);
	    }
	    if(pilihan == 2){
	    	angka = 2;
	    	printf("Masukkan nilai alas\n");
	    	scanf("%f", &alas);
	    	printf("Masukkan nilai tinggi\n");
	    	scanf("%f", &tinggi);
	    	hasil = alas * tinggi / angka;
	    	printf("hasilnya adalah = %d", hasil);
		}
	    
	}
	
	return 0;
	
}
