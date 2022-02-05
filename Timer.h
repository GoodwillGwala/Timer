#ifndef _TIMER_
#define _TIMER_

#include <chrono>
#include <cstdint>

class Timer
{
public:


    typedef std::int_fast64_t i64;
    typedef std::uint_fast64_t Type64;

    Timer() = default;
    ~Timer() = default;
    Timer(const Timer&) = delete;
    Timer& operator=(const Timer&) = delete;
    void start();

    void stop();

    Type64 ms() const;


private:

    std::chrono::time_point<std::chrono::steady_clock> start_time =
    std::chrono::steady_clock::now();

    std::chrono::duration<double> elapsed_time =
    std::chrono::duration<double>::zero();
};
#endif
