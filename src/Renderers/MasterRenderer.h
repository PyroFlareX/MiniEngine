#ifndef MASTERRENDERER_H
#define MASTERRENDERER_H

#include "../Display.h"
#include "../Model.h"

class MasterRenderer
{
    public:
        MasterRenderer();

        void Clear(Display& dis);

        void Update(Display& dis);

        void Draw(Display& dis);

    protected:

    private:
        Model m_model;
        //Mesh m_mesh;
};

#endif // MASTERRENDERER_H
