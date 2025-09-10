# Belajar C++ Dasar
> by : arbath@teknohole.com

## Tipe Data Primitif

### [Char](Char.cpp)
Tipe data char berukuran 1 byte
```bash
char n = 'b';
```
### [Integer](Integer.cpp)
Tipe data integer berukuran 4 byte yang bisa menampung binary, oktal, desimal, dan hexadesimal dari -2,147,483,648 sampai 2,147,483,648
```bash
int n = 100;
```
### [Float](Float.cpp)
Tipe data float dipisahkan dengan (.) berukuran 4 byte dapat menampung dari  1.2e-38 sampai 3.4e+38.
```bash
float n = 99.9;
```
### [Double](Double.cpp)
Tipe data double sama seperti float tetapi lebih presisi hingga 17 digit sedangkan float hanya 7 digit dan float lebih berukuran lebih besar yaitu 8 byte
### [Boolean](Bool.cpp)
Tipe data boolean berukuran 1 byte dan hanya berisi true atau false
```bash
bool n = true;
```
### Konversi tipe data
> Kita dapat mengubah tipe data variabel tertentu mengjadi tipe data lain dengan cara
`(Tipe_Data_Baru)variabel` tetapi beresiko kehilangan data, cara yang aman adalah menggunakan `static_cast<Tipe_Data_Baru>`(variabel) nanti compiler akan memeriksa dahulu apakah konversinya masuk akal atau tidak.
### [Modifier](Konversi.cpp)
Tipe data yang sudah ada dapat dimodifikasi dengan menambahkan beberapa modifier sebelum tipe data
```bash
short int variable; // ukuran mengecil menjadi 2 byte
long int variable; // 8 byte
signed int variable; // menerima semua negatif/positif
unsigned int variable; // hanya menerima angka positif
```

## [Input Output](Input.cpp)
Untuk input kita bisa menggunakan `std::cin` sedangkan untuk output kita bisa menggunakan `std::cout`

## [Operator](Operator.cpp)
Operator aritmatika yang bisa digunakan adalah 
- penjumlahan (+)
- pengurangan (-)
- perkalian (*)
- pembagian (/)
- modulus (%)
- increment (++var)
- decrement (--var)
## Function
## Struktur Data
## Conditional
## Looping