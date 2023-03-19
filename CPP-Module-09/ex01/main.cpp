#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "ERROR" << std::endl;
        return 1;
    }
    RPN rpn_calculator(argv[1]);
    std::cout << rpn_calculator.get_result() << std::endl;
}