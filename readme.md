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
## [Function](function/)
fungsi adalah blok kode yang berjalan hanya ketika dipanggil.
kamu bisa melemparkan data yang disebut parameter ke dalam fungsi.

fungsi juga digunakan untuk melakukan beberapa aksi, dan fungsi-fungsi ini penting untuk penggunaan kembali/reusing code:  
buat 1 fungsi dan gunakan berkali-kali

### [Membuat fungsi](function/membuatFunction.cpp)  
```cpp
void myFunction() {
  // code to be executed
}
```

### [Memanggil fungsi](function/membuatFunction.cpp)  
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

### [Parameter dan Arguments](function/parameterDanArgumen.cpp)
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
### [Default Parameter](function/defaultParameter.cpp)
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

### [Multiple Parameters](function/multipleParameter.cpp)
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
### [Return Value](function/returnValue.cpp)
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
### [Pass By Reference](function/passByReference.cpp)
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

```cpp
void changeValue(int &num) {
  num = 50;
}

int main() {
  int value = 10;
  changeValue(value);  // Call the function and change the value to 50
  cout << value; 
  return 0;
}
```

### Function Overloading
Fungsi dalam c++ memungkinkan untuk memiliki nama yang sama, selama parameternya berbeda dalam tipe atau number

contoh:
```cpp
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)
```

kalau tidak menggunakan overloading jadi seperti ini:
```cpp
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```
kita jadi membuat dua fungsi dengan nama yang berbeda padahal logicnya sama

contoh penggunaan function overloading contohnya misal pada fungsi increment yang berkerja di int dan double:
```cpp
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);

  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```

### Variable Scope
setelah memahami cara fungsi bekerja, penting juga mempelajari bagaimana variable bertindak di dalam dan di luar fungsi

di C++, variable hanya bisa diakses di dalam wilayah dimana dia dibuat. Hal ini disebut scope.

#### Local scope  
variable yang dibuat di dalam fungsi adalah milik lingkup lokal dari fungsi tersebut, dan hanya bisa digunakan di dalam fungsi tersebut.
contoh:
```cpp
void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;

  // Print the variable x
  cout << x;
}

int main() {
  myFunction();
  return 0;
}
```
jadi variable x hanya bisa digunakan di dalam body myFunction dan tidak bisa diakses di main maupun di luar fungsi tersebut

#### Global scope
variable yang dibuat di luar fungsi dissebut global variable dan dimiliki oleh global scope. Global variable bisa diakses di dalam dan di luar fungsi selama variable dideklarasikan di luar fungsi.  
contoh:
```cpp
// Global variable x
int x = 5;

void myFunction() {
  // We can use x here
  cout << x << "\n";
}

int main() {
  myFunction();

  // We can also use x here
  cout << x;
  return 0;
}
```

#### Naming variables
jika terdapat variable dengan nama yang sama di dalam dan di luar fungsi. C++ akan menganggap itu sebagai 2 variable yang berbeda.  
contoh:
```cpp
// Global variable x
int x = 5;

void myFunction() {
  // Local variable with the same name as the global variable (x)
  int x = 22;
  cout << x << "\n"; // Refers to the local variable x
}

int main() {
  myFunction();

  cout << x; // Refers to the global variable x
  return 0;
}
```

jadi jika di dalam fungsi terdapat variable yang sama dengan variable di global, maka fungsi akan memprioritaskan fungsi yang di dalam fungsi/local variable dulu.

tapi penulisan nama variable yang sama itu harus dihindari karena itu bisa membuat code menjadi error atau bug yang sukar disadari.


## Struktur Data
## [Conditional](condition/)
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
### [If](condition/if.cpp)
if untuk menentukan blok kode yang akan dieksekusi jika kondisi true

```cpp
if (condition) {
  // block of code to be executed if the condition is true
}
```
### [Else](condition/else.cpp)
else untuk menentukan blok kode yang dieksekuis jika kondisi false
```cpp
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```
### [Else if](condition/elseIf.cpp)
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
### [Short hand if else](condition/shortIfElse.cpp)
Ada if else yang lebih singkat yang dinamakan ternary operator, dinamakan ternary operator karena ini mengandung tiga operand.  
Ini bisa digunakan untuk menggantikan multiple line code dengan single line dan biasanya digunakan untuk replace simple if else statement

```cpp
 variable = (condition) ? expressionTrue : expressionFalse;
```

### [Switch](condition/switch.cpp)
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