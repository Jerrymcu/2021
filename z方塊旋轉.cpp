#include <GL/glut.h> ///(0) �ϥ�GLUT�~�� (�ѤF�� GLUT)
int N=0, vx[3000], vy[3000];
float angle=0; ///TODO:
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M��

    glPushMatrix();///TODO: �ƥ��x�}
        glRotatef(angle,0,0,1);
        glScalef(0.5,0.1,0.1);
        glColor3f(0.3,0.3,1.0);
        glutSolidCube(1);
    glPopMatrix(); ///TODO: �٭�x�}
    glutSwapBuffers();///�洫�⭿��buffers
}
void motion( int x, int y )
{
    angle++;///TODO:
    display();///TODO:
}
void keyboard( unsigned char key, int x, int y )
{
}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv ); ///(1) GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160901 Jerrychen");///(3)�}��

    glutDisplayFunc(display);///(4)���@�U�n��ܪ��禡
    glutKeyboardFunc( keyboard );///TODO: ������, ���N�|���!!!!
    glutMotionFunc( motion );///TODO2: mouse motion�b�ʮ@!!!!
    glutMainLoop();///(5)�D�n�j��
}
