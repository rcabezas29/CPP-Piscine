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
        std::chrono::duration<double>   vector_time;
        std::chrono::duration<double>   deque_time;

    public:
        PmergeMe(int argc, char **argv);
        PmergeMe(const PmergeMe &copy);
        virtual ~PmergeMe(void);
        PmergeMe    &operator=(const PmergeMe &op);

        std::vector<int>    get_vector() const;
        std::deque<int>    get_deque() const;

        std::vector<int>    get_vtime() const;
        std::vector<int>    get_dqtime() const;


        std::vector<int>    get_vector(void) const;
        std::deque<int>     get_deque(void) const;
        std::chrono::duration<double>   get_vector_time(void) const;
        std::chrono::duration<double>   get_deque_time(void) const;

        void        sort(void);

        void        vector_sort(int p, int r);
        void        vectorInsertionSort(int p, int q);
        void        vectorMerge(int p, int q, int r);

        void        deque_sort(int p, int r);
        void        dequeInsertionSort(int p, int q);
        void        dequeMerge(int p, int q, int r);
};
