#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void){


glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (30.0, 7.0, 190);
glPointSize(5.0);


//  UPPER DECK
glBegin(GL_POLYGON);
glVertex2i(20,120);
glVertex2i(570,120 );
glVertex2i(590,150);
glVertex2i(120,150);
glVertex2i( 100,160);
glVertex2i( 1,160);
glEnd();


//LOWER DEC
glBegin(GL_POLYGON);
glVertex2d(100,90);
glVertex2i(90, 80);
glVertex2i(500,80);
glVertex2i(550,115);
glVertex2i(30,115);
glEnd();


// 4 RIGHT SIDE BOXES
glBegin(GL_QUADS);
glVertex2i(500,155 );
glVertex2i(550,155   );
glVertex2i(550,175 );
glVertex2i(500,175 );
glEnd();

glBegin(GL_QUADS);
glVertex2i(500,180);
glVertex2i(550,180   );
glVertex2i(550,200 );
glVertex2i(500,200 );
glEnd();

glBegin(GL_QUADS);
glVertex2i(500,205);
glVertex2i(550,205  );
glVertex2i(550,225);
glVertex2i(500,225);
glEnd();

glBegin(GL_QUADS);
glVertex2i(500,230 );
glVertex2i(550,230   );
glVertex2i(550,250 );
glVertex2i(500,250 );
glEnd();


//RIGHT SIDE LONG PILLER
glBegin(GL_POLYGON);
glVertex2i(475,155 );
glVertex2i(495,155   );
glVertex2i(495,270 );
glVertex2i(485,270 );
glVertex2d(475,250);
glEnd();

// 12 MIDDLE BOXES
glBegin(GL_QUADS);
glVertex2i(420,155 );
glVertex2i(470,155   );
glVertex2i(470,175 );
glVertex2i(420,175 );
glEnd();

glBegin(GL_QUADS);
glVertex2i(420,180 );
glVertex2i(470,180 );
glVertex2i(470,200);
glVertex2i(420,200);
glEnd();


glBegin(GL_QUADS);
glVertex2i(420,205);
glVertex2i(470,205 );
glVertex2i(470,225);
glVertex2i(420,225);
glEnd();


glBegin(GL_QUADS);
glVertex2i(420,230);
glVertex2i(470,230 );
glVertex2i(470,250);
glVertex2i(420,250);
glEnd();

glBegin(GL_QUADS);
glVertex2i(365,155 );
glVertex2i(415,155   );
glVertex2i(415,175 );
glVertex2i(365,175 );
glEnd();

glBegin(GL_QUADS);
glVertex2i(365,180 );
glVertex2i(415,180 );
glVertex2i(415,200);
glVertex2i(365,200);
glEnd();


glBegin(GL_QUADS);
glVertex2i(365,205);
glVertex2i(415,205 );
glVertex2i(415,225);
glVertex2i(365,225);
glEnd();


glBegin(GL_QUADS);
glVertex2i(365,230);
glVertex2i(415,230 );
glVertex2i(415,250);
glVertex2i(365,250);
glEnd();


glBegin(GL_QUADS);
glVertex2i(310,155 );
glVertex2i(360,155   );
glVertex2i(360,175 );
glVertex2i(310,175 );
glEnd();

glBegin(GL_QUADS);
glVertex2i(310,180 );
glVertex2i(360,180 );
glVertex2i(360,200);
glVertex2i(310,200);
glEnd();


glBegin(GL_QUADS);
glVertex2i(310,205);
glVertex2i(360,205 );
glVertex2i(360,225);
glVertex2i(310,225);
glEnd();


glBegin(GL_QUADS);
glVertex2i(310,230);
glVertex2i(360,230 );
glVertex2i(360,250);
glVertex2i(310,250);
glEnd();


// LEFT SIDE WIDE BOX
glBegin(GL_POLYGON);
glVertex2i(240,155);
glVertex2i(300,155 );
glVertex2i(300,230);
glVertex2i(290,270);
glVertex2d(240,270);
glEnd();


// 12 LEFT SIDE BOXEZS
glBegin(GL_QUADS);
glVertex2i(185,155 );
glVertex2i(235,155   );
glVertex2i(235,175 );
glVertex2i(185,175 );
glEnd();

glBegin(GL_QUADS);
glVertex2i(185,180 );
glVertex2i(235,180 );
glVertex2i(235,200);
glVertex2i(185,200);
glEnd();


glBegin(GL_QUADS);
glVertex2i(185,205);
glVertex2i(235,205 );
glVertex2i(235,225);
glVertex2i(185,225);
glEnd();


glBegin(GL_QUADS);
glVertex2i(185,230);
glVertex2i(235,230 );
glVertex2i(235,250);
glVertex2i(185,250);
glEnd();

glBegin(GL_QUADS);
glVertex2i(130,155 );
glVertex2i(180,155   );
glVertex2i(180,175 );
glVertex2i(130,175 );
glEnd();

glBegin(GL_QUADS);
glVertex2i(130,180 );
glVertex2i(180,180 );
glVertex2i(180,200);
glVertex2i(130,200);
glEnd();


glBegin(GL_QUADS);
glVertex2i(130,205);
glVertex2i(180,205 );
glVertex2i(180,225);
glVertex2i(130,225);
glEnd();


glBegin(GL_QUADS);
glVertex2i(130,230);
glVertex2i(180,230 );
glVertex2i(180,250);
glVertex2i(130,250);
glEnd();

glBegin(GL_QUADS);
glVertex2i(65,155);
glVertex2i(125,155 );
glVertex2i(125,175);
glVertex2i(65,175);
glEnd();

glBegin(GL_QUADS);
glVertex2i(65,180 );
glVertex2i(125,180 );
glVertex2i(125,200);
glVertex2i(65,200);
glEnd();


glBegin(GL_QUADS);
glVertex2i(65,205);
glVertex2i(125,205 );
glVertex2i(125,225);
glVertex2i(65,225);
glEnd();


glBegin(GL_QUADS);
glVertex2i(65,230);
glVertex2i(125,230 );
glVertex2i(125,250);
glVertex2i(65,250);
glEnd();


glFlush ();
}

void myInit (void){
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-100.0, 640, -220.0, 600);
}



int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640,600);
glutInitWindowPosition (200,150);
glutCreateWindow ("SHIP WITH QUADS AND POLYGON");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
