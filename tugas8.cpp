#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> undoStack;
    string dokumen = "";
    string teks;
    int pilihan;

    do {
        cout << "\n";
        cout << "=================================\n";
        cout << "          TEXT EDITOR          \n";
        cout << "=================================\n";
        cout << "1. Ketik Teks\n";
        cout << "2. Undo\n";
        cout << "3. Tampilkan Dokumen\n";
        cout << "4. Keluar\n";
        cout << "=================================\n";
        cout << "Pilih Menu : ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {

        case 1:
            undoStack.push(dokumen);

            cout << "\nMasukkan teks : ";
            getline(cin, teks);

            dokumen += teks + " ";

            cout << "[?] Teks berhasil ditambahkan! :)\n";
            break;

        case 2:
            if (!undoStack.empty()) {
                dokumen = undoStack.top();
                undoStack.pop();

                cout << "[?] Undo berhasil dilakukan! :)\n";
            } else {
                cout << "[!] Tidak ada data untuk di-undo X\n";
            }
            break;

        case 3:
            cout << "\n========== DOKUMEN ==========\n";

            if (dokumen.empty()) {
                cout << "(Dokumen masih kosong !!)\n";
            } else {
                cout << dokumen << endl;
            }

            cout << "=============================\n";
            break;

        case 4:
            cout << "\nTerima kasih telah menggunakan program ini.\n";
            cout << "Program selesai...\n";
            break;

        default:
            cout << "[!] Menu tidak tersedia.\n";
        }

    } while (pilihan != 4);

    return 0;
}
