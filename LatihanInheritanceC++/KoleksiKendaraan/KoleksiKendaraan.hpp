#ifndef KOLEKSI_KENDARAAN_HPP
#define KOLEKSI_KENDARAAN_HPP

#include "../Kendaraan/Kendaraan.hpp"

class KoleksiKendaraan
{
private:
    Kendaraan *kumpulanKendaraan;
    int size;
    int neff;

public:
    // default ctor
    KoleksiKendaraan();
    // user defined ctor
    KoleksiKendaraan(int size);
    // cctor
    KoleksiKendaraan(const KoleksiKendaraan & k);
    // dtor
    ~KoleksiKendaraan();

    void PrintAll();
    void operator<<(Kendaraan &);
    void operator<<(KoleksiKendaraan &);
};

#endif