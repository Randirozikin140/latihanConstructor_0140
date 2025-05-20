//Buatlah programc++  dengan class barang yang memiliki atribut: nama barang,
//kode barang
//program memiliki construktor berparameter untuk mengisi
//nilai nama barang dan kode barang
//serta memiliki fungsi untuk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;
class Barang
{
private:
    string nama_barang;
    string kode_barang;
    
public:
    Barang(string nama, string kode)
    {
        nama_barang = nama;
        kode_barang = kode;

        this->nama_barang = nama_barang;
        this->kode_barang = kode_barang;    
        return;
    }

    void cetak()
    {
        cout << "nama barang: " << nama_barang << endl;
        cout << "kode barang: " << kode_barang << endl;
    }
};

int main()
{
    Barang b("laptop", "IRX15");
    b.cetak();
    return 0;

}