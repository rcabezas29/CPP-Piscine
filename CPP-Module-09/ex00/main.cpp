#include "BitcoinExchange.hpp"
#include <fstream>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    BitcoinExchange btc("data.cssv");
    std::ifstream   input_file(argv[1]);

    std::string line;
    while (std::getline(input_file, line))
    {
        
    }
}
