#ifndef MASTERRENDERER_H
#define MASTERRENDERER_H

#include "../Display.h"

class MasterRenderer
{
public:
    void Clear(Display& dis);

    void Update(Display& dis);

    void Draw(Display& dis);

protected:

private:
};

#endif // MASTERRENDERER_H
