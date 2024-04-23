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

void selection_sort() {
    for (int velkost_zoradenej_casti = 0; velkost_zoradenej_casti < SIZE - 1; velkost_zoradenej_casti++) {
        int index_najmensej_polozky_v_nezoradenej_casti = velkost_zoradenej_casti;
        for (int i = velkost_zoradenej_casti + 1; i < SIZE; i++) {
            if (pole[i] < pole[index_najmensej_polozky_v_nezoradenej_casti]) {
                index_najmensej_polozky_v_nezoradenej_casti = i;
            }
        }
        swap(pole[index_najmensej_polozky_v_nezoradenej_casti], pole[velkost_zoradenej_casti]);
    }
}

void insertion_sort() {
    int i, key, j;
    for (i = 1; i < SIZE; i++) {
        key = pole[i];
        j = i - 1;
        while (j >= 0 && pole[j] > key) {
            pole[j + 1] = pole[j];
            j = j - 1;
        }
        pole[j + 1] = key;
    }
}

void autori() {
    cout << "Autori tohto projektu: Simon Vacek, Boris Bobacik." << endl;
}

int main() {

    return 0;
}