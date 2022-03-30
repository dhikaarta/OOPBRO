#include "Minibus.hpp"

Minibus:: Minibus() : Kendaraan() {}

// user-defined ctor
Minibus:: Minibus(int nomorKendaraan, string kategori, string merk, int tahunKeluaran) : Kendaraan(nomorKendaraan, kategori, merk, tahunKeluaran) {}

// cctor
Minibus:: Minibus(const Minibus &m) : Kendaraan(m) {}

// dtor: tidak diperlukan karena mengalokasikan memori heap
Minibus:: ~Minibus(){}

double Minibus :: Diskon(int lamaSewa)
{
    if (lamaSewa > 10)
    {
        return BiayaSewa(lamaSewa) * 0.9;
    }
    else
    {
        return BiayaSewa(lamaSewa);
    }
}