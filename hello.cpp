#include "hello.hpp"
#include <iostream>

TEST::HelloWorld::HelloWorld() {}
TEST::HelloWorld::~HelloWorld() {}
void TEST::HelloWorld::operator()() { std::cout << "Hello docker! \n"; }
