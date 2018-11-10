# Praktikum4

**NAMA 	: NUR ALI MUHAMMAD**

**KELAS	: TI.18.A.2**

**NIM	: 311810355**

## latihan1.cpp

**Alur Program :**

1. Mendeklarasikan Variable `int max, a` sebagai varible input .
2. Memberikan perintah awal bahwa `max=0` .
3. Masukan syntax `do` .
4. Inputkan nilai yang ingin di masukan dengan intruksi `cin>> a` .
5. Membandikan nilai variable **A** dengan Variable **max** dengan intruksi `if max<a` .
6. Masukan syntax `while` untuk mengulang variabel .
7. Intruksikan variabe `a!=0` untuk menghentikan program dengan menginput angka **0** .
8. Cetak nilai terbesar dari bilangan acak yang di inputkan yaitu `max` .

**Code Program :**

```c++

#include <iostream>

using namespace std;

int main()
{
    int max, a;
    max = 0;

    do {
        cout<<"Masukkan bilangan : ";
        cin>>a;
        if (max<a)
            max = a;
    } while (a != 0);
    cout<<"=========================================="<<endl;
    cout<<"Bilangan Terbesarnya Adalah : "<<max<<endl;
    return 0;
}

```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum4/master/latihan1/flowchart.png)

**Hasilnya :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum4/master/latihan1/SS.png)


## latihan2.cpp

**Alur Program :**

1. Deklarasi varaible input `int jumlah_beli=0, total_beli=0, i=0, x, y, a;` sebagai variable input .
2. Mendeklarasikan variable **long init** dengan `harga=0,harga_barang=0,total=0,bayar=0,diskon;`.
3. Masukan nilai **y** untuk jumlah barang yang dibeli dan `x=1` .
4. Masukan sytax `while` untuk mengulang program dan intruksikan `x<=y` .
5. Inputkan varible **barang ke -** dengan `i+1` .
6. Inputkan varible **banyaknya barang** dengan `jumlah_beli` .
7. Inputkan varible **harga barang** dengan `harga` .
8. Intruksikan `harga_barang = harga*jumlah_beli` lalu `total=total + harga_barang` dan `total_beli += jumlah_beli` .
9. Intruksikan `x++` dan `i++` untuk mengurut variable **x** dan **i** .
10. lalu jika **total** kurang sama dengan **1000000** maka akan mendaptkan diskon **10%** .
11. Dengan menginput if `(total>=1000000)` maka `diskon=total*10/100` atau bisa juga `diskon=total*0,10` .
12. Atau jika **total** kurang sama dengan **500000** maka akan mendaptkan diskon **5%** .
13. Dengan menginput if `(total>=500000)` maka `diskon=total*5/100` atau bisa juga `diskon=total*0,05` .
14. Lalu intruksikan `bayar=total-diskon` .
15. Cetak **Total Barang Yang Anda beli :** dengan `total_beli` .
    Dan **Total Harga Pembelian : Rp.** dengan `total` .
    Dan **Mendapatkan Diskon Sebesar : Rp.** dengan `diskon` .
    Dan terakhir **TOTAL YANG HARUS DIBAYAR = Rp.** dengan `bayar` .

**Code Program :**

```c++

#include<iostream>
using namespace std;
int main ()
{
cout<<"==================TUGAS PRAKTIKUM4==================="<< endl;
cout<<"===============By : NUR ALI MUHAMMAD================="<< endl<<endl;
cout<<"__________________________________________________"<< endl;
cout<<"[ Program Menghitung Total Belanja dan diskonnya ]"<< endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
int jumlah_beli=0,total_beli=0,i=0,x,y,a;
long int
harga=0,harga_barang=0,total=0,bayar=0,diskon;
cout<< "Jumlah Barang yang dibeli : ";
cin>>y; x=1;
cout<< "====================================================="<< endl;

 while(x<=y)
 {
     cout << "Barang ke - " << i+1 <<endl;
     cout<< "Banyaknya Barang : "; cin>>jumlah_beli;
     cout<< "Harga Barang : Rp."; cin>>harga;
     harga_barang = harga*jumlah_beli;
     total=total + harga_barang;
     total_beli += jumlah_beli;
     x++;
     i++;
 }
if(total>=1000000)
{

    diskon=total*10/100;
    cout<<endl<<"=====================================================" <<endl;
    cout<<"Selamat anda mendapatkan diskon 10%"<<endl;
}
else if (total>500000&&total<1000000)
{

    diskon=total*5/100;
    cout<<endl<<"=====================================================" <<endl;
    cout<<"Selamat anda mendapatkan diskon 5%"<<endl;
}else{
diskon=0;
}
    cout<< "=====================================================" <<endl<<endl;
    bayar=total-diskon;
    cout<< "Total Barang Yang Anda beli : "<<total_beli<<endl;
    cout<< "Total Harga Pembelian : Rp."<<total<<endl;
    cout<< "Mendapatkan Diskon Sebesar : Rp. "<<diskon<<endl;
    cout<< "TOTAL YANG HARUS DIBAYAR = Rp. "<<bayar<<endl<<endl;
    cout<< "===================-TERIMA KASIH-===================="<<endl;
}
 
```

**Flowchart Program :**

![flowchart](https://raw.githubusercontent.com/alivia1919/praktikum4/master/latihan2/flowchart.jpg)

**Hasilnya jika tanpa diskon :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum4/master/latihan2/SS1.png)


**Hasilnya jika mendapatkan diskon 5% :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum4/master/latihan2/SS2.png)

**Hasilnya jika mendapatkan diskon 10% :**

![hasilnya](https://raw.githubusercontent.com/alivia1919/praktikum4/master/latihan2/SS3.png)


**TERIMA KASIH** 
# Praktikum4