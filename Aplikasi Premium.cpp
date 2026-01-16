#include<stdio.h>
#include<string.h>
int main(){
	int pilihan;
	int member, nomi, kali;
	char kata[5];
	int harga;
	float total;
	char kataku[5];

	
	printf("pilih menu premium\n");
	printf("1. Netflix 1 bulan= Rp. 50.000\n");
	printf("2. Spotify 1 bulan= Rp. 55.000\n");
	printf("3. Canva 1 bulan= Rp.30.000\n");
	printf("Masukkan pilihan\n");
	scanf("%d", &pilihan);
	
	switch(pilihan){
		case 1 :
		harga = 50000;
		printf("anda yakin beli netflix 1 bulan ?\n");
		scanf("%s", &kata);
		if(strcmpi(kata, "Ya") == 0){
			printf("Baik! apakah anda ingin menambahkan member?\n");
			scanf("%s", &kataku);
			if(strcmpi(kataku, "Ya") == 0){
				printf("berapa orang?");
				scanf("%d", &member);
				nomi = 5000;
				kali = member * 5000;
				total = harga + kali;
				printf("Maka total anda adalah %.3f", total / 1000);
			}
			else if(strcmpi(kataku, "tidak") == 0){
			printf("Baik, maka harga anda harga normal!\n");
            }
            else {
				printf("input invalid! Transaksi anda otomatis tercancel");
			}
		}
		else if(strcmpi(kata, "tidak") == 0){
			printf("Baik, anda telah membatalkan pembelian!");
            }
        else {
				printf("input invalid! Transaksi anda otomatis tercancel");
			}
		break;
		
		case 2 :
		harga = 55000;
		printf("anda yakin beli spotify 1 bulan ?\n");
		scanf("%s", &kata);
		if(strcmpi(kata, "Ya") == 0){
			printf("Baik! apakah anda ingin menambahkan member?\n");
			scanf("%s", &kataku);
			if(strcmpi(kataku, "Ya") == 0){
				printf("berapa orang?");
				scanf("%d", &member);
				nomi = 5000;
				kali = member * 5000;
				total = harga + kali;
				printf("Maka total anda adalah %.3f", total / 1000);
			}
			else if(strcmpi(kataku, "Tidak") == 0){
				printf("Baik, harga anda harga normal !\n");
			}
			else {
				printf("input invalid! Transaksi anda otomatis tercancel");
			}
		}
		else if(strcmpi(kata, "tidak") == 0){
			printf("Baik, anda telah membatalkan pembelian!");
            }
        else {
				printf("input invalid! Transaksi anda otomatis tercancel");
			}
		break;
		
		case 3 :
		harga = 30000;
		printf("anda yakin beli Canva 1 bulan ?\n");
		scanf("%s", &kata);
		if(strcmpi(kata, "Ya") == 0){
			printf("Baik! apakah anda ingin menambahkan member?\n");
			scanf("%s", &kataku);
			if(strcmpi(kataku, "Ya") == 0){
				printf("berapa orang?\n");
				scanf("%d", &member);
				nomi = 5000;
				kali = member * 5000;
				total = harga + kali;
				printf("Maka total anda adalah %.3f", total / 1000);
			}
			else if(strcmpi(kataku, "Tidak") == 0){
				printf("Baik harga anda harga normal!");
			}
			else {
				printf("input invalid! Transaksi anda otomatis tercancel");
			}
		}
		else if(strcmpi(kata, "tidak") == 0){
			printf("Baik, anda telah membatalkan pembelian!");
            }
        else {
				printf("input invalid! Transaksi anda otomatis tercancel");
			}
		default :
			printf("Paket tidak ditemukan, Tolong masukkan ulang!");
} 
    return 0;
}

