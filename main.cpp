#include <iostream>
#include "Sample_priv.class.hpp"

int     main() {

    Sample  instance;
    instance.publicFoo = 42;
    std::cout << "instance.publicFoo: " << std::endl;

    instance.publicBar();

    return 0;
}