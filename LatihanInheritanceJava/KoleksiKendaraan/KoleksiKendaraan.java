package LatihanInheritanceJava.KoleksiKendaraan;

import LatihanInheritanceJava.Kendaraan.Kendaraan;
import java.util.ArrayList;


class KoleksiKendaraan {
    private int size;
    private int neff;
    private ArrayList<Kendaraan> kumpulanKendaraan;

    public KoleksiKendaraan() {
        this.kumpulanKendaraan = new ArrayList<Kendaraan>();
        this.size = 100;
        this.neff = 0;
    }

    public KoleksiKendaraan(int size) {
        this.kumpulanKendaraan = new ArrayList<Kendaraan>();
        this.size = size;
        this.neff = 0;
    }

    public KoleksiKendaraan(KoleksiKendaraan k) {
        this.kumpulanKendaraan = new ArrayList<Kendaraan>();
        for(int i = 0; i < k.size ;i++) {
            this.kumpulanKendaraan.get(i) = k.kumpulanKendaraan[i];
        }
        this.size = k.size;
        this.neff = k.neff;
    }

    protected void finalize() {
        
    }

    public void PrintAll() {
        
    }


}