#include <iostream>
#include <cstdint>


class ReffableClass
{
public:
    constexpr ReffableClass(size_t idx) noexcept : m_Index(idx) {};
    constexpr ReffableClass() noexcept = default;

    ~ReffableClass() noexcept
    {
        std::cout << "Destructing... #" << m_Index << '\n';
    }

    constexpr size_t GetIndex() const noexcept { return m_Index; }

private:
    size_t m_Index = 0;
};
