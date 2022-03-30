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
    string kategori;

public:
    // default ctor
    Kendaraan();
    // user-defined ctor
    Kendaraan(int nomorKendaraan, string kategori, string merk, int tahunKeluaran); 
    // cctor
    Kendaraan(const Kendaraan &k);
    // dtor
    ~Kendaraan(); 
    
    virtual void PrintInfo();
    int BiayaSewa(int lamaSewa);
};

#endif