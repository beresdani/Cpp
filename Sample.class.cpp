#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi( f ), qd( 42) {

    std::cout << "Constructor called" << std::endl;
    
    //this->foo = 42;
    //std::cout << "this->foo: " << this->foo << std::endl;

    this->bar();
    
    return;
}

Sample::~Sample(void){

    std::cout << "Destructor called" << std::endl;
    return;
}

void    Sample::bar( void ) const {

    std::cout << "this->pi = " << this->pi << std::endl;
    std::cout << "this->qd = " << this->qd << std::endl;
    return;
}