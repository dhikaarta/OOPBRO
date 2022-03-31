public abstract class Kendaraan {
    protected int nomorKendaraan;
    protected int tahunKeluaran;
    protected String merk;

    public Kendaraan() {
        this.nomorKendaraan = 0;
        this.merk = "XXX";
        this.tahunKeluaran = 0;
    }

    public Kendaraan(int nomorKendaraan, String merk, int tahunKeluaran) {
        this.nomorKendaraan = nomorKendaraan;
        this.merk = merk;
        this.tahunKeluaran = tahunKeluaran;
    }

    public Kendaraan(Kendaraan k) {
        this.nomorKendaraan = k.nomorKendaraan;
        this.merk = k.merk;
        this.tahunKeluaran = k.tahunKeluaran;
    }

    public abstract long BiayaSewa(int lamaSewa);

    public void printInfo() {
        System.out.printf("Nomor Kendaraan: %d\n", this.nomorKendaraan);
        System.out.printf("Merk: %s\n", this.merk);
        System.out.printf("Tahun Keluaran: %d\n", this.tahunKeluaran);
    }
}
