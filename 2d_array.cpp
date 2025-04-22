#include <iostream>

int main() {

    // declarer an int** in stack storage named omega and initialize it to identify a newly allocated 4x4 dynamic 2d array
    int** omega = new int*[4];
    for(int i = 0; i < 4; i++){
        omega[i] = new int[4];
    }

    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            omega[i][j] = 0;
        }
    }

    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            std::cout << omega[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 4; i++){
        delete[] omega[i];
    }
    delete[] omega;
}