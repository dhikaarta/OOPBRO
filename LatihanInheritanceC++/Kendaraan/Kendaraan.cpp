#include "Kendaraan.hpp"

Kendaraan::Kendaraan()
{
    this->nomorKendaraan = 0;
    this->kategori = "Mobil";
    this->merk = "XXX";
    this->tahunKeluaran = 0;
}

Kendaraan::Kendaraan(int nomorKendaraan, string kategori, string merk, int tahunKeluaran)
{
    this->nomorKendaraan = nomorKendaraan;
    this->kategori = kategori;
    this->merk = merk;
    this->tahunKeluaran = tahunKeluaran;
}

Kendaraan::Kendaraan(const Kendaraan &k)
{
    this->nomorKendaraan = k.nomorKendaraan;
    this->kategori = k.kategori;
    this->merk = k.merk;
    this->tahunKeluaran = k.tahunKeluaran;
}

Kendaraan::~Kendaraan()
{ /*tidak butuh*/
}

virtual void Kendaraan::PrintInfo()
{
    cout << "Nomor Kendaraan: " << this->nomorKendaraan << endl;
    cout << "Kategori: " << this->kategori << endl;
    cout << "Merk: " << this->merk << endl;
    cout << "Tahun Keluaran: " << this->tahunKeluaran << endl;
}

int Kendaraan::BiayaSewa(int lamaSewa)
{
    int biaya = 0;
    if (this->kategori == "Bus" || this->kategori == "Minibus" || this->kategori == "Mobil")
    {
        if (this->kategori == "Bus")
        {
            biaya = lamaSewa * 1000000;
        }
        else if (this->kategori == "Minibus")
        {
            if (lamaSewa <= 5)
            {
                biaya = 5000000;
            }
            else if (lamaSewa < 5)
            {
                biaya = 5000000 + 500000 * (lamaSewa - 5);
            }
        }
        else if (this->kategori == "Mobil")
        {
            biaya = lamaSewa * 500000;
        }
    }
    return 0;
}