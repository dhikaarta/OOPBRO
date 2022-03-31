class Minibus extends Kendaraan {

    public Minibus() {
        super();
    }

    public Minibus(int nomorKendaraan, String merk, int tahunKeluaran) {
        super(nomorKendaraan, merk, tahunKeluaran);
    }

    public Minibus(Minibus M) {
        super(M);
    }

    public long BiayaSewa(int lamaSewa) {
        if (lamaSewa <= 5) {
            return 5000000;
        } else {
            return 5000000 + (500000 + (lamaSewa - 5));
        }
    }

    public void printInfo() {
        super.printInfo();
        System.out.printf("Kategori: %s\n", "Minibus");
    }

    public double Diskon(int lamaSewa) {
        if (lamaSewa > 10) {
            return BiayaSewa(lamaSewa) * 0.9;
        } else {
            return BiayaSewa(lamaSewa);
        }
    }
}
