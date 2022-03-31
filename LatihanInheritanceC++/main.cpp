#include "KoleksiKendaraan/KoleksiKendaraan.hpp"
#include "Kendaraan/Kendaraan.hpp"
#include "Kendaraan/Mobil.hpp"
#include "Kendaraan/Minibus.hpp"
#include "Kendaraan/Bus.hpp"

int main()
{
    KoleksiKendaraan *KK = new KoleksiKendaraan();
    Kendaraan *B1 = new Bus(50,1,"Damri", 2001);
    Kendaraan *M1 = new Mobil("Dhika",2, "Toyota", 1999);
    Kendaraan *MB1 = new Minibus(3, "MerkMinibus", 1700);

    *KK << *B1;
    *KK << *M1;
    *KK << *MB1 ;
    cout << "ISI KOLEKSI KENDARAAN 1 :" << endl;
    KK->PrintAll();
    cout << endl;
    cout << "ISI KOLEKSI KENDARAAN 2 :" << endl;
    KoleksiKendaraan *KK2 = new KoleksiKendaraan();
    *KK2<<*KK;
    *KK2 << *new Bus(100,4,"BusKeren",2020);
    *KK2 << *new Mobil("Mas Rosi", 5, "Ferrari", 2020);
    KK2->PrintAll();
}