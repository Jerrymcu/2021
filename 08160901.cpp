#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("kobe.jpg");
    cvShowImage("Week08-1¹Ï¤ù¶}¨q",img);
    cvWaitKey(0);
}
