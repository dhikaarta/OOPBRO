#include "Minibus.hpp"

Minibus::Minibus() : Kendaraan() {}

// user-defined ctor
Minibus::Minibus(int nomorKendaraan, string merk, int tahunKeluaran) : Kendaraan(nomorKendaraan, merk, tahunKeluaran) {}

// cctor
Minibus::Minibus(const Minibus &m) : Kendaraan(m) {}

// dtor: tidak diperlukan karena mengalokasikan memori heap
Minibus::~Minibus() {}

void Minibus ::printInfo()
{
    Kendaraan::PrintInfo();
    cout << "Kategori: Minibus" << endl;
}

int Minibus ::BiayaSewa(int lamaSewa)
{
    if (lamaSewa >= 5)
    {
        return 5000000;
    }
    else
    {
        return 5000000 + (500000 * (lamaSewa = 5));
    }
}

double Minibus ::Diskon(int lamaSewa)
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