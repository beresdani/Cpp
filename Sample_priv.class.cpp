#include <iostream>
#include "Sample_priv.class.hpp"

Sample::Sample( void ) {

    std::cout << "Constructor called" << std::endl;

    this->publicFoo = 0;
    std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
    this->_privateFoo = 0;
    std::cout << "this->privateFoo: " << this->_privateFoo << std::endl;

    this->publicBar();
    this->_privateBar();

    return;

}

Sample::~Sample( void ) {

    std::cout << "Deconstructor called" << std::endl;
    return;
}

void    Sample::publicBar( void ) const {

    std::cout << "Member function publicBar called" << std::endl;
    return;
}

void    Sample::_privateBar( void ) const {

    std::cout << "Member function _privateBar called" << std::endl;
    return;
}