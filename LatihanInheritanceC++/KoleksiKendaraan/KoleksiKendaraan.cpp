#include "KoleksiKendaraan.hpp"

KoleksiKendaraan::KoleksiKendaraan()
{
    this->kumpulanKendaraan = new Kendaraan[100];
    this->size = 100;
    this->neff = 0;
}

KoleksiKendaraan::KoleksiKendaraan(int size)
{
    this->kumpulanKendaraan = new Kendaraan[size];
    for (int i = 0; i < size; i++)
    {
        this->kumpulanKendaraan[i] = Kendaraan();
    }
    this->size = size;
    this->neff = 0;
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan &k)
{
    this->kumpulanKendaraan = new Kendaraan[k.size];
    for (int i = 0; i < k.neff; i++)
    {
        this->kumpulanKendaraan[i] = k.kumpulanKendaraan[i];
    }
    this->size = k.size;
    this->neff = k.neff;
}


KoleksiKendaraan::~KoleksiKendaraan()
{
    delete[] this->kumpulanKendaraan;
}

void KoleksiKendaraan::PrintAll()
{
    for (int i = 0; i < this->neff; i++)
    {
        this->kumpulanKendaraan[i].PrintInfo();
    }
}

void KoleksiKendaraan::operator<<(Kendaraan &k)
{
    this->kumpulanKendaraan[neff] = k;
    this->neff += 1;
}

void KoleksiKendaraan::operator<<(KoleksiKendaraan &k)
{
    for (int i = 0; i < k.neff; i++)
    {
        (*this) << k.kumpulanKendaraan[i];
    }
}
