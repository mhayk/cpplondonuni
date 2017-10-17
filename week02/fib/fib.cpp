#include "fib.h"

std::vector<int> fib(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0;
    std::vector<int> fib;

    // displays the first two terms which is always 0 and 1
    //cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    fib.push_back(t1);
    fib.push_back(t2);

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        //cout << nextTerm << ", ";
        fib.push_back(nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    /*
    for(const auto num : fib)
        std::cout << num << " ";

    std::cout << std::endl;
    */
    return fib;
}
