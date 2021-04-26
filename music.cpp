#include <windows.h>
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard(unsigned char c, int x,int y)
{
    if(c=='1') PlaySound("do.wav",NULL,SND_ASYNC);
    if(c=='2') PlaySound("re.wav",NULL,SND_ASYNC);
    if(c=='3') PlaySound("mi.wav",NULL,SND_ASYNC);
    if(c=='4') PlaySound("fa.wav",NULL,SND_ASYNC);
    if(c=='5') PlaySound("so.wav",NULL,SND_ASYNC);
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Jerry");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
