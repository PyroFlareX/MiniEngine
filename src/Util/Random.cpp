#include "Random.h"

Random::Random()
{
    randomEngine.seed(std::time(nullptr));
}

Random::~Random()
{
    //dtor
}

uint64_t Random::intInRange(int64_t low, int64_t high)
{
    std::uniform_int_distribution<int64_t> dist (low, high);
    return dist(randomEngine);
}

float Random::floatInRange(float low, float high)
{
    std::uniform_real_distribution<float> dist (low, high);
    return dist(randomEngine);
}
