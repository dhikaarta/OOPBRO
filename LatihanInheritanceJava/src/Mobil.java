class Mobil extends Kendaraan {
    private String supir;

    public Mobil() {
        super();
        this.supir = "XXXX";
    }

    public Mobil(int nomorKendaraan, String merk, int tahunKeluaran, String supir) {
        super(nomorKendaraan, merk, tahunKeluaran);
        this.supir = supir;
    }

    public Mobil(Mobil Mb) {
        super(Mb);
        this.supir = Mb.supir;
    }

    public long BiayaSewa(int lamaSewa) {
        return 500000 * lamaSewa;
    }

    public void printInfo() {
        super.printInfo();
        System.out.printf("Kategori: %s\n", "Mobil");
    }
}