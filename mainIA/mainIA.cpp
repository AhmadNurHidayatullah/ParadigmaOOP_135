#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varibu = new ibu("dini");
	ibu* varibu2 = new ibu("novi");
	Anak* varAnak1 = new Anak("tono");
	Anak* varAnak2 = new Anak("rini");
	Anak* varAnak3 = new Anak("dewi");

	varibu->tambahAnak(varAnak1);
	varibu->tambahAnak(varAnak2);
	varibu->tambahAnak(varAnak3);
	varibu->tambahAnak(varAnak1);

	varibu->cetakAnak();
	varibu2->cetakAnak();

	delete varibu;
	delete varibu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}