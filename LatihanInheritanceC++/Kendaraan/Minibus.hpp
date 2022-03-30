#ifndef BUS_HPP
#define BUS_HPP

#include "Kendaraan.hpp"

class Minibus : public Kendaraan
{
public:
    // ctor
    Minibus();

    // user-defined ctor
    Minibus(int nomorKendaraan, string kategori, string merk, int tahunKeluaran);

    // cctor
    Minibus(const Minibus &m);

    // dtor: tidak diperlukan karena mengalokasikan memori heap
    ~Minibus();

    double Diskon(int lamaSewa);
};

#endif