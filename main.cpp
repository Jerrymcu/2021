#include <GL/glut.h>///以下請在blog自己copy
#include <stdio.h>///TODO:
float teapotX=0,teapotY=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPopMatrix();
        glTranslatef(teapotX,teapotY,0);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glEnd();
    glutSwapBuffers();
}
void motion(int x,int y)///
{
    teapotX=(x-150)/150.0;
    teapotY=-(y-150)/150.0;
    display();
}///TODO:印出來...
int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week04 mouse");
    glutDisplayFunc(display);
    glutMotionFunc( motion );
    glutMainLoop();
}
