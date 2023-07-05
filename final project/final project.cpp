#include <iostream>
using namespace std;


class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() {}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
};

class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "lingkaran dibuat" << endl;
		cout << "masukkan jejari : ";
		cin >> r;
		setX(r);
	}
	float luas(int r) {
		return 3.14 * r * r;
	}
	float keliling(int r) {
		return 2 * 3.14 * r;
	}
	void cekukuran() {
		float keliling = (getX());
		cout << "Luas Lingkaran = " << luas(getX()) << endl;
		cout << "Keliling Lingkaran = " << keliling << endl;

		if (keliling > 40)
			cout << "Ukuran lingkaran adalah Besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran lingkaran adalah Sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran lingkaran adalah Kecil" << endl;
	}
};
class Persegipanjang :public bidangDatar { 
public:
	void input() {
		int p,l;
		cout << "persegipanjang dibuat" << endl;
		cout << "masukkan panjang : ";
		cin >> p;
		setX(p);
		cout << "masukkan lebar : ";
		cin >> l;
		setY(l);	
	}
	float luas(int p, int l) {
		return p * l;
	}
	float keliling(int p, int l) {
		return 2 * (p + l);
	}
	void cekukuran() {
		float keliling = (getX(), getY());
		cout << "Luas persegipanjang = " << luas(getX(), getY()) << endl;
		cout << "Keliling persegipanjang = " << keliling << endl;

		if (keliling > 40)
			cout << "Ukuran persegipanjang adalah Besar" << endl;
		else if (keliling < 20)
			cout << "Ukuran persegipanjang adalah Sedang" << endl;
		else if (keliling < 10)
			cout << "Ukuran persegipanjang adalah Kecil" << endl;
	}
};
int main() {
	char repeat;
	do {
		bidangDatar* p;

		p = new Lingkaran;
		p->input();
		p->cekUkuran();

		p = new Persegipanjang;
		p->input();
		p->cekUkuran();

		cout << "Apakah anda ingin mengulang program? (Y/N): ";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');

	return 0;

}