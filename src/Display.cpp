#include "Display.h"

Display::Display()
{
    sf::ContextSettings settings;

    settings.depthBits = 24;
    settings.stencilBits = 8;
    settings.antialiasingLevel = 0;
    settings.majorVersion = 3;
    settings.minorVersion = 3;

    sf::VideoMode vmode;
    vmode.height = 600;
    vmode.width = 800;

    m_window.create(vmode, "Window", sf::Style::Default, settings);

    glewInit();

    glViewport(0, 0, 800, 600);
}

Display::~Display()
{
    //dtor
}

void Display::Update()
{
    m_window.display();
}

void Display::CheckforClose()
{
    sf::Event e;
    while (m_window.pollEvent(e))
    {
        if (e.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            Close();
        }
    }
}

bool Display::isOpen()
{
    return m_window.isOpen();
}

void Display::Close()
{
    m_window.close();
}

sf::RenderWindow& Display::getWindow()
{
    return m_window;
}

Display& Display::get()
{
    static Display d;
    return d;
}

void Display::Clear()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
}
