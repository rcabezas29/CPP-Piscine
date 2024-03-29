#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <chrono>

class   PmergeMe
{
    private:
        std::vector<int>    v;
        std::deque<int>     dq;
        double              vector_time;
        double              deque_time;

    public:
        PmergeMe(int argc, char **argv);
        PmergeMe(const PmergeMe &copy);
        virtual ~PmergeMe(void);
        PmergeMe    &operator=(const PmergeMe &op);

        std::vector<int>    get_vector(void) const;
        std::deque<int>     get_deque(void) const;
        double              get_vector_time(void) const;
        double              get_deque_time(void) const;

        void        sort(void);

        void        vector_sort(int p, int r);
        void        vectorInsertionSort(int p, int q);
        void        vectorMerge(int p, int q, int r);

        void        deque_sort(int p, int r);
        void        dequeInsertionSort(int p, int q);
        void        dequeMerge(int p, int q, int r);
};
