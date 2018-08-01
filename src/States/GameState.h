#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "Basestate.h"
#include "../Application.h"
#include "../Renderers/MasterRenderer.h"

class Application;
class Basestate;

class GameState : public Basestate
{
public:
    GameState(Application& application);

    void input() override;
    void update(Display& dis) override;
    void draw(Display& dis) override;

    ~GameState();
protected:

private:
    MasterRenderer m_render;
};

#endif // GAMESTATE_H
