#include "Timer.h"

void Timer::start()
{
    start_time = std::chrono::steady_clock::now();
}

void Timer::stop()
{
    elapsed_time = std::chrono::steady_clock::now() - start_time;
}

Type64 Timer::ms() const
{
    return (std::chrono::duration_cast
    <std::chrono::duration<i64, std::milli>>(elapsed_time)).count();
}
