#pragma once

#include <map>
#include <iostream>

class BitcoinExchange
{
    private:
        std::map<std::string, float>    btc_hisstory;

    public:
        BitcoinExchange(std::string data);
        BitcoinExchange(const BitcoinExchange &copy);
        virtual ~BitcoinExchange(void);
        BitcoinExchange &operator=(const BitcoinExchange &op);
};
