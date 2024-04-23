#include <iostream>
#include <ctime>

using namespace std;

#define SIZE (20)

int pole[SIZE] = {5, 81, 285, 1, 47, 3, 2, 20, 7, 63, 0, -1, 555, 8, 68, 9, 41, -14, -600, 4989};

void milliseconds() {
    cout << "Aktualny cas od 1. januara 1970: " << time(NULL)*1000 << " ms" << endl;
}

void bubble_sort() {
    for (int bublanie = 0; bublanie < SIZE - 1; bublanie++) {
        for (int i = 0; i < SIZE - bublanie - 1; i++) {
            if (pole[i] > pole[i + 1]) {
                swap(pole[i], pole[i + 1]);
            }
        }
    }
}

void autori() {
    cout << "Autori tohto projektu: Simon Vacek, Boris Bobacik." << endl;
}

int main() {

    return 0;
}