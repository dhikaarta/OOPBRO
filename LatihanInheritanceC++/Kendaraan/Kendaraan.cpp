#include "Kendaraan.hpp"

Kendaraan::Kendaraan()
{
    this->nomorKendaraan = 0;
    this->merk = "XXX";
    this->tahunKeluaran = 0;
}

Kendaraan::Kendaraan(int nomorKendaraan, string merk, int tahunKeluaran)
{
    this->nomorKendaraan = nomorKendaraan;
    this->merk = merk;
    this->tahunKeluaran = tahunKeluaran;
}

Kendaraan::Kendaraan(const Kendaraan &k)
{
    this->nomorKendaraan = k.nomorKendaraan;
    this->merk = k.merk;
    this->tahunKeluaran = k.tahunKeluaran;
}

Kendaraan::~Kendaraan()
{ /*tidak butuh*/
}

int Kendaraan :: BiayaSewa(int lamaSewa)
{return 0;}

void Kendaraan::PrintInfo()
{
    cout << "Nomor Kendaraan: " << this->nomorKendaraan << endl;
    cout << "Merk: " << this->merk << endl;
    cout << "Tahun Keluaran: " << this->tahunKeluaran << endl;
}