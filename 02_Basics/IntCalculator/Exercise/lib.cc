#include <cstdint>

#include "lib.h"

std::uint32_t modulo(const std::uint32_t number_a, const std::uint32_t number_b)
{
    if (number_b == 0)
    {
        return 0;
    }

    std::uint32_t ret_val;
    std::uint32_t division_result = number_a / number_b;
    ret_val = number_a - (number_b * division_result);
    return ret_val;
}

std::uint32_t sum_of_digits(std::uint32_t number)
{
    std::uint32_t ret_val = 0;
    do
    {
        number /= 10;
        ret_val++;
    }while (number > 0);
    return ret_val;
}

std::uint32_t cross_sum(std::uint32_t number)
{
    std::uint32_t sum = 0;
    while (number > 0)
    {
        std::uint32_t digit = number % 10;

        number /= 10;
        sum += digit;
    }

    return sum;
}
