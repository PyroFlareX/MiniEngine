#include "Model.h"

Model::Model()
{

}

Model::~Model()
{
    deleteData();
}

void Model::addVBO(int dimensions, std::vector<GLfloat> data)
{
    GLuint vbo;

    glGenBuffers(dimensions, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, data.size() * sizeof(GLfloat), data.data(), GL_STATIC_DRAW);

    glVertexAttribPointer(0, dimensions, GL_FLOAT, GL_FALSE, 0, (GLvoid*) 0);

    glEnableVertexAttribArray(0);

    m_buffers.push_back(vbo);
}

void Model::genVAO()
{
    if (m_renderinfo.vao != 0)
    {
        deleteData();
    }
    glGenVertexArrays(1, &m_renderinfo.vao);
    glBindVertexArray(m_renderinfo.vao);
}

void Model::bindVAO()
{
    glBindVertexArray(m_renderinfo.vao);
}

void Model::deleteData()
{
    glDeleteVertexArrays(1, &m_renderinfo.vao);

    m_buffers.clear();
}

void Model::addData(std::vector<GLfloat> data)
{
    genVAO();

    addVBO(2, data);
}
