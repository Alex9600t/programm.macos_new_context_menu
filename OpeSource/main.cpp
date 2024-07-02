#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <file>" << std::endl;
        return 1;
    }

    std::string filePath = argv[1];
    std::cout << "You selected: " << filePath << std::endl;

    std::string command = "open -a TextEdit " + filePath;
    std::system(command.c_str());

    return 0;
}
