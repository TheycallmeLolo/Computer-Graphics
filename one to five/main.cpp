#include <iostream>
#include<Windows.h> // get screen size
#include<GL\glut.h>
#include<Math.h>

void draw();
void reshape(int,int);
void backGround();
int main(int argc, char** argv) {
	glutInit(&argc , argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);


	glutInitWindowSize(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CXSCREEN));
	glutCreateWindow("Lolo project1");
	
	glutDisplayFunc(draw);
	glutReshapeFunc(reshape);
	
	backGround();
	glutMainLoop();
}

void draw(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	
	// 2	
	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 0);  
	glVertex2f(-8, 7);         
	glVertex2f(-11, 1);       
	glVertex2f(-5, 1);         
	glEnd();
	
	// 2	
	glBegin(GL_TRIANGLES);
	glColor3f(0, 0, 0);  
	glVertex2f(-3, 7);         
	glVertex2f(-3, 1);       
	glVertex2f(3, 1);         
	glEnd();
	
	
	// 3	
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);  
	glVertex2f(7, 7);         
	glVertex2f(6, 1);       
	glVertex2f(12, 1);
	glVertex2f(13,7);         
	glEnd();
	
	// 4	
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);  
	glVertex2f(-8, -1);  
	glVertex2f(-5, -4);       
	glVertex2f(-8, -7);       
	glVertex2f(-11,-4);         
	glEnd();
	
	glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);   
    for (int i = 0; i < 360; i++) {
        float angle = i * 3.14159 / 180;
        glVertex2f(4 + 4 * cos(angle), -4 + 2.5 * sin(angle));
    }
    glEnd();	
	

	glFlush();
	
}

void reshape(int w ,int h ){
	float ratio;
	if( h == 0 )
		h = 1;
	ratio = (float)w / h ;
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if( w >= h )
		gluOrtho2D(-10*ratio,10*ratio,-10,10);
	else
		gluOrtho2D(-10,10,-10/ratio,10/ratio);
	glMatrixMode(GL_MODELVIEW);
}

void backGround(){
	// color [0,1]
	glClearColor(1,1,1,1);
}
