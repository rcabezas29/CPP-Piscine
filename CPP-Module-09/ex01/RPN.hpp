#pragma once

#include <stack>
#include <iostream>

class   RPN
{
    private:
        std::stack<std::string>  a;

    public:
        RPN(void);
        RPN(const RPN &copy);
        RPN &operator=(const RPN &op);
        virtual ~RPN(void);
};
