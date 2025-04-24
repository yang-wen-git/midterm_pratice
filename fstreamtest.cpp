#include <iostream>
#include <fstream>

int main() {
    std::string user_file;
    std::string line;
    std::cout << "File name: ";
    std::cin >> user_file;
    char Array[12] = {' '};
    std::ifstream input(user_file);
    input.get(Array, 12);
    std::cout << "Output : " << Array << std::endl;
    for (int i = 0; i < sizeof(Array)/sizeof(Array[0]); i++){
        std::cout << Array[i] << ' ';
    }
    std::cout << std::endl;
    input.close();
}