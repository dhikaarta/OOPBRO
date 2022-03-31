#ifndef KENDARAAN_HPP
#define KENDARAAN_HPP

#include <string>
#include <iostream>
using namespace std;

class Kendaraan
{
private:
    int nomorKendaraan;
    int tahunKeluaran;
    string merk;

public:
    // default ctor
    Kendaraan();
    // user-defined ctor
    Kendaraan(int nomorKendaraan, string merk, int tahunKeluaran);
    // cctor
    Kendaraan(const Kendaraan &k);
    // dtor
    ~Kendaraan();

    virtual void PrintInfo();
    virtual int BiayaSewa(int lamaSewa);
};

#endif