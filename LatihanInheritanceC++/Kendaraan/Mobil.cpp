#include "Mobil.hpp"

Mobil :: Mobil() : Kendaraan()
{
    this->supir = "XXXX";
}
// user-defined ctor
Mobil :: Mobil(string supir, int nomorKendaraan, string kategori, string merk, int tahunKeluaran) : Kendaraan(nomorKendaraan, kategori, merk, tahunKeluaran)
{
    this->supir = supir;
}
// cctor
Mobil :: Mobil(const Mobil &m) : Kendaraan(m)
{
    this->supir = m.supir;
}
// dtor: tidak diperlukan karena mengalokasikan memori heap
Mobil :: ~Mobil(){};

void Mobil :: PrintInfo()
{
    Kendaraan::PrintInfo();
    cout << "Supir: " << this->supir << endl;
}