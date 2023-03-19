#pragma once

#include <stack>
#include <iostream>

class   RPN
{
    private:
        std::stack<int>  st;
        int result;

    public:
        RPN(std::string statement);
        RPN(const RPN &copy);
        RPN &operator=(const RPN &op);
        virtual ~RPN(void);

        int get_result(void) const;
};
