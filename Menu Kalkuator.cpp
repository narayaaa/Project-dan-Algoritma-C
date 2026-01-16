#include<stdio.h>
void calculator(){
	printf("**** Menu Kalkulator ****\n");
	printf("1 = Penjumlahan\n");
	printf("2 = Pengurangan\n"); 
	printf("3 = Perkalian\n"); 
	printf("4 = Pembagian\n");
	printf("5 = Keluar\n");
}
int pertambahan (int a, int b){
	return  a + b;
}
void tampilkanHasil(int hasil){
    printf("Hasilnya adalah: %d\n", hasil);
}
int pengurangan(int c, int d){
	return c - d;
}
void tampilkanHasil1(int hasil1){
    printf("Hasilnya adalah: %d\n", hasil1);
}
int perkalian (int e, int f){
	return e * f;
}
void tampilkanHasil2(int hasil2){
    printf("Hasilnya adalah: %d\n", hasil2);
}
float pembagian (float g, float h){
	return g / h;
}
void tampilkanHasil3(float hasil3){
    printf("Hasilnya adalah: %.1f\n", hasil3);
}
int main(){
	calculator(); 
	int pilihan;
do{
	printf("*** Masukkan Pilihan Menu ***\n");
	scanf("%d", &pilihan);
if(pilihan == 1){
	printf("=== Menu pertambahan ===\n");
	int a, b, hasil;
	printf("Angka ke 1 =");
	scanf("%d", &a);
	printf("Angka ke 2 =");
	scanf("%d", &b);
	hasil = pertambahan (a, b);
	tampilkanHasil(hasil);
}else if (pilihan == 2){
	printf("=== Menu pengurangan ===\n");
	int c, d, hasil1;
	printf("Angka ke 1 =");
	scanf("%d", &c);
	printf("Angka ke 2 =");
	scanf("%d", &d);
	hasil1 = pengurangan (c, d);
	tampilkanHasil1(hasil1);
}else if(pilihan == 3){
	printf("=== Menu Perkalian ===\n");
	int e, f, hasil2;
	printf("Angka ke 1 =");
	scanf("%d", &e);
	printf("Angka ke 2 =");
	scanf("%d", &f);
	hasil2 = perkalian (e, f);
	tampilkanHasil2(hasil2);
}else if(pilihan == 4){
	printf("=== Menu Pembagian ===\n");
	float g, h, hasil3;
	printf("Angka ke 1 =");
	scanf("%f", &g);
	printf("Angka ke 2 =");
	do{
	scanf("%f", &h);
	if( h<=1){
	printf("Error Pembagian Nol Tidak Valid Silahkan Masukkan Angka Ulang\n");
	}
}while (h<=1);
	hasil3 = pembagian (g, h);
	tampilkanHasil3(hasil3);
}
}while(pilihan != 5);
	printf("Program Selesai\n");
	return 0;
}
