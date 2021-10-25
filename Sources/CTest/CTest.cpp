#include "CTest.hpp"

#include <iostream>
#include <string>

const char * getMessage(const char * message)
{
    static const auto new_string = std::string(message);
    return new_string.c_str();
}

const auto lamb = [](const int number) 
{
    static const std::string str {std::to_string(number)};
    return str.c_str();
};

const char * getLambda()
{
    callLambda(lamb, 45);
}

int add(const int value_1 = 0, const int value_2 = 0)
{
    if (value_1 <= 0 || value_2 <= 0) return {};

    const int value = { value_1 + value_2 };
    return value;
}




