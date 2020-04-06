#include <GL/glut.h>

//starting positions of the objects, from 0 to 360 degrees.
static int shoulder = 0, elbow = 0, hand = 0, thumb = 0, index = 0, middle = 0, ring = 0, little = 0;


static int thumbcap = 0, indexcap = 0, middlecap = 0, ringcap = 0, littlecap = 0;

static int sWidth = 1000, sHeight = 1500;

void init(void) 
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
   glEnable(GL_DEPTH_TEST);
}


void robotarm(void)
{
   glClear (GL_DEPTH_BUFFER_BIT);
   
   //Shoulder
   glPushMatrix();
   glTranslatef (-1.0, 0.0, 0.0);         
   glRotatef ((GLfloat) shoulder, 0.0, 0.0, 1.0);
   glRotatef ((GLfloat) shoulder, 0.5, 0.0, 0.0);
   glTranslatef (1.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(1.0,1.0,1.0);
   glScalef (2.0, 0.4, 1.0);
   glutSolidCube (1.0);
   glPopMatrix();
   
   
   //Elbow
   glTranslatef (1.0, 0.0, 0.0);
   glRotatef ((GLfloat) elbow, 0.0, 0.0, 1.0);
   glTranslatef (1.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(0.3,0.3,0.3);
   glScalef (2.0, 0.4, 1.0);
   glutSolidCube (1.0);
   glPopMatrix();
   //
  //Hand
   glTranslatef (1.0, 0.0, 0.0);
   glRotatef ((GLfloat) hand, 0.0, 0.0, 1.0);
   glTranslatef (0.25, 0.0, 0.0);
   glPushMatrix();
   glColor3f(0.0,0.0,1.0);
   glScalef (0.5, 0.5, 1.0);
   glutSolidCube (1.0);
   glPopMatrix();
   //
   //
   ////Thumb1
   glPushMatrix();
   glTranslatef (0.0, 0.125, -0.2);
   glRotatef ((GLfloat) thumb, 0.0, 0.0, 1.0);
   glTranslatef (0.25, 0.0, 0.8);
   glPushMatrix();
   glColor3f(1.0,0.0,0.0);
   glScalef (0.5, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   
   glTranslatef (0.15, 0.0, -0.8);
   glRotatef ((GLfloat) thumb, 0.0, 0.0, 1.0);
   glTranslatef (0.25, 0.0, 0.8);
   glPushMatrix();
   glColor3f(1.0,0.0,0.0);
   glScalef (0.5, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   glPopMatrix();
   
   
   //indexer Finger
   glPushMatrix();
   glTranslatef (0.5, 0.1, 0.0);
   glRotatef ((GLfloat) index, 0.0, 0.0, 1.0);
   glTranslatef (0.0, 0.0, 0.4);
   glPushMatrix();
   glColor3f(0.8,0.0,0.0);
   glScalef (0.6, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   
   glTranslatef (0.5, 0.0, 0.0);
   glRotatef ((GLfloat) index, 0.0, 0.0, 1.0);
   glTranslatef (0.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(0.8,0.0,0.0);
   glScalef (0.6, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();       
   glPopMatrix();
 
   //
   ////Middle Finger
   glPushMatrix();
   glTranslatef (0.5, 0.10, 0.0);
   glRotatef ((GLfloat) middle, 0.0, 0.0, 1.0);
   glTranslatef (0.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(0.65,0.0,0.0);
   glScalef (0.6, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   
   glTranslatef (0.5, 0.0, 0.0);
   glRotatef ((GLfloat) middle, 0.0, 0.0, 1.0);
   glTranslatef (0.0, 0.0, 0.0);
   glPushMatrix();
   glColor3f(0.65,0.0,0.0);
   glScalef (0.6, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   glPopMatrix();
   //
   //
   ////Ring Finger
   glPushMatrix();
   glTranslatef (0.5, 0.1, 0.0);
   glRotatef ((GLfloat) ring, 0.0, 0.0, 1.0);
   glTranslatef (0.0, 0.0, -0.4);
   glPushMatrix();
   glColor3f(0.5,0.0,0.0);
   glScalef (0.6, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   
   glTranslatef (0.5, 0.1, 0.0);
   glRotatef ((GLfloat) ring, 0.0, 0.0, 1.0);
   glTranslatef (0.0, -0.1,  0.0);
   glPushMatrix();
   glColor3f(0.5,0.0,0.0);
   glScalef (0.6, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   glPopMatrix();
   
   
  //little Finger
   glPushMatrix();
   glTranslatef (0.2, 0.1, 0.0);
   glRotatef ((GLfloat) little, 0.0, 0.0, 1.0);
   glTranslatef (0.0, 0.0, -0.6);
   glPushMatrix();
   glColor3f(0.35,0.0,0.0);
   glScalef (0.5, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();

   glTranslatef (0.4, 0.1, 0.0);
   glRotatef ((GLfloat) little, 0.0, 0.0, 1.0);
   glTranslatef (0.0, -0.1, 0.0);
   glPushMatrix();
   glColor3f(0.35,0.0,0.0);
   glScalef (0.6, 0.2, 0.2);
   glutSolidCube (0.8);
   glPopMatrix();
   glPopMatrix();

 
   glPopMatrix();
   glutSwapBuffers();
 
}

void reshape (int w, int h)
{
   sWidth=w;
   sHeight=h;
}

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT);
  
	glLoadIdentity ();
	
	gluPerspective(65.0, (GLfloat) sWidth/(GLfloat) sHeight, 1.0, 20.0);
	gluLookAt(6,6,-0.0, 0,0,-5.0, 0,1,0);  

	glTranslatef (0.0, 0.0, -5.0);
        robotarm();
        robotarm();

  glutSwapBuffers();
}
void keyboard (unsigned char key, int x, int y)
{
   switch (key) {
      //Shoulder
      case 's':
         shoulder = (shoulder + 5) % 360;
         glutPostRedisplay();
         break;
      case 'S':
         shoulder = (shoulder - 5) % 360;
         glutPostRedisplay();
         break;
      //Elbow
      case 'e':
	 if (elbow < 180)
         elbow = (elbow + 5) % 360;
         glutPostRedisplay();
         break;
      case 'E':
	 if (elbow > 0)
         elbow = (elbow - 5) % 360;
         glutPostRedisplay();
         break;
      //Hand
      case 'h':
	 if (hand < 90)
	 hand = (hand + 5) % 360;
         glutPostRedisplay();
         break;
      case 'H':
	 if (hand > 0)
	 hand = (hand - 5) % 360;
         glutPostRedisplay();
         break;
	 
      //Thumb 
      case 't':
	 if (thumb < 90)
         thumb = (thumb + 5) % 360;
         glutPostRedisplay();
         break;
      case 'T':
	 if (thumb > 0)
         thumb = (thumb - 5) % 360;
         glutPostRedisplay();
         break;
	 
      //indexer Finger
      case 'i':
	 if (index < 90)
         index = (index + 5) % 360;
         glutPostRedisplay();
         break;
      case 'I':
	 if (index > 0)
         index = (index - 5) % 360;
         glutPostRedisplay();
         break;
	 
      //Middle Finger
      case 'm':
	 if (middle < 90)
         middle = (middle + 5) % 360;
         glutPostRedisplay();
         break;
      case 'M':
	 if (middle > 0)
         middle = (middle - 5) % 360;
         glutPostRedisplay();
         break;
	 
      //Ring Finger
      case 'r':
	 if (ring < 90)
         ring = (ring + 5) % 360;
         glutPostRedisplay();
         break;
      case 'R':
	 if (ring > 0)
         ring = (ring - 5) % 360;
         glutPostRedisplay();
         break;
	 
      //little Finger
      case 'l':
	 if (little < 90)
         little = (little + 5) % 360;
         glutPostRedisplay();
         break;
      case 'L':
	 if (little > 0)
         little = (little - 5) % 360;
         glutPostRedisplay();
	 break;
	  case 'c':
         if (thumb < 90)
         thumb = (thumb + 5) % 360;
         if (index < 90)
         index = (index + 5) % 360;
         if (middle < 90)
         middle = (middle + 5) % 360;
         if (ring < 90)
         ring = (ring + 5) % 360;
         if (little < 90)
         little = (little + 5) % 360;
         glutPostRedisplay();
         break;
      case 'C':
         if (thumb > 0)
         thumb = (thumb - 5) % 360;
         if (index > 0)
         index = (index - 5) % 360;
         if (middle > 0)
         middle = (middle - 5) % 360;
         if (ring > 0)
         ring = (ring - 5) % 360;
	 if (little > 0)
         little = (little - 5) % 360;
         glutPostRedisplay();
	 break;
	  case 'q':
         exit(0);
         break;
      default:
         break;
   }
}
void menu(int id)
{
	switch(id)
	{
		case 1:exit(0);
			break;
		
	}
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
	glEnd();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize (sWidth, sHeight); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow ("Robotic Arm");
   init();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutCreateMenu(menu);
   glutAddMenuEntry("Exit",1);
   glutAttachMenu(GLUT_RIGHT_BUTTON);
   glutMainLoop();
   return 0;
}