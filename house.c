#include<stdio.h>
#include<GL/glut.h>

void myInit(){
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,200.0);
	}

void linesegment(){
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINES);
	glVertex2i(50,50);
	glVertex2i(50,10);
	glVertex2i(20,10);
	glVertex2i(20,50);
	glVertex2i(50,50);
	glVertex2i(20,50);
	glVertex2i(50,10);
	glVertex2i(20,10);
	glVertex2i(35,95);
	glVertex2i(20,50);
	glVertex2i(35,95);
	glVertex2i(50,50);
	glVertex2i(100,10);
	glVertex2i(50,10);
	glVertex2i(50,50);
	glVertex2i(100,50);
	glVertex2i(100,50);
	glVertex2i(100,10);
	glVertex2i(100,50);
	glVertex2i(70,95);
	glVertex2i(70,95);
	glVertex2i(35,95);
	
	glVertex2i(70,40);
	glVertex2i(70,30);
	glVertex2i(90,40);
	glVertex2i(90,30);
	glVertex2i(70,40);
	glVertex2i(90,40);
	glVertex2i(70,30);
	glVertex2i(90,30);

	glVertex2i(30,40);
	glVertex2i(40,40);
	glVertex2i(30,40);
	glVertex2i(30,10);
	glVertex2i(40,40);
	glVertex2i(40,10);	
	glEnd();

 	glBegin(GL_LINE_STRIP);
	glVertex2i(18,102);
	glVertex2i(20,100);
	glVertex2i(22,102);
glEnd();
glBegin(GL_LINE_STRIP);
	glVertex2i(38,102);
	glVertex2i(40,100);
	glVertex2i(42,102);
	glEnd();
	glFlush();
	}

void main(int argc, char *argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(10,10);
	glutInitWindowSize(800,800);
	glutCreateWindow("Display a home");
	myInit();
	glutDisplayFunc(linesegment);
	glutMainLoop();
	}

