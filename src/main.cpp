#include <iostream>
#include <SFML/Graphics.hpp>

#include "Application.h"
#include "Util/Random.h"

int main()
{
    std::cout << "Hello world!" << std::endl;

    Random randNum;

/*    for(int i = 0; i < 10; i++)
    {
        std::cout << randNum.intInRange(0, 100) << "\n";
    }
    for(int i = 0; i < 10; i++)
    {
        std::cout << randNum.floatInRange(0, 100) << "\n";
    }*/

    Application app;
    app.RunLoop();

    return 0;
}
