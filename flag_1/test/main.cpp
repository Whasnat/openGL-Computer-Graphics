#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);


//glBegin(GL_TRIANGLES);
//glVertex2i(100, 100);
//glVertex2i(300, 100);
//glVertex2i(200, 250);
//glEnd();


glBegin(GL_POLYGON);
glVertex2i(290, 640);
glVertex2i(353, 640);
glVertex2i(353, 320);
glVertex2i(290, 320);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(0, 640);
glVertex2i(212, 534);
glVertex2i(166, 534);
glVertex2i(0, 618);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(214, 427);
glVertex2i(260, 427);
glVertex2i(50, 321);
glVertex2i(0, 320);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(430, 427);
glVertex2i(475, 427);
glVertex2i(640, 344);
glVertex2i(640, 320);
glEnd();


glBegin(GL_POLYGON);
glVertex2i(590, 640);
glVertex2i(640, 640);
glVertex2i(430, 534);
glVertex2i(380, 534);
glEnd();


glFlush ();
}

void myInit (void)
{
glClearColor(37.0, 150.0, 190.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1280.0, 0.0, 640.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1280, 640);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Computer Graphics");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
