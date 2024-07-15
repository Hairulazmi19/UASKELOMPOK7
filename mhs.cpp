#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <vector>
#include <string>

struct Mahasiswa {
    std::string NIM;
    std::string nama;
    std::string jurusan;
    float nilai;
};

void clearScreen();
void tambahMahasiswa(std::vector<Mahasiswa>& dataMahasiswa);
#endif // MAHASISWA_H
