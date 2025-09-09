# Belajar C++ Dasar
> by : arbath@teknohole.com

## Tipe Data Primitif

### Char
Tipe data char berukuran 1 byte
```bash
char n = 'b';
```
### Integer
Tipe data integer berukuran 4 byte yang bisa menampung binary, oktal, desimal, dan hexadesimal dari -2,147,483,648 sampai 2,147,483,648
```bash
int n = 100;
```
### Float
Tipe data float dipisahkan dengan (.) berukuran 4 byte dapat menampung dari  1.2e-38 sampai 3.4e+38.
```bash
float n = 99.9;
```
### Double
Tipe data double sama seperti float tetapi lebih presisi hingga 17 digit sedangkan float hanya 7 digit dan float lebih berukuran lebih besar yaitu 8 byte
### Boolean
Tipe data boolean berukuran 1 byte dan hanya berisi true atau false
```bash
bool n = true;
```
### Konversi tipe data
Kita dapat mengubah tipe data variabel tertentu mengjadi tipe data lain dengan cara
`(Tipe_Data_Baru)variabel` tetapi beresiko kehilangan data, cara yang aman adalah menggunakan `static_cast<Tipe_Data_Baru>`(variabel) nanti compiler akan memeriksa dahulu apakah konversinya masuk akal atau tidak.
### Modifier
Tipe data yang sudah ada dapat dimodifikasi dengan menambahkan beberapa modifier sebelum tipe data
```bash
short int variable; // ukuran mengecil menjadi 2 byte
long int variable; // 8 byte
signed int variable; // menerima semua negatif/positif
unsigned int variable; // hanya menerima angka positif
```

## Input Output
Untuk input kita bisa menggunakan `std::cin` sedangkan untuk output kita bisa menggunakan `std::cout`

## Operator
## Function
fungsi adalah blok kode yang berjalan hanya ketika dipanggil.
kamu bisa melemparkan data yang disebut parameter ke dalam fungsi.

fungsi juga digunakan untuk melakukan beberapa aksi, dan fungsi-fungsi ini penting untuk penggunaan kembali/reusing code:  
buat 1 fungsi dan gunakan berkali-kali

### Membuat fungsi  
```cpp
void myFunction() {
  // code to be executed
}
```

### Memanggil fungsi  
mendeklarasikan fungsi tidak akan langung mengeksekusi fungsi tersebut

untuk memanggil fungsi, tulis nama fungsi diikuti dengan dua kurung () dan semicolon ;

```cpp
// Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); //  memanggil fungsi
  return 0;
}

// Outputs "I just got executed!"
```

### Parameter dan Arguments
informasi/data dapat dilemparkan/diteruskan ke fungsi dengan parameter. Parameter berfungsi sebagai variable di dalam fungsi;

parameter ditulis setelah nama fungsi, di dalam kurung (). Parameter dapat berjumlah lebih dari 1 dengan dipisahkan koma ,

```cpp
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
```

ketika memanggil fungsi jadi seperti ini:
```cpp
int main() {
    functionName(parameter1, paramter2, parameter3);
}
```
### Default Parameter
Default parameter adalah paramter yang disertai dengan nilai default.

penggunaanya yaitu dengan menggunakan equals sign (=). Contoh jika kita memanggil fungsi tanpa argument, parameter akan menggunakan default value ("Norway);

```cpp
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA
```

### Multiple Parameters
Di dalam fungsi, kamu bisa menambahkan parameter sesukamu, contoh:

```cpp
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Liam Refsnes. 3 years old.
// Jenny Refsnes. 14 years old.
// Anja Refsnes. 30 years old.
```
### Return Value
fungsi yang baik seharusnya mengembalikan value, tipe value ditulis di awal fungsi. sebelumnya sebelum menulis fungsi menggunakan keyword void, void menandakan fungsi tersebut tidak mengembalikan sebuah nilai. Jika sebuah fungsi ingin mengembalikan nilai maka sebelum nama fungsi tuliskan tipe data yang akan dikembalikan seperti string, int, dll.

```cpp
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}

// Outputs 8 (5 + 3)
```
### Pass By Reference
di contoh yang sebelumnya, kita menggunakan normal variable ketika kita melempar paramter ke fungsi

kamu juga bisa melempar sebuah reference ke fungsi.
reference adalah alias untuk variable yang sudah ada

contoh referance:
```cpp
string food = "Pizza"; //food variable
string &meal = food; //reference to food
```

jadi food dan meal bernilai sama karena meal adalah alias dari food

jadi cara ini akan berguna jika kamu butuh untuk mengubah value dari argument

## Struktur Data
## Conditional
conditional adalah statement yang yang digunakan untuk melakukan tindakan yang berbeda berdasarkan kondisi yang diberikan

kondisi yang digunakan adalah kondisi perbandingan
- kurang dari: a < b
- kurang dari sama dengan: a <= b
- lebih dari: a > b
- lebih dari sama dengan: a >= b
- sama dengan: a == b
- tidak sama dengan: a != b

kondisi perbandingan ini digunakan untuk melakukan aksi yang berbeda

c++ punya conditional statements:
### If
if untuk menentukan blok kode yang akan dieksekusi jika kondisi true

```cpp
if (condition) {
  // block of code to be executed if the condition is true
}
```
### Else
else untuk menentukan blok kode yang dieksekuis jika kondisi false
```cpp
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```
### Else if
else if untuk menentukan kondisi baru untuk mengetes, jika kondisi pertama false
```cpp
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```
### Short hand if else
Ada if else yang lebih singkat yang dinamakan ternary operator, dinamakan ternary operator karena ini mengandung tiga operand.  
Ini bisa digunakan untuk menggantikan multiple line code dengan single line dan biasanya digunakan untuk replace simple if else statement

```cpp
 variable = (condition) ? expressionTrue : expressionFalse;
```

### Switch
switch digunakan untuk menentukan jika banyak alternative block kode yang bisa dieksekusi 
```cpp
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
## Looping