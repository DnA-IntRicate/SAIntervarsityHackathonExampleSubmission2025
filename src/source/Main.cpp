#include <iostream>
#include <ReffableClass.hpp>
#include <IntricatePointers/IntricatePointers.hpp>
using namespace Intricate;


int main(int argc, char** argv)
{
    std::cout << "Hello Hackathon World from C++ inside Docker!\n";
    std::cout << "----------------------------------------------------------------\n\n";

    // This code just creates and destroys 20 heap allocations because... Why not
    constexpr size_t MAX_ITERS = 20;
    for (size_t i = 0; i < MAX_ITERS; ++i)
    {
        std::cout << "Constructing #" << i << '\n';
        Ref<ReffableClass> ptr = CreateRef<ReffableClass>(i);
        (void)ptr->GetIndex(); // Just accessing this for the sake of accessing it.
    }

    std::cin.get();
    return 0;
}
