#include <bits/stdc++.h>
#include <string>

using namespace std; 

class Kendaraan{
    private:
        int nomorKendaraan;
        string kategori;
        string merk; 
        int tahunKeluaran;
    public:
        //ctor
        Kendaraan(){
            this->nomorKendaraan = 0;
            this->kategori = "Mobil";
            this->merk = "XXX";
            this->tahunKeluaran = 0;
        }
        // user-defined ctor
        Kendaraan(int nomorKendaraan, string kategori, string merk, int tahunKeluaran){
            this->nomorKendaraan = nomorKendaraan;
            this->kategori = kategori;
            this->merk = merk;
            this->tahunKeluaran = tahunKeluaran;
        }
        // cctor
        Kendaraan(const Kendaraan& k){
            this->nomorKendaraan = k.nomorKendaraan;
            this->kategori = k.kategori;
            this->merk = k.merk;
            this->tahunKeluaran = k.tahunKeluaran;
        };
        // dtor: tidak diperlukan karena mengalokasikan memori heap
        ~Kendaraan(){};

        // getters
        int getNomorKendaraan(){
            return this->nomorKendaraan;
        }

        string getKategori(){
            return this->kategori;
        }

        string getMerk(){
            return this->merk;
        }

        int getTahunKeluaran(){
            return this->tahunKeluaran;
        }

        // printInfo
        virtual void printInfo(){
            cout << "Nomor Kendaraan: " << this->getNomorKendaraan() << endl;
            cout << "Kategori: " << this->getKategori() << endl;
            cout << "Merk: " << this->getMerk() << endl;
            cout << "Tahun Keluaran: " << this->getTahunKeluaran() << endl;
        };

        // biayaSewa
        int biayaSewa(int lamaSewa){
            int biaya = 0;
            if (this->getKategori() == "Bus" || this->getKategori() == "Minibus" || this->getKategori() == "Mobil"){
                if(this->getKategori() == "Bus"){
                    biaya = lamaSewa * 1000000;
                }else if (this->getKategori() == "Minibus"){
                    if (lamaSewa<=5){
                        biaya = 5000000;
                    }else if (lamaSewa<5){
                        biaya = 5000000 + 500000 * (lamaSewa-5);
                    }
                }else if (this->getKategori() == "Mobil"){
                    biaya = lamaSewa * 500000;
                }
            }
            return 0;
        };
};

class KoleksiKendaraan{
    private:
        Kendaraan* kumpulanKendaraan;
        int size; 
        int neff; 
    public:
        //ctor
        KoleksiKendaraan(){
            this->kumpulanKendaraan = new Kendaraan[100];
            this->size = 100;
            this->neff = 0;
        }
        // user-defined ctor
        KoleksiKendaraan(int size){
            this->kumpulanKendaraan = new Kendaraan[size];
            for (int i = 0; i < size; i++){
                this->kumpulanKendaraan[i] = Kendaraan();
            }
            this->size = size;
            this->neff = 0;
        }
        // cctor
        KoleksiKendaraan(const KoleksiKendaraan& k){
            this->kumpulanKendaraan = new Kendaraan[k.size];
            for (int i = 0; i < k.size; i++){
                this->kumpulanKendaraan[i] = k.kumpulanKendaraan[i];
            }
            this->size = k.size;
            this->neff = k.neff;
        };
        // dtor
        KoleksiKendaraan(){
            delete[] this->kumpulanKendaraan;
        }
        
        void printAll(){
            // mencetak data semua kendaraan dalam suatuKoleksiKendaraan; 
            // dilakukan dengan mengirimkanmessagePrintInfo kepada setiap 
            // Kendaraan yang disimpan dalam KoleksiKendaraan.
            for (int i = 0; i < this->neff; i++){
                this->kumpulanKendaraan[i].printInfo();
            }
        };

        // operator<<(Kendaraan){
        //     // menambahkan sebuahKendaraan ke dalam array of Kendaraan sebagaielemen yang terakhir. Diasumsikan selalu ada tempat di memory array.
        // };

        // operator<<(KoleksiKendaraan){
        //    // menambahkan semuaKendaraan dari KoleksiKendaraan lain ke dalam array Kendaraan. Jika banyaknya Kendaraan yang akanditambahkan melebihi kapasitas array, maka yang ditampung hanya sejumlah kendaraan yang dapatdimuat.
        // };

};
class Bus : public Kendaraan{
    private:
        int kapasitas;
    public:
        //ctor
        Bus(): Kendaraan(){
            this->kapasitas = 0;
        }
        // user-defined ctor
        Bus(int kapasitas, int nomorKendaraan, string kategori, string merk, int tahunKeluaran): Kendaraan(nomorKendaraan, kategori, merk, tahunKeluaran){
            this->kapasitas = kapasitas;
        }

        // cctor
        Bus(const Bus& b): Kendaraan(b){
            this->kapasitas = b.kapasitas;
        }

        // dtor: tidak diperlukan karena mengalokasikan memori heap
        ~Bus(){};

        // getters
        int getKapasitas(){
            return this->kapasitas;
        }

        void printInfo(){
            Kendaraan::printInfo();
            cout << "Kapasitas: " << this->getKapasitas() << endl;
        }
};

class Mobil : public Kendaraan{
    private:
        string supir;
    public:
        //ctor
        Mobil(): Kendaraan() {
            this->supir = "";
        }
        // user-defined ctor
        Mobil(string supir, int nomorKendaraan, string kategori, string merk, int tahunKeluaran): Kendaraan(nomorKendaraan, kategori, merk, tahunKeluaran){
            this->supir = supir;
        }
        // cctor
        Mobil(const Mobil& m): Kendaraan(m){
            this->supir = m.supir;
        }
        // dtor: tidak diperlukan karena mengalokasikan memori heap
        ~Mobil(){};

        // getters
        string getSupir(){
            return this->supir;
        }

        void printInfo(){
            Kendaraan::printInfo();
            cout << "Supir: " << this->getSupir() << endl;
        }
};

class Minibus : public Kendaraan{
    public:
        //ctor
        Minibus(): Kendaraan(){}

        // user-defined ctor
        Minibus(int nomorKendaraan, string kategori, string merk, int tahunKeluaran): Kendaraan(nomorKendaraan, kategori, merk, tahunKeluaran){}

        // cctor
        Minibus(const Minibus& m) : Kendaraan(m) {}

        // dtor: tidak diperlukan karena mengalokasikan memori heap
        ~Minibus(){};
};