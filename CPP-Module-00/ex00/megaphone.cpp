#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else 
    {
        while (argv[i])
        {
            while (argv[i][j])
            {
                if (argv[i][j] >= 97 && argv[i][j] <= 122)
                    argv[i][j] -= 32;
                
                j++;
            }
            i++;
        }
    }
    return (0);
}