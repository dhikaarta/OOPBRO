#ifndef MOBIL_HPP
#define MOBIL_HPP

#include "Kendaraan.hpp"

class Mobil : public Kendaraan
{
private:
    string supir;

public:
    // ctor
    Mobil();
    // user-defined ctor
    Mobil(string supir, int nomorKendaraan, string merk, int tahunKeluaran);
    // cctor
    Mobil(const Mobil &m);
    // dtor: tidak diperlukan karena mengalokasikan memori heap
    ~Mobil();

    void PrintInfo();
    int BiayaSewa(int lamaSewa);
};

#endif