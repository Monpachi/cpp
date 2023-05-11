#include <iostream>

int main(int argc, char **argv) {
    if (argc > 1)
        for (int count = 1; count < argc; count++)
            for (size_t i = 0; argv[count][i]; i++)
                std::cout << (char)toupper(argv[count][i]);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
