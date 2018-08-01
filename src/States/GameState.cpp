#include "GameState.h"

#include "../Application.h"
#include "Basestate.h"

GameState::GameState(Application& app) : Basestate(app)
{
    //ctor
}

GameState::~GameState()
{
    //dtor
}

void GameState::input()
{

}

void GameState::update(Display& dis)
{
    m_render.Update(dis);
}

void GameState::draw(Display& dis)
{
    m_render.Draw(dis);
}
