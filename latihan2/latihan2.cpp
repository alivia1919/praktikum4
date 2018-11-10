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
