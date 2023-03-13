#include <cstdint>
#include <iostream>
#include <cmath>

#include "lib.h"

double calculate_pi(const std::uint32_t num_iterations)
{
    double pi = 0.0;
    for (uint32_t i = 0; i < num_iterations; i++)
    {
        pi += (1.0 / (4.0 * i + 1.0)) - (1.0 / (4.0 * i + 3));
    }

    return pi * 4.0;
}

void print_dec_to_bin(std::uint8_t value)
{
    std::int32_t count = 0;
    while((value / pow(2,count)) > 1)
    {
        count++;
    }
    count--;
    std::cout << "Binary: 0b";
    while(count >= 0)
    {
        if((value / pow(2,count)) >= 1)
        {
            std::cout << "1";
            value -= static_cast<std::uint8_t>(pow(2, count));
        }
        else
        {
            std::cout << "0";
        }

        count--;
    }
    std::cout << std::endl;

}
