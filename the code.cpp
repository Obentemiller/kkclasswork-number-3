/*faça um contador de 0 até 1000 repetindo linha a linha, sem usar laços no programa que vai executar essa instrução*/

#include<iostream>

std::string base = R"(import time
)";

int main() {
    std::cout << base << std::endl;

    for(int i = 0; i < 1000; i++) {
        std::cout << "print(\"" << i << "\")" << std::endl;
        std::cout << "time.sleep(1)" << std::endl;
    }
    return 0;
}
