#include <GL/glut.h> ///(0) 使用GLUT外掛 (忘了裝 GLUT)
int N=0, vx[3000], vy[3000];
float angle=0; ///TODO:
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空

    glPushMatrix();///TODO: 備份矩陣
        glRotatef(angle,0,0,1);
        glScalef(0.5,0.1,0.1);
        glColor3f(0.3,0.3,1.0);
        glutSolidCube(1);
    glPopMatrix(); ///TODO: 還原矩陣
    glutSwapBuffers();///交換兩倍的buffers
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
    glutInit( &argc, argv ); ///(1) GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160901 Jerrychen");///(3)開窗

    glutDisplayFunc(display);///(4)等一下要顯示的函式
    glutKeyboardFunc( keyboard );///TODO: 按按鍵, 它就會轉動!!!!
    glutMotionFunc( motion );///TODO2: mouse motion在動哦!!!!
    glutMainLoop();///(5)主要迴圈
}
