#ifndef MESH_INCLUDED
#define MESH_INCLUDED

#include <vector>

struct Mesh
{
    std::vector<GLfloat> vertexPositions;
    std::vector<GLfloat> textureCoords;
    std::vector<GLuint>  indices;
};

#endif // MESH_INCLUDED
