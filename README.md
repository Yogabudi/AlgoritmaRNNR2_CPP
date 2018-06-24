# Algoritma RNNR (Random Number Non Repetitive)
Algoritma ini berfungsi untuk menghasilkan angka-angka random yang berbeda satu sama lain, tanpa menghasilkan angka yang sama

## Deskripsi
Dalam menghasilkan angka random biasanya terjadi pengulangan angka, misalnya :
```
1, 5, 3, 5, 9
9, 4, 3, 4, 4
```
Algoritma ini bisa menghasilkan angka-angka random yang tidak menghasilkan angka yang sama, contohnya :
```
1, 5, 3, 8, 9
8, 3, 1, 5, 2
```
## Penggunaan
Penggunaan algoritma dilakukan melalui pemanggilan fungsi
```
void angkaRandomNonRepetisi(int hasil[], int panjangArray)
```
int hasil[] diisi dengan referensi array yang akan menyimpan hasil dari pemanggilan fungsi

int panjangArray diisi dengan panjang array dari hasil[]
