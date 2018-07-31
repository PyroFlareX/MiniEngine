#ifndef RANDOM_H
#define RANDOM_H

#include <random>
#include <cstdint>
#include <ctime>

class Random
{
    public:
        Random();

        uint64_t intInRange(int64_t low, int64_t high);
        float floatInRange(float low, float high);

        ~Random();
    protected:

    private:
        std::mt19937_64 randomEngine;
};

#endif // RANDOM_H
