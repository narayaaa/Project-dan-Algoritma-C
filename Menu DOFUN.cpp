#include<stdio.h>
int main(){
	int opsi, anak, dewasa, senior, pilihan;
	int kali1, kali2, kali3, hargaanak, hargadewasa, hargasenior;
	float total ;
	printf("Selamat Datang Di DOFUN\n");
	printf("1. Check Promo\n");
	printf("2. Wahana Permainan\n");
	printf("3. Informasi Tentang E-Ticket\n");
	printf("4. Peraturan Pembelian E-Ticket\n");
	printf("5. Beli E-Ticket\n");
	printf("6. Exit\n");
	printf ("Pilih Opsi!\n");
	scanf ("%d", &opsi);
	switch(opsi){
	case 1 :
	printf ("||		Promo Hari Ini 		||\n");
	printf("1. Diskon 20%% untuk pembelian ticket anak-anak\n");
	printf("2. Diskon 10%% untuk pembelian ticket dewasa\n");
	printf("3. Diskon 30%% untuk pembelian ticket senior\n");
	break ;
	case 2 :
	printf(" = Jenis Wahana Permainan =\n");
	printf("1. Roller Coster\n");
	printf("2. Ferris Wheel\n");
	printf("3. Bumper Cars\n");
	printf("4. Merry-Go-Round\n");
	printf("5. Water Slide\n");
	printf("6. Haunted House\n");
	printf("7. Swing Ride\n");
	printf("8. Drop Tower\n");
	printf("9. Log Flume\n");
	printf("10. Pirate Ship\n");
	break ;
	case 3 :
	printf("	========Informasi E-Ticket========\n");
	printf("1. Anda dapat menukarkan E-Ticket ini di loket masuk DOFUN\n");
	printf("2. E-Ticket ini hanya berlaku untuk 1 kali masuk\n");
	printf("3. E-Ticket ini hanya berlaku untuk maksimal 7 hari setelah waktu pembelian\n");
	printf("===============================================================================");
	break ;
	case 4 :
	printf("=====Peraturan Pembelian E-Ticket=====\n");
	printf("1. Kategori anak-anak jika dibawah 12 tahun\n");
	printf("2. Kategori dewasa jika diatas 12 tahun\n");
	printf("3. Kategori Senior jika dibawah 60 tahun");
	break ;
	case 5 :
	printf("===Pembelian E-Ticket===\n");
	printf("Masukkan jumlah tiket anak-anak\n");
	do{
		scanf("%d", &anak);
		hargaanak = 100000;
		kali1 = anak * hargaanak;
	if(anak > 20 ){
		printf("tiket melebihi batas maksimal\n");
	}
}while (anak > 20);
	printf("Masukkan jumlah tiket dewasa\n");
	do{
		scanf("%d", &dewasa);
		hargadewasa = 150000;
		kali2 = dewasa * hargadewasa;
	if(dewasa > 20 ){
		printf("tiket melebihi batas maksimal\n");
	}else if(dewasa < 1){
		printf("tiket minimal adalah 1 tiket\n");
	}
}while (dewasa > 20 || dewasa <1);
	printf("Masukkan jumlah tiket senior\n");
	do{
		scanf("%d", &senior);
		hargasenior = 80000;
		kali3 = senior * hargasenior;
	if(senior > 20 ){
		printf("tiket melebihi batas maksimal\n");
	}
}while (senior > 20);
	total = kali1 + kali2 + kali3;
	printf("Total Pembayaran : Rp. %3.f\n", total);
	printf("Apakah anda yakin ingin melanjutkan pembayaran? 1 untuk Ya || 2 untuk Tidak \n");
	scanf("%d", &pilihan);
	if(pilihan == 1){
		printf("================INVOICE PEMBAYARAN================\n");
		printf("Jumlah Tiket Anak anak : %d x %d =Rp %d\n", anak, hargaanak, kali1);
		printf("Jumlah Tiket Dewasa : %d x %d =Rp %d\n", dewasa, hargadewasa, kali2);
		printf("Jumlah Tiket Senior : %d x %d =Rp %d\n", senior, hargasenior, kali3);
		printf("----------------------------------------------------\n");
		printf("Total Pembayaran    : %3.f\n",total );
		printf("====================================================\n");
		printf("Terimakasih telah membeli tiket!\n");
		printf("Nikmati wahana permainan kami!\n");
		printf("=====================================================\n");
	}else{
		printf("Baik Pembayaran Dibatalkan\n");
}
	break;
	case 6 :
	printf("===Ayo Rekreasi Di DOFUN===");
	break;
	default :
		printf("opsi tidak ditemukan\n");
}
do{
	printf("Selamat Datang Di DOFUN\n");
	printf("1. Check Promo\n");
	printf("2. Wahana Permainan\n");
	printf("3. Informasi Tentang E-Ticket\n");
	printf("4. Peraturan Pembelian E-Ticket\n");
	printf("5. Beli E-Ticket\n");
	printf("6. Exit\n");
	printf ("Pilih Opsi!\n");
	scanf ("%d", &opsi);
	switch(opsi){
	case 1 :
	printf ("||		Promo Hari Ini 		||\n");
	printf("1. Diskon 20%% untuk pembelian ticket anak-anak\n");
	printf("2. Diskon 10%% untuk pembelian ticket dewasa\n");
	printf("3. Diskon 30%% untuk pembelian ticket senior\n");
	break ;
	case 2 :
	printf(" = Jenis Wahana Permainan =\n");
	printf("1. Roller Coster\n");
	printf("2. Ferris Wheel\n");
	printf("3. Bumper Cars\n");
	printf("4. Merry-Go-Round\n");
	printf("5. Water Slide\n");
	printf("6. Haunted House\n");
	printf("7. Swing Ride\n");
	printf("8. Drop Tower\n");
	printf("9. Log Flume\n");
	printf("10. Pirate Ship\n");
	break ;
	case 3 :
	printf("	========Informasi E-Ticket========\n");
	printf("1. Anda dapat menukarkan E-Ticket ini di loket masuk DOFUN\n");
	printf("2. E-Ticket ini hanya berlaku untuk 1 kali masuk\n");
	printf("3. E-Ticket ini hanya berlaku untuk maksimal 7 hari setelah waktu pembelian\n");
	printf("===============================================================================");
	break ;
	case 4 :
	printf("=====Peraturan Pembelian E-Ticket=====\n");
	printf("1. Kategori anak-anak jika dibawah 12 tahun\n");
	printf("2. Kategori dewasa jika diatas 12 tahun\n");
	printf("3. Kategori Senior jika dibawah 60 tahun");
	break ;
	case 5 :
	printf("===Pembelian E-Ticket===\n");
	printf("Masukkan jumlah tiket anak-anak\n");
	do{
		scanf("%d", &anak);
		hargaanak = 100000;
		kali1 = anak * hargaanak;
	if(anak > 20 ){
		printf("tiket melebihi batas maksimal\n");
	}
}while (anak > 20);
	printf("Masukkan jumlah tiket dewasa\n");
	do{
		scanf("%d", &dewasa);
		hargadewasa = 150000;
		kali2 = dewasa * hargadewasa;
	if(dewasa > 20 ){
		printf("tiket melebihi batas maksimal\n");
	}else if(dewasa < 1){
		printf("tiket minimal adalah 1 tiket\n");
	}
}while (dewasa > 20 || dewasa < 1);
	printf("Masukkan jumlah tiket senior\n");
	do{
		scanf("%d", &senior);
		hargasenior = 80000;
		kali3 = senior * hargasenior;
	if(senior > 20 ){
		printf("tiket melebihi batas maksimal\n");
	}
}while (senior > 20);
	total = kali1 + kali2 + kali3;
	printf("Total Pembayaran : Rp. %3.f\n", total);
	printf("Apakah anda yakin ingin melanjutkan pembayaran? 1 untuk Ya || 2 untuk Tidak \n");
	scanf("%d", &pilihan);
	if(pilihan == 1){
		printf("================INVOICE PEMBAYARAN================\n");
		printf("Jumlah Tiket Anak anak : %d x %d =Rp %d\n", anak, hargaanak, kali1);
		printf("Jumlah Tiket Dewasa : %d x %d =Rp %d\n", dewasa, hargadewasa, kali2);
		printf("Jumlah Tiket Senior : %d x %d =Rp %d\n", senior, hargasenior, kali3);
		printf("----------------------------------------------------\n");
		printf("Total Pembayaran    : %3.f\n",total );
		printf("====================================================\n");
		printf("Terimakasih telah membeli tiket!\n");
		printf("Nikmati wahana permainan kami!\n");
		printf("=====================================================\n");
	}else {
		printf("Baik Pembayaran Dibatalkan\n");
	}
	break;
	case 6 :
	printf("===Ayo Rekreasi Di DOFUN===");
	break;
	default :
		printf("opsi tidak ditemukan\n");
}
}while (opsi!=6);
	return 0;
}
