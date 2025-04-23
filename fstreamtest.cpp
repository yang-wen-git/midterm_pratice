#include <iostream>
#include <fstream>

int main() {
    std::ifstream input_file;
    std::ofstream output_file;
    std::string line;
    input_file.open("input.txt");
    output_file.open("output.txt");
    if (input_file.is_open()){
        while (getline(input_file, line)){
            std::cout << line << '\n';
        } input_file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
    if (output_file.is_open()) {
        std::string new_input;
        output_file << "Yang Wen-li" << std::endl;
        output_file.close();
    }
    if (input_file.is_open()){
        while (getline(input_file, line)){
            std::cout << line << '\n';
        } input_file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
    return 0;
}