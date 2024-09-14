#include <iostream>

int main() {
#if defined(__clang__)
    std::cout << "Clang version: " << __clang_major__ << "." << __clang_minor__
              << "." << __clang_patchlevel__ << std::endl;
#elif defined(__GNUC__) || defined(__GNUG__)
    std::cout << "GCC version: " << __GNUC__ << "." << __GNUC_MINOR__ << "."
              << __GNUC_PATCHLEVEL__ << std::endl;
#elif defined(_MSC_VER)
    std::cout << "MSVC version: " << _MSC_VER << std::endl;
#else
    std::cout << "Unknown compiler" << std::endl;
#endif
    return 0;
}
