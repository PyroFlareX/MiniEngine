#ifndef MODEL_H
#define MODEL_H

#include <GL/glew.h>
#include <vector>

#include "Mesh.h"
#include "Renderers/RenderInfo.h"

class Model
{
    public:
        Model();

        void genVAO();
        void bindVAO();

        void addData(std::vector<GLfloat> data);

        void addVBO(int dimensions, std::vector<GLfloat> data);

        void deleteData();

        ~Model();
    private:
        std::vector<GLuint> m_buffers;
        RenderInfo m_renderinfo;
};

#endif // MODEL_H
