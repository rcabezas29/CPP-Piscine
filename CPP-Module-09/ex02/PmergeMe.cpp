#include "PmergeMe.hpp"

std::vector<std::string>	ft_split(const std::string &s, std::string seperator)
{
	std::vector<std::string>	output;
	std::string::size_type		prev_pos = 0, pos = 0;

	while (s.substr(pos, seperator.length()) == seperator)
		pos += seperator.length(), prev_pos += seperator.length();
	while ((pos = s.find(seperator, pos)) != std::string::npos)
	{
		std::string	substring(s.substr(prev_pos, pos - prev_pos));
		output.push_back(substring);
		prev_pos = pos += seperator.size();
	}
	output.push_back(s.substr(prev_pos, pos - prev_pos));
	return output;
}

PmergeMe::PmergeMe(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
    {
        std::vector<std::string>    splitted_args = ft_split(argv[i], " ");
        for (std::vector<std::string>::iterator it = splitted_args.begin(); it != splitted_args.end(); ++it)
        {
            int n = std::atoi(it->c_str());
            if (n < 0)
            {
                std::cerr << "ERROR" << std::endl;
                exit(1);
            }
            this->v.push_back(n);
            this->dq.push_back(n);
        }
    }
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    this->v = copy.get_vector();
    this->dq = copy.get_deque();
}

PmergeMe::~PmergeMe(void)
{
    this->v.clear();
    this->dq.clear();
}

PmergeMe    &PmergeMe::operator=(const PmergeMe &op)
{
    if (this == &op)
        return *this;
    this->v = op.get_vector();
    this->dq = op.get_deque();
    return *this;
}

std::vector<int> PmergeMe::get_vector(void) const { return this->v; }

std::deque<int> PmergeMe::get_deque(void) const { return this->dq; }

std::chrono::duration<double>   PmergeMe::get_vector_time(void) const { return this->vector_time; }

std::chrono::duration<double>   PmergeMe::get_deque_time(void) const { return this->deque_time; }

void        PmergeMe::sort(void)
{
    std::chrono::time_point<std::chrono::high_resolution_clock>	vector_start_time = std::chrono::high_resolution_clock::now();
    this->vector_sort(0, this->v.size() -1);
    std::chrono::time_point<std::chrono::high_resolution_clock>	vector_end_time = std::chrono::high_resolution_clock::now();
    this->vector_time = vector_end_time - vector_start_time;

    std::chrono::time_point<std::chrono::high_resolution_clock>	deque_start_time = std::chrono::high_resolution_clock::now();
    this->deque_sort(0, this->v.size() -1);
    std::chrono::time_point<std::chrono::high_resolution_clock>	deque_end_time = std::chrono::high_resolution_clock::now();
    this->deque_time = deque_end_time - deque_start_time;
}

void PmergeMe::vectorInsertionSort(int p, int q)
{
    for (int i = p; i < q; i++)
    {
        int tempVal = this->v[i + 1];
        int j = i + 1;
        while (j > p && this->v[j - 1] > tempVal)
        {
            this->v[j] = this->v[j - 1];
            j--;
        }
        this->v[j] = tempVal;
    }
}

void PmergeMe::vectorMerge(int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    std::vector<int> LA(this->v.begin() + p, this->v.begin() + q + 1);
    std::vector<int> RA(this->v.begin() + q + 1, this->v.begin() + r + 1);
    int RIDX = 0;
    int LIDX = 0;
    for (int i = p; i < r - p + 1; i++)
    {
        if (RIDX == n2)
        {
            this->v[i] = LA[LIDX];
            LIDX++;
        }
        else if (LIDX == n1)
        {
            this->v[i] = RA[RIDX];
            RIDX++;
        }
        else if (RA[RIDX] > LA[LIDX])
        {
            this->v[i] = LA[LIDX];
            LIDX++;
        }
        else
        {
            this->v[i] = RA[RIDX];
            RIDX++;
        }
    }
}

void        PmergeMe::vector_sort(int p, int r)
{
    if (r - p > 5)
    {
        int q = (p + r) / 2;
        this->vector_sort(p, q);
        this->vector_sort(q + 1, r);
        this->vectorMerge(p, q, r);
    }
    else
        this->vectorInsertionSort(p, r);
}

void PmergeMe::dequeInsertionSort(int p, int q)
{
    for (int i = p; i < q; i++)
    {
        int tempVal = this->dq[i + 1];
        int j = i + 1;
        while (j > p && this->dq[j - 1] > tempVal)
        {
            this->dq[j] = this->dq[j - 1];
            j--;
        }
        this->dq[j] = tempVal;
    }
}

void PmergeMe::dequeMerge(int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    std::deque<int> LA(this->dq.begin() + p, this->dq.begin() + q + 1);
    std::deque<int> RA(this->dq.begin() + q + 1, this->dq.begin() + r + 1);
    int RIDX = 0;
    int LIDX = 0;
    for (int i = p; i < r - p + 1; i++)
    {
        if (RIDX == n2)
        {
            this->dq[i] = LA[LIDX];
            LIDX++;
        }
        else if (LIDX == n1)
        {
            this->dq[i] = RA[RIDX];
            RIDX++;
        }
        else if (RA[RIDX] > LA[LIDX])
        {
            this->dq[i] = LA[LIDX];
            LIDX++;
        }
        else
        {
            this->dq[i] = RA[RIDX];
            RIDX++;
        }
    }
}

void        PmergeMe::deque_sort(int p, int r)
{
    if (r - p > 5)
    {
        int q = (p + r) / 2;
        this->deque_sort(p, q);
        this->deque_sort(q + 1, r);
        this->dequeMerge(p, q, r);
    }
    else
        this->dequeInsertionSort(p, r);
}


std::vector<int>    PmergeMe::get_vector() const
{
    return this->v;
}

std::deque<int>    PmergeMe::get_deque() const
{
    return this->dq;
}

std::vector<int>    PmergeMe::get_vtime() const
{

}

std::vector<int>    PmergeMe::get_dqtime() const
{

}
