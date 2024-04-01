#include <iostream>
#include <string>
int main()
{
    int ym;
    while (std::cin >> ym)
    {
        if (ym < 10000)
        {
            if (ym < 2200)
            {
                std::cout << "20";
            }
            else
            {
                std::cout << "19";
            }
        }
        if (ym / 100 < 10)
        {
            std::cout << '0';
        }
        std::cout << ym / 100 << '-';
        if (ym % 100 < 10)
        {
            std::cout << '0';
        }
        std::cout << ym % 100 << std::endl;
    }
    return 0;
}