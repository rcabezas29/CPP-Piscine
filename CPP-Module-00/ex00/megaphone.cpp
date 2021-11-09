#include <cctype>
#include <iostream>
#include <iterator>
#include <ostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else 
    {
        i = 1;
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            std::cout << " ";
            i++;
        }
    }
    return (0);
}