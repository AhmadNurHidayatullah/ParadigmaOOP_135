#ifndef Ibu_h
#define Ibu_h

class ibu {
public:
	string nama;
	vector<Anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "ibu \"" << nama << "\" tidak ada\n";
	}
	void tambahAnak(Anak*);
	void cetakAnak();
};
void ibu::tambahAnak(Anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak() {
	cout << "Daftar Anak dari ibu \"" << this->nama << "\":\n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif