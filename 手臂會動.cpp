#include <GL/glut.h> ///(0) �ϥ�GLUT�~�� (�ѤF�� GLUT)
float angle=0; ///TODO:
void hand()
{
    glPushMatrix();
        glScalef(0.5,0.1,0.1);
        glutSolidCube(1);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M��
    glPushMatrix();///TODO: �ƥ��x�}
        glTranslatef(-0.25,0,0);
        glRotatef(angle++,0,0,1);
        glTranslatef(-0.25,0,0);
        hand();
    glPopMatrix(); ///TODO: �٭�x�}
    hand();
    glutSwapBuffers();
}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv ); ///(1) GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("Jerrychen");///(3)�}��

    glutIdleFunc(display);///(4)���@�U�n��ܪ��禡
    glutDisplayFunc( display );///TODO: ������, ���N�|���!!!!
    glutMainLoop();///(5)�D�n�j��
}
