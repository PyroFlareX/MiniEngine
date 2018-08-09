#include "MasterRenderer.h"

MasterRenderer::MasterRenderer()
{

}

void MasterRenderer::Clear(Display& dis)
{
    dis.Clear();
}

void MasterRenderer::Update(Display& dis)
{
    dis.Update();
}

void MasterRenderer::Draw(Display& dis)
{
    std::vector<GLfloat> verts = {0.5, 0.5,
                                -0.5, 0.5,
                                -0.5, -0.5,
                                -0.5, -0.5,
                                0.5, -0.5,
                                0.5, 0.5};
    m_model.addData(verts, 0);
    glDrawArrays(GL_TRIANGLES, 0, 6);
    m_model.deleteData();
}
