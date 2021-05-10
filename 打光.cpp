#include <windows.h>
#include <GL/glut.h>///(0)使用GLUT外掛
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空

    glutSolidTeapot(0.3);///實心茶壺

    glutSwapBuffers();///交換兩倍的buffers
}
const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };
void keyboard(unsigned char key,int x,int y)
{
    if(key=='1') PlaySound("do.wav",NULL,SND_ASYNC);
    if(key=='2') PlaySound("re.wav",NULL,SND_ASYNC);
    if(key=='3') PlaySound("mi.wav",NULL,SND_ASYNC);

}
void mouse(int button,int state,int x,int y)
{
    if(state==GLUT_DOWN)PlaySound("shot.wav",NULL,SND_ASYNC);
}
int main(int argc, char ** argv)///以前是int main()
{
    glutInit(&argc, argv);///(1)GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("地囚人");///開窗
     glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glutDisplayFunc(display);///(4)等一下要顯示的函式
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMainLoop();///(5)主要迴圈
}
