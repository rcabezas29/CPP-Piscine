#include "PmergeMe.hpp"

void    print_before(int argc, char **argv)
{
    std::cout << "Before: ";
    for (int i = 1; i <= argc -1; ++i)
        std::cout << argv[i] << ((i != argc - 1) ? " " : "\n");
}

void    print_after(std::vector<int> v)
{
    std::cout << "After: ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << ((it != v.end() - 1) ? " " : "\n");
}

int main(int argc, char **argv)
{
    PmergeMe    sorter(argc, argv);

    print_before(argc, argv);
    sorter.sort();
    print_after(sorter.get_vector());

    std::cout << "Time to process a range of " << sorter.get_vector().size() << " elements with std::vector : " << sorter.get_vector_time().count() << " ms" << std::endl;
    std::cout << "Time to process a range of " << sorter.get_deque().size() << " elements with std::deque : " << sorter.get_deque_time().count() << " ms" << std::endl;
}
