#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <limits>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    BitcoinExchange btc("data.csv");
    std::ifstream   input_file(argv[1]);

    input_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string line;
    while (std::getline(input_file, line))
    {

        try
        {
            float w;
            int x,y,z;
            int ret = sscanf(line.c_str(), "%d-%d-%d | %f", &x, &y, &z, &w);

            if (ret != 4)
            {
                throw BitcoinExchange::ParsingInputFileException("bad input => " + line);
                continue ;
            }

            std::string date = line.substr(0, line.find(' '));
            float value = std::atof((line.substr(line.find(" | ") + 3, std::string::npos).c_str()));


            float result = btc.btc_value_for_date(date, value);
            std::cout << date << " => " << value << " = " << result << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    input_file.close();
    return 0;
}
