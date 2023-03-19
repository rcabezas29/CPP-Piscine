#include "RPN.hpp"

RPN::RPN(std::string statement)
{
    for (unsigned long i = 0; i < statement.length(); ++i)
    {
        if (isdigit(statement[i]))
            this->st.push(statement[i] - '0');
        else if (statement[i] == '+')
        {
            int b = this->st.top();
            this->st.pop();
            int a = this->st.top();
            this->st.pop();
            this->st.push(a + b);
        }
        else if (statement[i] == '-')
        {
            int b = this->st.top();
            this->st.pop();
            int a = this->st.top();
            this->st.pop();
            this->st.push(a - b);
        }
        else if (statement[i] == '*')
        {
            int b = this->st.top();
            this->st.pop();
            int a = this->st.top();
            this->st.pop();
            this->st.push(a * b);
        }
        else if (statement[i] == '/')
        {
            int b = this->st.top();
            this->st.pop();
            int a = this->st.top();
            this->st.pop();
            this->st.push(a / b);
        }
        else
        {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
    }
    this->result = this->st.top();
}

RPN::RPN(const RPN &copy)
{
    (void)copy;
}

RPN &RPN::operator=(const RPN &op)
{
    (void)op;
    return *this;
}

RPN::~RPN(void)
{

}

int RPN::get_result(void) const
{
    return this->result;
}
