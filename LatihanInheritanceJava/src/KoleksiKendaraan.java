class KoleksiKendaraan {
    private int size;
    private int neff;
    private Kendaraan[] kumpulanKendaraan;

    public KoleksiKendaraan() {
        this.kumpulanKendaraan = new Kendaraan[100];
        this.size = 100;
        this.neff = 0;
    }

    public KoleksiKendaraan(int size) {
        this.kumpulanKendaraan = new Kendaraan[size];
        this.size = size;
        this.neff = 0;
    }

    public KoleksiKendaraan(KoleksiKendaraan k) {
        this.kumpulanKendaraan = new Kendaraan[100];
        for (int i = 0; i < k.size; i++) {
            this.kumpulanKendaraan[i] = k.kumpulanKendaraan[i];
        }
        this.size = k.size;
        this.neff = k.neff;
    }

    public void appendKendaraan(Kendaraan kendaraan)
    // pengganti operator overloading << karena tidak ada op overloading di java
    {
        this.kumpulanKendaraan[this.neff++] = kendaraan;
    }

    public void printAll() {
        for (int i = 0; i < this.neff; i++) {
            System.out.println("===================");
            this.kumpulanKendaraan[i].printInfo();
        }
    }

    public void appendKumpulanKendaraan(KoleksiKendaraan kk) {
        for (int i = 0; i < kk.neff; i++) {
            if (this.neff < this.size) {
                this.kumpulanKendaraan[this.neff++] = kk.kumpulanKendaraan[i];
            }
        }
    }
}