// 1. Algoritma Insertion sort adalah metode pengurutan dengan mencapai nilai data terkecil dimulai dari datadi posisi 0 hingga diposis N-1.
// 2. Algoritma Selection sort adalah metode sederhana untuk mengurutkan data dalam suatu larik atau daftar.
// 3. Algoritma pemrograman adalah langkah berurutan dan terstruktur untuk membuat program. Jadi, setiap program komputer seperti software, apps, hingga sistem operasi dibangun dari algoritma pemrograman.

#include <iostream>
using namespace std;

int i, n, temp, j;
int arr[63];

Void input(){
	int i, n, temp, j;
	int arr[63];

	for (i = 1; i <= n - 1; i++) {
		temp = arr[i];
		j = 1 - 1;
		while (j >= 0 && arr(j) > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukkan elemen array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Nama ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
	return 0;
}


