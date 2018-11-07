# praktikum-4


## Latihan1: Menampilkan bilangan terbesar dari sejumlah bilangan diinputkan sebelum diinputkan angka 0

**Alur algoritma**
1. Mendeklarasikan variable `int n=0` dari int `max=0`
2. Membaca input cin >> n
3. Membandingkan `n>max` proses diulangi selama nilai n tidak berjumlah 0
4. Cetak `max`

**program flowchart**
![flowchart](https://github.com/iisamelia/praktikum-4/blob/master/flowchart1.png)
**kode lengkap program**
```C++
#include<iostream>

using namespace std;

int main ()
{
    int n = 0;
    int max = 0;

    do{
     cout << "masukan bilangan ( masukan 0 untuk berhenti) : ";
     cin >> n;

     if (n> max)
        max= n;

    } while (n!= 0);
    cout << "bilangan terbesar adalah"<<max;


 }
```

**hasilnya**

![hasilnya](https://github.com/iisamelia/praktikum-4/blob/master/hasil1.PNG)


## Latihan2:program menghitung total belanja

**Alur algoritma**
1. Mendeklarasikan variable `x,y,barang,diskon,banyak barang,total,nilai N, dan total belanjaan`
2. Membaca input nilai **N** menginput banyaknya barang dan di deskripsikan lagi dengan `x,y` untuk variabrel pembanding
3. Membandingkan nilai variabel **x** dan **y** dengan hasil x lebil kecil atau sama dengan y (x<=y) menggunakan `while` untuk mengulangi hasil semua intruksi yang diinputkan
4. Membaca atau cetak variabel **A** untuk barang ke-
5. Membaca atau cetak variabel **jumlah beli** dan **harga** untuk mengintrusikan input harga dan barang
6. Input program sesuai perintah
	   harga_barang = harga*jumlah_beli;
	   Total = total + harga_barang;
	   total_beli += jumlah_beli;
7. deskripsikan variabel diskon yang mau kita taruh diprogram dengan intruksi (if-then-else)
8. jika selesai intruksikan kembali (bayar=total-diskon)
9. Cetak semua hasil perintah (jumlah_barang,total harga belanja,diskon yang diberikan,harga yang harus dibayar)

**program flowchart**

![flowchart](https://github.com/iisamelia/praktikum-4/blob/master/flowchart2.png)

**kode lengkap program**
```C++
#include<iostream>

using namespace std;
int main ()

{
    cout << "program menghitung total belanja" << endl;
    cout << "================================" << endl;
    int jumlah_beli=0,total_beli=0,x,y,a;
    long int
    harga=0,harga_barang=0,total=0,bayar=0,diskon;
    cout << "masukan jumlah barang (n):"; cin >> y;
    x=1;

    while (x<=y)
    {
        cout << "barang ke-"; cin >> a;
        cout << "masukan banyaknya barang: "; cin >> jumlah_beli;
        cout << "masukan harga barang :Rp"; cin >> harga;
        harga_barang = harga*jumlah_beli;
        total=total + harga_barang;
        total_beli += jumlah_beli;
        x++;
    }
    if (total>=1000000)
    {
        diskon=total*10/100;
    }
    else if (total>500000&&total<1000000)
    {
        diskon=total*5/100;

    }else{
    diskon=0;
    }
    cout << "============================================================" <<endl;
    bayar =total-diskon;
    cout << "total barang yang di beli : " <<total_beli << endl;
    cout << "total semua pembelian : Rp" <<total<<endl;
    cout << "mendapatkan diskon sebesar :Rp"<<diskon<<endl;
    cout << "total yang harus dibayar =Rp" <<bayar<<endl;

}
```

**hasilnya**

![hasilnya](https://github.com/iisamelia/praktikum-4/blob/master/hasil2.PNG)
