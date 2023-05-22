#ifndef Ibu_h
#define Ibu_h

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "ibu \"" << nama << "\" tidak ada\n;
	}
	void tambahAnak(anak*);
	void cetakAnak();
};