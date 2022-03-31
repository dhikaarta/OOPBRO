package LatihanInheritanceJava.Kendaraan;

public class Kendaraan {
    private int nomorKendaraan;
    private int tahunKeluaran;
    private String merk;
    private String kategori;

    public Kendaraan() {
        this.nomorKendaraan = 0;
        this.kategori = "Mobil";
        this.merk = "XXX";
        this.tahunKeluaran = 0;
    }

    public Kendaraan(int nomorKendaraan, String kategori, String merk, int tahunKeluaran) {
        this.nomorKendaraan = nomorKendaraan;
        this.kategori = kategori;
        this.merk = merk;
        this.tahunKeluaran = tahunKeluaran;
    }

    public Kendaraan(Kendaraan k) {
        this.nomorKendaraan = k.nomorKendaraan;
        this.kategori = k.kategori;
        this.merk = k.merk;
        this.tahunKeluaran = k.tahunKeluaran;
    }
}
