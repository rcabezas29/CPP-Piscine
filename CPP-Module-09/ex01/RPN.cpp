#include "RPN.hpp"

RPN::RPN(std::string statement)
{
    for (unsigned long i = 0; i < statement.length(); ++i)
    {
        if (isdigit(statement[i]))
        {
            this->st.push(statement[i] - '0');
            continue ;
        }
        else if (isspace(statement[i]))
            continue ;
        if (this->st.size() < 2)
            throw std::runtime_error("Unable to do operation");
        int b = this->st.top();
        this->st.pop();
        int a = this->st.top();
        this->st.pop();
        if (statement[i] == '+')
            this->st.push(a + b);
        else if (statement[i] == '-')
            this->st.push(a - b);
        else if (statement[i] == '*')
            this->st.push(a * b);
        else if (statement[i] == '/')
        {
            if (b == 0)
                throw std::runtime_error("Trying to divide by zero");
            this->st.push(a / b);
        }
        else
        {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
    }
    if (this->st.size() != 1)
        throw std::runtime_error("Invalid syntax");
    this->result = this->st.top();
}

RPN::RPN(const RPN &copy)
{
    this->result = copy.get_result();
    this->st = copy.get_stack();
}

RPN &RPN::operator=(const RPN &op)
{
if (this == &op)
        return *this;
    this->result = op.get_result();
    this->st = op.get_stack();
    return *this;
}

RPN::~RPN(void)
{

}

int RPN::get_result(void) const
{
    return this->result;
}

std::stack<int> RPN::get_stack(void) const
{
    return this->st;
}
