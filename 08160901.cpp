#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("kobe.jpg");
    cvShowImage("Week08-1�Ϥ��}�q",img);
    cvWaitKey(0);
}
