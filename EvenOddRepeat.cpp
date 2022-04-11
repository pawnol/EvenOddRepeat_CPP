/*
Even Odd Repeat
Pawelski
4/10/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    std::string repeat = "Y";
    while (repeat == "Y")
    {
        int number;
        std::cout << "Enter a number >> ";
        std::cin >> number;
        if (number % 2 == 0)
        {
            std::cout << number << " is even.\n";
        }
        else
        {
            std::cout << number << " is odd.\n";
        }
        std::cout << "Would you like to check another number? (Y/N) >> ";
        std::cin >> repeat;
        std::cout << std::endl;
    }
    return 0;
}