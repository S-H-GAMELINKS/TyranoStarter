#include <iostream>
#include <filesystem>
#include <string>

namespace sf = std::filesystem

void CopyTyrano(const fs::path& path, const std::string& tyrano_path, const std::string& dir){

    fs::path tyrano = tyrano_path + dir;

    fs::copy(tyrano, path, fs::copy_options::recursive);

    std::cout << "Create Tyrano Template!" << std::endl;
}

int main(int argc, char* argv[]) {

    const std::string& tyrano_path = std::getenv("TYRANO");

    CopyTyrano(argv[1], tyrano_path);

    return 0;
}