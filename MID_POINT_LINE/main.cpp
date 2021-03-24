/*
Problem Description:
For Line:
Enter anInitial Point: -100 200
Enter the Final Point: -200 300
After that you have to draw the shape with the supplied coordinates.
*/

#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


float x1,y1,x2,y2,m,p;
int dx=0,dy=0;


void display(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glEnd();

    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POINTS);
    p=(2*dy)-dx;

    for(float i=x1,j=y1; i<=x2,j<=y2; ){
        if(p>=0){
                i=i+1;
                j=j+1;

            if((i>x2)||(j>y2)){
                break;
            }

            printf("%f %f\n",i,j);  // print the points
            glVertex3f ((i/100), (j/100), 0.0); // Devide
            p=p+(2*dy)-(2*dx);
        }

            else if(p<0){
                i=i+1;
                if((i>x2)||(j>y2)){
                    break;
                }
            printf("%f %f\n",i,j);  // print the points
            glVertex3f ((i/100), (j/100), 0.0);
            p=p+(2*dy);

            }
    }
    glEnd();

    glFlush ();
}

void init (void){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, -10.0, 0.0, 10.0, -10.0, -10.0);
}

int main(int argc, char** argv){

    x1 = 100; y1 = 200; // Starting Point
    x2 = 200; y2 = 300; // Ending Point

    dx=x2-x1;
    dy=y2-y1;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (200, 200);
    glutCreateWindow ("Bresenham line drawing algorithm");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
// Algorithm Reference: https://www.javatpoint.com/computer-graphics-bresenhams-line-algorithm
