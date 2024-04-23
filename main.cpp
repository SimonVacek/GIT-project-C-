#include <iostream>
#include <ctime>

using namespace std;

#define SIZE (20)

int pole[SIZE] = {5, 81, 285, 1, 47, 3, 2, 20, 7, 63, 0, -1, 555, 8, 68, 9, 41, -14, -600, 4989};

void milliseconds() {
    cout << "Aktualny cas od 1. januara 1970: " << time(NULL)*1000 << " ms" << endl;
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

int main() {
    
    return 0;
}