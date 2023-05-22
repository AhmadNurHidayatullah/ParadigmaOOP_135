#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "pasien \ "" << nama <<"" ada\n";
	}
	~pasien() {
		cout<< "pasien \""<< nama << "\" tidak ada\n";
	}
	void tambahDokter(dokter*);
	void cetakDokter();
};

class dokter {
public:
	string nama;
	vector<pasien*>daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "dokter \"" << nama << "\" ada\n";
	}
	~dokter() {
		cout << "DOkter \"" << nama << "\" tidak ada\n";
	}

	void tambahpasien(pasien*);
	void cetakpasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void dokter::tambahpasien(pasien* pPasien) {
	daftar_pasien.push_back(pPasien);
	pPasien->tambahDokter(this);
}
void dokter::cetakpasien() {
	cout << "Daftar pasien dari dokter \"" << this->nama << "\":\n";
	for (auto& a : daftar_pasien) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	dokter* varDokter1 = new dokter("dr.Budi");
	dokter* varDokter2 = new dokter("dr.tono");
	pasien* varPasien1 = new pasien("andi");
	pasien* varpasien2 = new pasien("lia");

	varDokter1->tambahpasien(varPasien1);
	varDokter1->tambahpasien(varpasien2);
	varDokter2->tambahpasien(varPasien1);

	varDokter1->cetakpasien();
	varDokter2->cetakpasien();
	varPasien1->cetakDokter();
	varpasien2->cetakDokter();

	delete varPasien1;
	delete varpasien2;
	delete varDokter1;
	delete varDokter2;

	return 0;
}
