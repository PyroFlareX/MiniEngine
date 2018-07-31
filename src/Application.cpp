#include "Application.h"

#include "States/GameState.h"
#include "Display.h"

#include <GL/glew.h>

Application::Application()
{
    pushState<GameState>(*this);
}

void Application::RunLoop()
{
    auto& display = Display::get();

    while(display.isOpen())
    {
        m_render.Clear(display);

        //Drawing Code


        m_render.Update(display);

        display.CheckforClose();
    }
    display.Close();
}

void Application::popState()
{
    m_states.pop_back();
}
/*
Basestate& Application::currentState()
{
    return *m_states.back();
}
*/
