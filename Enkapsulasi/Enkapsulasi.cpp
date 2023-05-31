#include<iostream>
using namespace std;

class RemoteLampu {
private:
	string saklarNo[10];
public:
	void SetSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string GetSaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
	RemoteLampu lampuRumah;

	lampuRumah.SetSaklarNo(0, "Lampu teras Rumah");
	lampuRumah.SetSaklarNo(1, "Lampu ruang Tamu");
	lampuRumah.SetSaklarNo(2, "Lampu kamar Tidur");
	lampuRumah.SetSaklarNo(3, "Lampu Dapur");

	cout << lampuRumah.GetSaklarNo(0) << endl;
	cout << lampuRumah.GetSaklarNo(1) << endl;
	cout << lampuRumah.GetSaklarNo(2) << endl;
	cout << lampuRumah.GetSaklarNo(3) << endl;

	return 0;
}