#ifndef APPLICATION_H
#define APPLICATION_H

#include <vector>
#include <memory>

#include "States/Basestate.h"
#include "Display.h"
#include "Renderers/MasterRenderer.h"

class Basestate;

class Application
{
public:
    Application();

    void RunLoop();

    //State Stuff
    template<typename S, typename... Args>
    void pushState(Args&&... args)
    {
        m_states.push_back(std::make_unique<S>(std::forward<Args>(args)...));
    }

    void popState();

protected:

private:
    //Basestate& currentState();

    std::vector<std::unique_ptr<Basestate>> m_states;

    MasterRenderer m_render;
};

#endif // APPLICATION_H
