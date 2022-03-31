#include "Bus.hpp"

// ctor
Bus ::Bus() : Kendaraan()
{
    this->kapasitas = 0;
}
// user-defined ctor
Bus ::Bus(int kapasitas, int nomorKendaraan, string merk, int tahunKeluaran) : Kendaraan(nomorKendaraan, merk, tahunKeluaran)
{
    this->kapasitas = kapasitas;
}

// cctor
Bus ::Bus(const Bus &b) : Kendaraan(b)
{
    this->kapasitas = b.kapasitas;
}

// dtor: tidak diperlukan karena mengalokasikan memori heap
Bus ::~Bus(){};

int Bus ::BiayaSewa(int lamaSewa)
{
    return 1000000 * lamaSewa;
}

void Bus ::PrintInfo()
{
    Kendaraan::PrintInfo();
    cout << "Kategori: Bus" << endl;
    cout << "Kapasitas: " << this->kapasitas << endl;
}