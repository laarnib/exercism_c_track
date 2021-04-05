#include "armstrong_numbers.h"
#include<math.h>

int count_digits(int num);

bool is_armstrong_number(int candidate)
{
    int sum = 0, numOfDigits = 0, number = candidate;

    if (candidate < 10)
    {
        return true;
    }
    else
    {
        numOfDigits = count_digits(number);
        while (number > 0)
        {
            sum += pow((number % 10), numOfDigits);
            number /= 10;
        }

        return sum == candidate ? true: false;
    }
}


int count_digits(int num)
{
    int count = 0;
    while (num > 0)
    {
        ++count;
        num /= 10;
    }

    return count;
}
