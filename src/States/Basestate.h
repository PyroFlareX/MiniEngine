#ifndef BASESTATE_H
#define BASESTATE_H

#include "../Application.h"
#include "../Display.h"

class Application;

class Basestate
{
public:
    Basestate(Application& application);

    virtual void input() = 0;
    virtual void update(Display& dis) = 0;
    virtual void draw(Display& dis) = 0;

    virtual ~Basestate() = default;
protected:
    Application* m_application;

};

#endif // BASESTATE_H
