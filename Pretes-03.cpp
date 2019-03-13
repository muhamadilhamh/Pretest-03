/*
Nama = Muhamad Ilham habib
Kelas = B
NPM = 140810180018
Deskripsi = program output data mahasiswa */

struct r_mhs {
	char npm[14];
	char nama[40];
	float ipk;
};
typedef r_mhs larikMhs[30];

void masukanData(int &n) {
	cout << "masukan data"; cin>>n;
}
void inputMhs(larikMhs& mhw, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Masukan npm "; cin >> mhw.npm;
		cout << " masukan nama"; cin >> mhw.nama;
		cout << "masukan ipk"; cin >> mhw.ipk;
	}
}
void cetakMhs(larikMhs mhs, int n) {
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++) {
			cout << "npm" << mhw.npm << " " << mhw.nama << "" << mhw.ipk;
		}
	}
}
void sortNama(larikMhs mhs, int n) {
	int m, n;
	m = n;
}

int main() {
	larikMhs mhw;
	int n;
	masukanData(n);
	inputMhs(mhw, n);
	sortNama(mhw, n);
		cin.get();
}