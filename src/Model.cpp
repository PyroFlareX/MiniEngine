#include "Model.h"

Model::Model()
{
    //vboCount = 0;
}

Model::~Model()
{
    deleteData();
}

void Model::addVBO(int dimensions, std::vector<GLfloat> data, unsigned int vboIndex)
{
    vboCount = vboIndex;
    glGenBuffers(/*dimensions*/1 , &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, data.size() * sizeof(GLfloat), data.data(), GL_STATIC_DRAW);

    glVertexAttribPointer(vboCount, dimensions, GL_FLOAT, GL_FALSE, 0, (GLvoid*) 0);

    glEnableVertexAttribArray(vboCount++);

    m_buffers.push_back(vbo);
    //std::cout << "Added" << std::endl;
}

void Model::genVAO()
{
    if (m_renderinfo.vao != 0)
    {
        deleteData();
        //std::cout << "Delete2" << std::endl;
    }

    glGenVertexArrays(1, &m_renderinfo.vao);
    glBindVertexArray(m_renderinfo.vao);
    //std::cout << "Genned" << std::endl;
}

void Model::bindVAO()
{
    glBindVertexArray(m_renderinfo.vao);
}

void Model::deleteData()
{
    glDeleteVertexArrays(1, &m_renderinfo.vao);
    glDeleteBuffers(m_buffers.size(), m_buffers.data());

    m_buffers.clear();
    //std::cout << "Delete" << std::endl;
}

void Model::addData(std::vector<GLfloat> data, unsigned int index)
{
    //std::cout << "Data" << std::endl;
    genVAO();

    addVBO(2, data, index);
}
