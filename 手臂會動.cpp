#include <GL/glut.h> ///(0) 使用GLUT外掛 (忘了裝 GLUT)
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
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空
    glPushMatrix();///TODO: 備份矩陣
        glTranslatef(-0.25,0,0);
        glRotatef(angle++,0,0,1);
        glTranslatef(-0.25,0,0);
        hand();
    glPopMatrix(); ///TODO: 還原矩陣
    hand();
    glutSwapBuffers();
}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv ); ///(1) GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("Jerrychen");///(3)開窗

    glutIdleFunc(display);///(4)等一下要顯示的函式
    glutDisplayFunc( display );///TODO: 按按鍵, 它就會轉動!!!!
    glutMainLoop();///(5)主要迴圈
}
