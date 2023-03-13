#include <cstddef>
#include <cstdint>
#include <iostream>

#include "lib.h"

void remove_duplicates(std::int32_t *array, std::size_t &length)
{
    if ((array != nullptr) && (length != 0))
    {
        for (std::size_t i = 0; i < length-1; i++)
        {
            for (std::size_t j = i+1; j < length; j++)
            {
                if (array[i] == array[j])
                {
                    for(std::size_t k = j; k < length-1; k++)
                    {
                        std::int32_t temp = array[k];
                        array[k] == array[k+1];
                        array[k+1] == temp;
                    }
                    j--;
                    length--;
                    break;
                }
            }
        }
    }
    else
    {
        std::cout << "Array is not valid!" << std::endl;
    }
}

void rotate_left(std::int32_t *array, std::size_t length)
{
    if ((array != nullptr) && (length != 0))
    {
        std::int32_t temp = array[0];
        for (std::size_t i = length; i > 0; i++)
        {
            if(i == length)
            {
                temp = array[0];
            }
            else
            {
                temp = array[i];
            }

            array[]
        }

    }
    else
    {
        std::cout << "Array is not valid!" << std::endl;
    }
}

void rotate_right(std::int32_t *array, std::size_t length)
{
}
