#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
static GLfloat spin = 0.0;
void init(void){
	glShadeModel (GL_FLAT);
}
void display(void)
{
	glClearColor (0.110, 0.183, 0.255, 1.0);
    glClear(GL_COLOR_BUFFER_BIT); 
    glPushMatrix();
    
    glRotatef(90.0,1.0,0.0,0.0);
	glRotatef(spin, 0.0, 0.0, 1.0);
    
    //sun
    glColor3ub(255,255,255);
    glutWireSphere(0.3,20,20);
    
    //earth
    glTranslatef(.55, 0, 0);
    glColor3ub(255,255,255);
	glutWireSphere(0.1,20,20);
	
	//moon
	glTranslatef(.2, 0, 0);
    glColor3ub(255,255,255);
	glutWireSphere(0.05,20,20);
    
    glPopMatrix();
	glutSwapBuffers();
}

void spinDisplay(void){
	spin = spin + 1.0;
	if (spin > 360.0)
		spin = spin - 360.0;
	glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Space Simulator");
    init ();
    glutDisplayFunc(display);
    glutIdleFunc(spinDisplay);
    glutMainLoop();
    return 0;
}

