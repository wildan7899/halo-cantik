#include <iostream>


int main () {

    int angkaBulat = 50;
    double angkaPecahan = angkaBulat;

    double nilai = 85.75;
    int bulatNilai = (int)nilai;
    


    std::cout << "Casting otomatis (integer ke double): " << angkaPecahan
    << std::endl;
    std::cout << "Casting manual (memaksa double ke integer): " << bulatNilai << std::endl;

    return 0;
}