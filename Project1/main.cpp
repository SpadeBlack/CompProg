#include <iostream>


class mainClass {
public:
    const mainClass() {
        int k = 100;
    }
    int jinga() {
        int k = 9;
        return k;
    }
};

int jaladalre() {
    mainClass m;
    int kk = m.jinga();
    return 10 * kk;
}

int main()
{
    std::cout << "Hello World33333!\n";
    std::cout << "lol";
    int kk = jaladalre();
    std::cout << kk;
}



