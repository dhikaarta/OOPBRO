class Bus extends Kendaraan {
    private int kapasitas;

    public Bus() {
        super();
        this.kapasitas = 0;
    }

    public Bus(int nomorKendaraan, String merk, int tahunKeluaran, int kapasitas) {
        super(nomorKendaraan, merk, tahunKeluaran);
        this.kapasitas = kapasitas;
    }

    public Bus(Bus b) {
        super(b);
        this.kapasitas = b.kapasitas;
    }

    public long BiayaSewa(int lamaSewa) {
        return 1000000 * lamaSewa;
    }

    public void printInfo() {
        super.printInfo();
        System.out.printf("Kategori: %s\n", "Bus");
        System.out.printf("Kapasitas: %d\n", this.kapasitas);
    }
}