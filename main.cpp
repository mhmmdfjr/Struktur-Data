#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int max = 0, min = 0;

    // membaca data dan mengisi elemen-elemen array
    for (int i = 0; i < SIZE; i++) {
        cout << "Masukkan nilai ke-" << i+1 << ": ";
        cin >> arr[i];

        // mencari nilai maksimum
        if (arr[i] > max) {
            max = arr[i];
        }

        // mencari nilai minimum
        if (arr[i] < min || i == 0) {
            min = arr[i];
        }
    }

    // menampilkan isi elemen-elemen array
    cout << "\nIsi array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    // menampilkan nilai paling maksimum dan paling minimum
    cout << "\n\nNilai paling maksimum: " << max << endl;
    cout << "Nilai paling minimum: " << min << endl;

    return 0;
}