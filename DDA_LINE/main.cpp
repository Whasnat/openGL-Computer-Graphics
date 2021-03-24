/*
Problem Description:
After providing the choice you have to enter the coordinates of start point and end point. Like the following,
For Line:
Enter anInitial Point: 100 250
Enter the Final Point: 200 300
After that you have to draw the shape with the supplied coordinates
*/

#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

float x1,y1,x2,y2,m,i,j;
float dx,dy;


void display(void){
    // Clear Window
    glClear (GL_COLOR_BUFFER_BIT);
    glEnd();


    glColor3f (0.0, 1.0, 0.25); //Line Color
    glBegin(GL_POINTS);


    if(m>0 && m<=1){
            while(x1<=x2 && y1<=y2){
                x1=x1+1;
                y1=y1+m;
                glVertex3f(x1/50,y1/50,0.0);
                printf("%f %f",x1,y1);// print the points
            }
    }

    else if(m>1){
            while(x1<=x2 && y1<=y2){
                x1=x1+(1/m);
                y1=y1+1;
                glVertex3f(x1/50,y1/50,0.0);
                printf("%f %f",x1,y1); // print the points
            }
    }


    else if(m>-1 && m<=0){
            while(x1>=x2 && y1>=y2){
                x1=x1-1;
                y1=y1-m;
                glVertex3f(x1/50,y1/50,0.0);
                printf("%f %f",x1,y1);// print the points
            }
    }

    else if(m<-1){
            while(x1>=x2 && y1>=y2){
                x1=x1-(1/m);
                y1=y1-1;
                glVertex3f(x1/50,y1/50,0.0);
                printf("%f %f",x1,y1);// print the points
            }
      }

    glEnd();
    glFlush ();
}


void init (void){
    /* select clearing (background) color */
    glClearColor (0.30, 0.37, 0.25, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 10.0, 0.0, 10.0, -10.0, 10.0);
}


int main(int argc, char** argv){

    //Provided parameters
    //Starting Points
    x1 = 100;
    y1 = 250;

    //Ending Points
    x2 = 200;
    y2 = 300;

    dx=x2-x1;
    dy=y2-y1;
    m=dy/dx; // number of steps, m


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (200, 200);
    glutCreateWindow ("DDA Line Drawing Algorithm");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

// Algorithm reference: https://www.javatpoint.com/computer-graphics-dda-algorithm
