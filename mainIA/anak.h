#ifndef anak.h
#define anak.h

class Anak {
public:
	string nama;
	Anak(string pNama) :nama(pNama) {
		cout << "Anak \"" << nama << "\" ada\n";
	}
	~Anak() {
		cout << "Anak \"" << nama << "\" tidak ada\n";
	}
};
#endif
