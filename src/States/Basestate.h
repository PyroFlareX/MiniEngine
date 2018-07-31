#ifndef BASESTATE_H
#define BASESTATE_H

#include "../Application.h"

class Application;

class Basestate
{
public:
    Basestate(Application& application);

    virtual void input() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;

    virtual ~Basestate() = default;
protected:
    Application* m_application;

};

#endif // BASESTATE_H
