#include "Bus.hpp"

// ctor
Bus :: Bus() : Kendaraan()
{
    this->kapasitas = 0;
}
// user-defined ctor
Bus :: Bus(int kapasitas, int nomorKendaraan, string kategori, string merk, int tahunKeluaran) : Kendaraan(nomorKendaraan, kategori, merk, tahunKeluaran)
{
    this->kapasitas = kapasitas;
}

// cctor
Bus :: Bus(const Bus &b) : Kendaraan(b)
{
    this->kapasitas = b.kapasitas;
}

// dtor: tidak diperlukan karena mengalokasikan memori heap
Bus :: ~Bus(){};

void Bus :: PrintInfo()
{
    Kendaraan::PrintInfo();
    cout << "Kapasitas: " << this->kapasitas << endl;
}