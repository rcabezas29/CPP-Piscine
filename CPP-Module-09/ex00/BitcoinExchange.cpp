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
        this->btc_history.insert(std::make_pair(date, value));
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    this->btc_history = copy.get_btc_history();
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &op)
{
    if (this == &op)
        return *this;
    this->btc_history = op.get_btc_history();
    return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
    this->btc_history.clear();
}

std::map<std::string, float>    BitcoinExchange::get_btc_history(void) const
{
    return this->btc_history;
}

float   BitcoinExchange::btc_value_for_date(std::string date, float n)
{
    if (n < 0)
        throw BitcoinExchange::ParsingInputFileException("not a positive number");
    if (n > 2147483647.0)
        throw BitcoinExchange::ParsingInputFileException("too large number");
    std::map<std::string, float>::iterator it = this->btc_history.upper_bound(date);
    if (it != this->btc_history.begin())
        --it;
    return it->second * n;
}

bool    BitcoinExchange::check_is_bad_input(std::string date, int ret) const
{
    struct tm tm;
    
    if (ret != 4)
        return true;
    if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
        return true;
    return false;
}
