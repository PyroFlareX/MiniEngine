#ifndef DISPLAY_H
#define DISPLAY_H

#include <SFML/Graphics.hpp>
#include <GL/glew.h>

class Display
{
public:
    Display();
    static Display& get();

    void Update();
    void Close();
    void Clear();

    void CheckforClose();

    sf::RenderWindow& getWindow();

    bool isOpen();

    ~Display();
protected:

private:
    sf::RenderWindow m_window;
};

#endif // DISPLAY_H
