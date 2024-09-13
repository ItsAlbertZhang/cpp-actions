#include <iostream>

int main() {
#if defined(_WIN32)
    std::cout << "hello, Windows!" << std::endl;
#elif defined(__APPLE__) && defined(__MACH__)
    std::cout << "hello, MacOS!" << std::endl;
#elif defined(__linux__)
    std::cout << "hello, Linux!" << std::endl;
#else
    std::cout << "Unknown operating system" << std::endl;
#endif
    return 0;
}
