#include <iostream>
#include <ctime>
using namespace std;

void milliseconds() {
    cout << "Aktualny cas od 1. januara 1970: " << time(NULL)*1000 << " ms" << endl;
}

void autori() {
    cout << "Autori tohto projektu: Simon Vacek, Boris Bobacik." << endl;
}

int main() {

    return 0;
}