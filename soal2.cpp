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
