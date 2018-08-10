#include<iostream>

template<class T>
struct rank{static size_t const value=0u;};

template <class U,size_t N>
//struct rank <U[N]>
struct rank<U[N]>
{
    static size_t const value = 1u + rank<U>::value;
};


int main()
{

    using array_t = int[10][20][30];
    std::cerr<<rank<array_t>::value<<"\n";
}

