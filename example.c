#include<stdio.h>
#include<GL/glut.h>

void myInit(){
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,200.0);
	}

void linesegment(){
	glBegin(GL_LINES);
	glVertex2i(10,15);
	glVertex2i(20,25);
	glVertex2i(30,35);
	glVertex2i(40,45);
	glVertex2i(50,55);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(100,55);
	glVertex2i(10,65);
	glVertex2i(120,75);
	glVertex2i(30,85);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(140,95);
	glVertex2i(160,65);
	glVertex2i(170,35);
	glVertex2i(180,45);
	glEnd();
	glFlush();
	}

void main(int argc, char *argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(10,10);
	glutInitWindowSize(800,800);
	glutCreateWindow("Display a line");
	myInit();
	glutDisplayFunc(linesegment);
	glutMainLoop();
	}
