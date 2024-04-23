#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

#define SIZE (20)

long time() {
    long millisec_since_epoch = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    return millisec_since_epoch;
}

void milliseconds() {
    cout << "Aktualny cas od 1. januara 1970: " << time(NULL)*1000 << " ms" << endl;
}

void bubble_sort() {
    int pole[SIZE] = {5, 81, 285, 1, 47, 3, 2, 20, 7, 63, 0, -1, 555, 8, 68, 9, 41, -14, -600, 4989};
    for (int bublanie = 0; bublanie < SIZE - 1; bublanie++) {
        for (int i = 0; i < SIZE - bublanie - 1; i++) {
            if (pole[i] > pole[i + 1]) {
                swap(pole[i], pole[i + 1]);
            }
        }
    }
}

void selection_sort() {
    int pole[SIZE] = {5, 81, 285, 1, 47, 3, 2, 20, 7, 63, 0, -1, 555, 8, 68, 9, 41, -14, -600, 4989};
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
    int pole[SIZE] = {5, 81, 285, 1, 47, 3, 2, 20, 7, 63, 0, -1, 555, 8, 68, 9, 41, -14, -600, 4989};
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
    long start = time();
    for (int i = 0; i < 100000; i++) {
        bubble_sort();
    }
    long end = time() - start;
    cout << "Trvanie bubble sortu: " << end << " ms" << endl;

    start = time();
    for (int i = 0; i < 100000; i++) {
        selection_sort();
    }
    end = time() - start;
    cout << "Trvanie selection sortu: " << end << " ms" << endl;

    start = time();
    for (int i = 0; i < 100000; i++) {
        insertion_sort();
    }
    end = time() - start;
    cout << "Trvanie insertion sortu: " << end << " ms" << endl;

    return 0;
}