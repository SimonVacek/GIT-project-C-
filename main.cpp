#include <iostream>
#include <ctime>

using namespace std;

#define SIZE (20)

int pole[SIZE] = {5, 81, 285, 1, 47, 3, 2, 20, 7, 63, 0, -1, 555, 8, 68, 9, 41, -14, -600, 4989};

void milliseconds() {
    cout << "Aktualny cas od 1. januara 1970: " << time(NULL)*1000 << " ms" << endl;
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

int main() {
    
    return 0;
}