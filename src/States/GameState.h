#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "Basestate.h"
#include "../Application.h"

class Application;
class Basestate;

class GameState : public Basestate
{
public:
    GameState(Application& application);

    void input() override;
    void update() override;
    void draw() override;

    ~GameState();
protected:

private:
};

#endif // GAMESTATE_H
