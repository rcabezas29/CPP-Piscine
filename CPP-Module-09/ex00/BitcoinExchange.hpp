#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <limits>

class BitcoinExchange
{
    private:
        std::map<std::string, float>    btc_history;

    public:
        BitcoinExchange(std::string data);
        BitcoinExchange(const BitcoinExchange &copy);
        virtual ~BitcoinExchange(void);
        BitcoinExchange &operator=(const BitcoinExchange &op);

        std::map<std::string, float>    get_btc_history(void) const;

        float   btc_value_for_date(std::string date, float n);

        class ParsingInputFileException : public std::exception {
            private:
                const std::string message;

            public:
                ParsingInputFileException(const std::string e) : message(e) {}
                virtual const char * what() const throw()
                {
                    return this->message.c_str();
                }
        };
};
