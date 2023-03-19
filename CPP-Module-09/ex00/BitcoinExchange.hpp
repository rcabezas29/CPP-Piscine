#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <limits>

class BitcoinExchange
{
    private:
        std::map<std::string, float>    btc_hisstory;

    public:
        BitcoinExchange(std::string data);
        BitcoinExchange(const BitcoinExchange &copy);
        virtual ~BitcoinExchange(void);
        BitcoinExchange &operator=(const BitcoinExchange &op);

        float   btc_value_for_date(std::string date, float n);
};
