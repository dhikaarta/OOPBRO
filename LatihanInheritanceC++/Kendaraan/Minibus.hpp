#ifndef MINIBUS_HPP
#define MINIBUS_HPP

#include "Kendaraan.hpp"

class Minibus : public Kendaraan
{
public:
    // ctor
    Minibus();

    // user-defined ctor
    Minibus(int nomorKendaraan, string merk, int tahunKeluaran);

    // cctor
    Minibus(const Minibus &m);

    // dtor: tidak diperlukan karena mengalokasikan memori heap
    ~Minibus();

    void printInfo();
    double Diskon(int lamaSewa);
    int BiayaSewa(int lamaSewa);
};

#endif