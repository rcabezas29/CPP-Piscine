#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string data)
{
    std::fstream    data_file(data);

    data_file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string line;
    while (std::getline(data_file, line))
    {
        std::string date = line.substr(0, line.find(','));
        float value = std::atof((line.substr(line.find(",") + 1, std::string::npos).c_str()));
        this->btc_hisstory.insert(std::make_pair(date, value));
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    (void)copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &op)
{
    (void)op;
    return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
}

float   BitcoinExchange::btc_value_for_date(std::string date, float n)
{
    return this->btc_hisstory.lower_bound(date)->second * n;
}
