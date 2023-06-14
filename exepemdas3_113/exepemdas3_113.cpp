#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujusangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}

	virtual void input() {}					    //fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x

	virtual float Luas(int a) {
		return 0;
	}											//fungsi untuk menghitung luas

	virtual float Keliling(int a) {
		return 0;
	}
	void setX(int a) {							//fungsi untuk memberikn/mengirim nilai pada x
		this->x = a;
	}
	int getX() {									//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran:public bidangDatar {
public:
	Lingkaran(int a) :
		bidangDatar() {
		cout << "Lingkaran dibuat\n" << endl;
		cout << "Masukkan jejari\n" << endl; 

class Bujursangkar :public bidangDatar {
	Bujursangkar(int a) :
		bidangDatar() {
		cout << "Bujursangkar dibuat\n" << endl;
		cout << "Masukkan sisi\n" << endl;

int main() {

	bidangDatar lingkaran;
	int a;
	Lingkaran.input();
	Jejari Lingkaran(6);

	cout << "Luas Lingkaran: " << Lingkaran.Luas(3.14 * 6 * 6) << endl;
	cout << "keliling.Lingkaran(3.14 * 12) << endl;
	Lingkaran.getX(6);

	bidangDatar bujursangkar;
	Bujursangkar.setX(5);
	cout << Bujursangkar.getX(5) << endl;

	return 0; 







	}
};	
	}