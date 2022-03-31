public class Main {
    
    public static void main(String[] args) throws Exception {
        KoleksiKendaraan KK = new KoleksiKendaraan();
        Kendaraan B1 = new Bus(1, "Damri", 2001, 50);
        Kendaraan M1 = new Mobil(2, "Toyota", 1999, "Dhika");
        Kendaraan MB1 = new Minibus(3, "MerkMinibus", 1700);

        KK.appendKendaraan(B1);
        KK.appendKendaraan(M1);
        KK.appendKendaraan(MB1);
        System.out.println("ISI KOLEKSI KENDARAAN 1 :");
        KK.printAll();
        System.out.println();
        System.out.println("ISI KOLEKSI KENDARAAN 2 :");
        KoleksiKendaraan KK2 = new KoleksiKendaraan();
        KK2.appendKumpulanKendaraan(KK);
        KK2.appendKendaraan(new Bus(4,"BusKeren", 2010, 100));
        KK2.appendKendaraan(new Mobil(5,"Ferrari", 2020, "Mas Rosi"));
        KK2.printAll();
    }

}