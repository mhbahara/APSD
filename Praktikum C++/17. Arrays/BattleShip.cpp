#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // Kami memasukkan "1" untuk menunjukkan bahwa ada kapal.
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };

    // Lacak berapa banyak tembakan yang berhasil dan berapa banyak giliran yang telah dimainkan dalam variabel ini
    int hits = 0;
    int numberOfTurns = 0;
    int JumlahShip = 10;

    // Biarkan pemain terus bermain sampai mereka berhasil menyerang keempat kapal
    while (hits < JumlahShip) {

        // menampilkan array seriap looping
        for (int i = 0; i < sizeof(ships) / sizeof(int); i++) {
            for (int j = 0; j < sizeof(ships) / sizeof(int); j++) {
                std::cout << ships[i][j] << "   ";
            }
        std::cout << std::endl;
        }

        int row, column;

        cout << "Memilih koordinat\n";

        // Mintalah pemain untuk memilih baris
        cout << "Pilih nomor baris antara 0 dan 3: ";
        cin >> row;

        // Mintalah pemain untuk memilih kolom
        cout << "Pilih nomor kolom antara 0 dan 3: ";
        cin >> column;

        // Periksa apakah kapal ada di koordinat tersebut
        if (ships[row][column]) {
            // Jika pemain berhasil menyerang kapal, hapus kapal tersebut dengan mengatur nilainya menjadi nol.
            // ships[row][column] = 0;

            // Tingkatkan hit counter
            hits++;

            // Beritahu pemain bahwa mereka telah berhasil menyerang kapal dan berapa banyak kapal yang tersisa
            cout << "Tertembak! " << (JumlahShip - hits) << " ship tersisa.\n\n";
        } else {
            // Beritahu pemain bahwa mereka gagal menyerang
            cout << "Meleset\n\n";
        }
        

        // mengganti nilai 1 menjadi 0
        for (int i = 0; i < (JumlahShip - hits); i++) {
            for (int j = 0; j < (JumlahShip - hits); j++) {
                if (ships[i][j] == 1){
                ships[i][j] = 0;
                }
            } 
        }
        // mengganti randon 0 dengan 1
        for (int i = 0; i < (JumlahShip - hits); i++){
            int nilaiRandom = rand() % 4;
            ships[i][nilaiRandom] = 1;
        }
        // Hitung berapa banyak giliran yang telah dimainkan oleh pemain
        numberOfTurns++;

    }
    cout << "Menang!\n";
    cout << "Anda menang dalam " << numberOfTurns  << " kali";
      
    return 0;
}