#ifndef BUS_HPP
#define BUS_HPP

#include "Kendaraan.hpp"

class Bus : public Kendaraan
{
private:
    int kapasitas;

public:
    // ctor
    Bus();
    // user-defined ctor
    Bus(int kapasitas, int nomorKendaraan, string kategori, string merk, int tahunKeluaran);
    // cctor
    Bus(const Bus &b);
    // dtor: tidak diperlukan karena mengalokasikan memori heap
    ~Bus(){};

    void PrintInfo();
};

#endif