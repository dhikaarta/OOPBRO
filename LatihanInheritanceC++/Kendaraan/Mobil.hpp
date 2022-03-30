#ifndef BUS_HPP
#define BUS_HPP

#include "Kendaraan.hpp"

class Mobil : public Kendaraan
{
private:
    string supir;

public:
    // ctor
    Mobil();
    // user-defined ctor
    Mobil(string supir, int nomorKendaraan, string kategori, string merk, int tahunKeluaran);
    // cctor
    Mobil(const Mobil &m);
    // dtor: tidak diperlukan karena mengalokasikan memori heap
    ~Mobil(){};

    void PrintInfo();

};

#endif