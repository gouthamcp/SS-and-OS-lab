
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#define TEXTID     3
static GLfloat theta[]={0.0,0.0,0.0};
float zoom=0.5;
static GLint axis=1;
double m=0;

void body1()
{
double i,a=0;
	GLfloat mat_ambient[]={.2f,0.2f,0.2f,5.0f};
	GLfloat mat_diffuse[]={1.5,1.5,1.5,5};
	GLfloat mat_specular[]={1.0f,1.0f,1.0f,5.0f};
	GLfloat mat_shininess[]={50.0f};

	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

	GLfloat lightIntensity[]={1.0f,0.0f,0.0f,3.0f};
	GLfloat lightIntensity1[]={1.0f,1.0f,0.0f,3.0f};
	GLfloat lightIntensity2[]={0.0f,0.0f,0.0f,3.0f};
	GLfloat lightIntensity3[]={1.0f,1.0f,1.0f,3.0f};
	GLfloat lightIntensity4[]={0.0f,0.0f,0.0f,3.0f};

	GLfloat light_position[]={1.55f,1.5f,-1.5f,0.0f};
	GLfloat light_position1[]={7.5f,3.5f,-5.5f,1.0f};

	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);


	

		glLoadIdentity();
		glRotatef(theta[0],1.0,0.0,0.0);
		glRotatef(theta[1],0.0,0.0,0.0);
		glRotatef(theta[2],0.0,0.0,1.0);
		glRotatef(theta[3],0.0,1.0,0.0);
		//glColor3f(0.0,1.0,0.0);
		glScalef(zoom,zoom,zoom);

			/*to create the head*/

			
			glutSolidSphere(0.6,100,10);

			/*to create the body*/
			glTranslated(0.0,-0.8,0.0);
			glutSolidSphere(0.5,100,10);

			/*to create the hands*/

			glTranslated(0.63,0.0,0.0);
			glutSolidSphere(0.2,100,10);

			glTranslated(-1.27,0.0,0.0);
			glutSolidSphere(0.2,100,10);

			/*to create the eyes*/
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity2);

			glTranslated(.49,0.8,0.45);
			glutSolidSphere(.2,100,10);



			glTranslated(0.31,0.0,-0.01);
			glutSolidSphere(.2,100,10);

			/*to create the horns*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

			glTranslated(0.1,0.3,-0.3);
			glRotated(120,0.0,1.0,1.0);
			glutSolidCone(0.3,0.9,5.0,100.0);


			glTranslated(0.3,0.3,-0.3);
			glRotated(120,0.0,1.0,1.0);
			glutSolidCone(0.3,0.9,5.0,100.0);

			/*to create the stick*/

			glLightfv(GL_LIGHT0,GL_POSITION,light_position);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);

			glTranslatef(-0.7,-1.6,-1.3);
			glTranslatef(1,1.2,1.5);
			glTranslatef(0,0,0);
			glRotatef(110,0,0,1);
			glRotatef(60,1,0,0);
			glRotatef(50,0,1,0);
			glRotatef(70,0,0,1);
			glRotatef(10,0,1,0);
			glRotatef(350,1,0,0);
			glRotatef(-30,0,1,0);

		/*upper portion of the stick*/

			for(i=0;i<17;i++)
			{
				//glColor3f(1.0,0.0,0.0);
				glutSolidCube(.1);
				glTranslated(-0.1,0,0);

			}

		/*lower portion of the stick*/

			for(i=0;i<30;i++)
			{
			//	glColor3f(1.0,0.0,0.0);
				glutSolidCube(.1);
				glTranslated(0.1,0,0);
				glRotatef(25,1,0,0);


			}


			/*to create the sphere on the top of stick*/

				for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity4);


				glTranslatef(0,0,0);
				glRotatef(10,1,0,0);
				glutSolidSphere(.3,50,50);

			}

			/*to create the sharp spikes for the doll weapon*/

			for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

				glTranslatef(0,0,0);
				glRotatef(10,1,0,0);
				//glutSolidCone(0.02,0.2,2,2);
					if(m>2)
			{
					m=0;

			}
			else

				glutSolidCone(0.02,.1+m,2,2);

				m+=0.08;


			}

			/*to create a cube inside the sphere for the doll weapon*/

			for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

				glRotatef(10,1,0,0);
				//glutSolidCube(.42);
				glRotatef(20,1,0,0);

			}

			/*X creating the leg of the doll X*/
			
			glTranslatef(-2.7,0.5,0);
			glRotatef(5,0,0,1);
			for(i=0;i<2;i++)
			{

			glutSolidCube(.3);
			glTranslatef(0,0,0);


			}
			glTranslatef(0,.38,0);
			//glutSolidCube(.3);
			/*X creating the leg of the doll X*/


			/*creating the plate on which the doll stands*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity2);
			glLightfv(GL_LIGHT0,GL_POSITION,light_position1);


			glTranslatef(-.16,-0.15,0);
			glRotatef(90,0,1,0);
			glutSolidCone(0.8,0.0,100,100);

			/*creating the ring on doll's head*/

			glTranslated(0,-0.1,2.5);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);

			glutSolidTorus(0.02,0.4,10,100);

			/*creating the legs*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

			glTranslated(0.1,-.15,-2.4);
			glRotated(10,0,1,0);
			glutSolidTorus(.1,.18,10,5);

			glTranslated(0,0.4,0);
			glRotatef(-8,0,1,0);
			glutSolidTorus(.1,.17,10,5);

			/*making of the doll's tail*/

			glTranslated(-1.5,-1.1,0.2);
			for(i=0;i<3.9;i=i+0.1)
			{

			glutSolidCube(0.05);
			glTranslated(0.05,0,0);
			glRotatef(10,1,1,0);

			}


			glTranslated(-1.02,-0.9,-0.03);
			glRotated(230,0,1,0);
			glutSolidCone(0.1,.2,10,10);
			glutSolidCone(0.1,0,10,10);



glFlush();
glutSwapBuffers();

}

void body2()
{
double i,a=0;
	GLfloat mat_ambient[]={.2f,0.2f,0.2f,5.0f};
	GLfloat mat_diffuse[]={1.5,1.5,1.5,5};
	GLfloat mat_specular[]={1.0f,1.0f,1.0f,5.0f};
	GLfloat mat_shininess[]={50.0f};

	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

	GLfloat lightIntensity[]={1.0f,0.0f,0.0f,3.0f};
	GLfloat lightIntensity1[]={1.0f,1.0f,0.0f,3.0f};
	GLfloat lightIntensity2[]={0.0f,0.0f,0.0f,3.0f};
	GLfloat lightIntensity3[]={1.0f,1.0f,1.0f,3.0f};
	GLfloat lightIntensity4[]={0.0f,0.0f,0.0f,3.0f};

	GLfloat light_position[]={1.55f,1.5f,-1.5f,0.0f};
	GLfloat light_position1[]={7.5f,3.5f,-5.5f,1.0f};

	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);


	

		glLoadIdentity();
		glRotatef(theta[0],1.0,0.0,0.0);
		glRotatef(theta[1],0.0,0.0,0.0);
		glRotatef(theta[2],0.0,0.0,1.0);
		glRotatef(theta[3],0.0,1.0,0.0);
		//glColor3f(0.0,1.0,0.0);
		glScalef(zoom,zoom,zoom);

			/*to create the head*/

			
			glutSolidSphere(0.6,100,10);

			/*to create the body*/
			glTranslated(0.0,-0.8,0.0);
			glutSolidSphere(0.5,100,10);

			/*to create the hands*/

			glTranslated(0.63,0.0,0.0);
			glutSolidSphere(0.2,100,10);

			glTranslated(-1.27,0.0,0.0);
			glutSolidSphere(0.2,100,10);

			/*to create the eyes*/
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity2);

			glTranslated(.49,0.8,0.45);
			glutSolidSphere(.2,100,10);



			glTranslated(0.31,0.0,-0.01);
			glutSolidSphere(.2,100,10);

			/*to create the horns*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);

			glTranslated(0.1,0.3,-0.3);
			glRotated(120,0.0,1.0,1.0);
			glutSolidCone(0.3,0.9,5.0,100.0);


			glTranslated(0.3,0.3,-0.3);
			glRotated(120,0.0,1.0,1.0);
			glutSolidCone(0.3,0.9,5.0,100.0);

			/*to create the stick*/

			glLightfv(GL_LIGHT0,GL_POSITION,light_position);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

			glTranslatef(-0.7,-1.6,-1.3);
			glTranslatef(1,1.2,1.5);
			glTranslatef(0,0,0);
			glRotatef(110,0,0,1);
			glRotatef(60,1,0,0);
			glRotatef(50,0,1,0);
			glRotatef(70,0,0,1);
			glRotatef(10,0,1,0);
			glRotatef(350,1,0,0);
			glRotatef(-30,0,1,0);

		/*upper portion of the stick*/

			for(i=0;i<17;i++)
			{
				//glColor3f(1.0,0.0,0.0);
				glutSolidCube(.1);
				glTranslated(-0.1,0,0);

			}

		/*lower portion of the stick*/

			for(i=0;i<30;i++)
			{
			//	glColor3f(1.0,0.0,0.0);
				glutSolidCube(.1);
				glTranslated(0.1,0,0);
				glRotatef(25,1,0,0);


			}


			/*to create the sphere on the top of stick*/

				for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity4);


				glTranslatef(0,0,0);
				glRotatef(10,1,0,0);
				glutSolidSphere(.3,50,50);

			}

			/*to create the sharp spikes for the doll weapon*/

			for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

				glTranslatef(0,0,0);
				glRotatef(10,1,0,0);
				//glutSolidCone(0.02,0.2,2,2);
					if(m>2)
			{
					m=0;

			}
			else

				glutSolidCone(0.02,.1+m,2,2);

				m+=0.08;


			}

			/*to create a cube inside the sphere for the doll weapon*/

			for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);

				glRotatef(10,1,0,0);
				//glutSolidCube(.42);
				glRotatef(20,1,0,0);

			}

			/*X creating the leg of the doll X*/
			
			glTranslatef(-2.7,0.5,0);
			glRotatef(5,0,0,1);
			for(i=0;i<2;i++)
			{

			glutSolidCube(.3);
			glTranslatef(0,0,0);


			}
			glTranslatef(0,.38,0);
			//glutSolidCube(.3);
			/*X creating the leg of the doll X*/


			/*creating the plate on which the doll stands*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity2);
			glLightfv(GL_LIGHT0,GL_POSITION,light_position1);


			glTranslatef(-.16,-0.15,0);
			glRotatef(90,0,1,0);
			glutSolidCone(0.8,0.0,100,100);

			/*creating the ring on doll's head*/

			glTranslated(0,-0.1,2.5);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);

			glutSolidTorus(0.02,0.4,10,100);

			/*creating the legs*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);

			glTranslated(0.1,-.15,-2.4);
			glRotated(10,0,1,0);
			glutSolidTorus(.1,.18,10,5);

			glTranslated(0,0.4,0);
			glRotatef(-8,0,1,0);
			glutSolidTorus(.1,.17,10,5);

			/*making of the doll's tail*/

			glTranslated(-1.5,-1.1,0.2);
			for(i=0;i<3.9;i=i+0.1)
			{

			glutSolidCube(0.05);
			glTranslated(0.05,0,0);
			glRotatef(10,1,1,0);

			}


			glTranslated(-1.02,-0.9,-0.03);
			glRotated(230,0,1,0);
			glutSolidCone(0.1,.2,10,10);
			glutSolidCone(0.1,0,10,10);



glFlush();
glutSwapBuffers();

}


void body3()
{
double i,a=0;
	GLfloat mat_ambient[]={.2f,0.2f,0.2f,5.0f};
	GLfloat mat_diffuse[]={1.5,1.5,1.5,5};
	GLfloat mat_specular[]={1.0f,1.0f,1.0f,5.0f};
	GLfloat mat_shininess[]={50.0f};

	glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
	glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
	glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
	glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

	GLfloat lightIntensity[]={1.0f,0.0f,0.0f,3.0f};
	GLfloat lightIntensity1[]={1.0f,1.0f,0.0f,3.0f};
	GLfloat lightIntensity2[]={0.0f,0.0f,0.0f,3.0f};
	GLfloat lightIntensity3[]={1.0f,1.0f,1.0f,3.0f};
	GLfloat lightIntensity4[]={0.0f,0.0f,0.0f,3.0f};

	GLfloat light_position[]={1.55f,1.5f,-1.5f,0.0f};
	GLfloat light_position1[]={7.5f,3.5f,-5.5f,1.0f};

	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity3);


	

		glLoadIdentity();
		glRotatef(theta[0],1.0,0.0,0.0);
		glRotatef(theta[1],0.0,0.0,0.0);
		glRotatef(theta[2],0.0,0.0,1.0);
		glRotatef(theta[3],0.0,1.0,0.0);
		//glColor3f(0.0,1.0,0.0);
		glScalef(zoom,zoom,zoom);

			/*to create the head*/

			
			glutSolidSphere(0.6,100,10);

			/*to create the body*/
			glTranslated(0.0,-0.8,0.0);
			glutSolidSphere(0.5,100,10);

			/*to create the hands*/

			glTranslated(0.63,0.0,0.0);
			glutSolidSphere(0.2,100,10);

			glTranslated(-1.27,0.0,0.0);
			glutSolidSphere(0.2,100,10);

			/*to create the eyes*/
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity2);

			glTranslated(.49,0.8,0.45);
			glutSolidSphere(.2,100,10);



			glTranslated(0.31,0.0,-0.01);
			glutSolidSphere(.2,100,10);

			/*to create the horns*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity3);

			glTranslated(0.1,0.3,-0.3);
			glRotated(120,0.0,1.0,1.0);
			glutSolidCone(0.3,0.9,5.0,100.0);


			glTranslated(0.3,0.3,-0.3);
			glRotated(120,0.0,1.0,1.0);
			glutSolidCone(0.3,0.9,5.0,100.0);

			/*to create the stick*/

			glLightfv(GL_LIGHT0,GL_POSITION,light_position);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity2);

			glTranslatef(-0.7,-1.6,-1.3);
			glTranslatef(1,1.2,1.5);
			glTranslatef(0,0,0);
			glRotatef(110,0,0,1);
			glRotatef(60,1,0,0);
			glRotatef(50,0,1,0);
			glRotatef(70,0,0,1);
			glRotatef(10,0,1,0);
			glRotatef(350,1,0,0);
			glRotatef(-30,0,1,0);

		/*upper portion of the stick*/

			for(i=0;i<17;i++)
			{
				//glColor3f(1.0,0.0,0.0);
				glutSolidCube(.1);
				glTranslated(-0.1,0,0);

			}

		/*lower portion of the stick*/

			for(i=0;i<30;i++)
			{
			//	glColor3f(1.0,0.0,0.0);
				glutSolidCube(.1);
				glTranslated(0.1,0,0);
				glRotatef(25,1,0,0);


			}


			/*to create the sphere on the top of stick*/

				for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity1);


				glTranslatef(0,0,0);
				glRotatef(10,1,0,0);
				glutSolidSphere(.3,50,50);

			}

			/*to create the sharp spikes for the doll weapon*/

			for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

				glTranslatef(0,0,0);
				glRotatef(10,1,0,0);
				//glutSolidCone(0.02,0.2,2,2);
					if(m>2)
			{
					m=0;

			}
			else

				glutSolidCone(0.02,.1+m,2,2);

				m+=0.08;


			}

			/*to create a cube inside the sphere for the doll weapon*/

			for(a=0;a<46;a=a+1)
			{
				glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity3);

				glRotatef(10,1,0,0);
				//glutSolidCube(.42);
				glRotatef(20,1,0,0);

			}

			/*X creating the leg of the doll X*/
			
			glTranslatef(-2.7,0.5,0);
			glRotatef(5,0,0,1);
			for(i=0;i<2;i++)
			{

			glutSolidCube(.3);
			glTranslatef(0,0,0);


			}
			glTranslatef(0,.38,0);
			//glutSolidCube(.3);
			/*X creating the leg of the doll X*/


			/*creating the plate on which the doll stands*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity4);
			glLightfv(GL_LIGHT0,GL_POSITION,light_position1);


			glTranslatef(-.16,-0.15,0);
			glRotatef(90,0,1,0);
			glutSolidCone(0.8,0.0,100,100);

			/*creating the ring on doll's head*/

			glTranslated(0,-0.1,2.5);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity);

			glutSolidTorus(0.02,0.4,10,100);

			/*creating the legs*/

			glLightfv(GL_LIGHT0,GL_DIFFUSE,lightIntensity3);

			glTranslated(0.1,-.15,-2.4);
			glRotated(10,0,1,0);
			glutSolidTorus(.1,.18,10,5);

			glTranslated(0,0.4,0);
			glRotatef(-8,0,1,0);
			glutSolidTorus(.1,.17,10,5);

			/*making of the doll's tail*/

			glTranslated(-1.5,-1.1,0.2);
			for(i=0;i<3.9;i=i+0.1)
			{

			glutSolidCube(0.05);
			glTranslated(0.05,0,0);
			glRotatef(10,1,1,0);

			}


			glTranslated(-1.02,-0.9,-0.03);
			glRotated(230,0,1,0);
			glutSolidCone(0.1,.2,10,10);
			glutSolidCone(0.1,0,10,10);

glFlush();
glutSwapBuffers();

}

void DrawTextXY(double x,double y,double z,double scale,char *s)
{
   int i;

   glPushMatrix();
   glTranslatef(x,y,z);
   glScalef(scale,scale,scale);
   for (i=0;i < strlen(s);i++)
      glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,s[i]);
	  //glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[i]);
   glPopMatrix();
}


void cover()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glClearColor(0,0,0,0.0);

	glTranslatef(0.0,0.0,-6.0);
	glTranslatef(0.0,-1.3,0.0);

		glColor3f(1.00,0.60,0.10);
	glLoadName(TEXTID);

	DrawTextXY(-1.7,3.5,0.4,0.001,"   GRAPHICAL IMPLEMENTATION OF  ");

	glColor3f(0.4,0.6,1.0);
	DrawTextXY(-1.75,2.5,0.0,0.0032,"   DOLL  ");

/*	glColor3f(1.0,0.8,0.4);
	DrawTextXY(-1.25,2.1,0.0,0.001,"     1 : PROCEED ");
	DrawTextXY(-1.25,1.9,0.0,0.001,"     2 : HELP ");
	DrawTextXY(-1.25,1.7,0.0,0.001,"     3 : EXIT ");
*/
	glColor3f(0.0,1.0,1.0);
	DrawTextXY(-3.25,1.5,0.5,0.0009,"     SUBMITTED BY :- ");

	glColor3f(0.0,1.0,0.0);
	DrawTextXY(-2.5,1.2,0.98,0.001,"USHA ");


	DrawTextXY(1,1.2,0.98,0.001,"VINUTHA K M ");
	glColor3f(1.0,0.0,1.0);
	DrawTextXY(-2.5,0.95,0.9,0.001,"4AD14CS415");
	DrawTextXY(1,0.95,0.9,0.001,"4AD13CS101");

	glColor3f(0.0,1.0,1.0);
	DrawTextXY(-1.25,0.1,0.0,0.0009," UNDER THE GUIDANCE OF: ");
	glColor3f(1.0,1.0,0.0);
	DrawTextXY(-1.25,-.2,0.0,0.001,"     MRS.SNEHA C R ");
	DrawTextXY(-1,-.5,0.2,0.0009,"ASSISTANT PROF...DEPT. OF CSE");
	DrawTextXY(-1,-.8,0.2,0.0009,"ATME COLLEGE OF ENGINEERING");
	glColor3f(0.3,0.3,0.6);

	glFlush();			//Finish rendering
	glutSwapBuffers();
}




void display()

{
	glClearColor(0.5,0.7,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        cover();
	body1();
}

void display1()
{
	glClearColor(1.0,0.5,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	body2();
}

void display2()
{
	glClearColor(1.0,0.5,0.5,1.0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	body3();
}




void spin()
{
	GLint axis=0;
	theta[axis]+=3.0;
	if(theta[axis]>360.0) theta[axis]-=360.0;
	if(axis==1)
	{
			theta[axis]=0;
	}

	display();
}
void rotate_Z()
{
	GLint axis=2;
	theta[axis]+=3.0;
		if(theta[axis]>360.0) theta[axis]-=360.0;
		if(axis==1)
		{
				theta[axis]=2;
		}
		display2();
	}

void rotate()
{
	GLint axis=3;
	theta[axis]+=3.0;
		if(theta[axis]>360.0) theta[axis]-=360.0;
		if(axis==1)
		{
				theta[axis]=3;
		}
		display1();
	}

void keyboard(unsigned char key,int x,int y)
{
	switch(key)
	{
	case '1':
		 zoom /= .9;
		    glutPostRedisplay();
    break;
  case '2':
    zoom *= .9;
    glutPostRedisplay();
    break;
	
  case 'x':
		 glutIdleFunc(spin);
    break;

	case 'y':
		 glutIdleFunc(rotate);
    break;

	case 'z':
		 glutIdleFunc(rotate_Z);
    break;


 case 27:             /* ESC */
    exit(0);
	break;
	}
}

void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN) axis=0;
	if(btn==GLUT_MIDDLE_BUTTON && state==GLUT_DOWN) axis=2;
}


void menu(int selection)
{
  switch (selection)
  {
  case 1:
	  zoom /= .9;
	 glutPostRedisplay();
	 break;
  case 2:
	  zoom *= .9;
	  glutPostRedisplay();
    break;
  case 3:
	  glutIdleFunc(spin);

	  break;
  case 4:glutIdleFunc(rotate);
	  

    break;

  case 5:
	  glutIdleFunc(rotate_Z);
	  break;



	  case 6:
	  glutIdleFunc(display2);
	  break;

	   
  case 666:
    exit(0);
  }
}

void myReshape(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		glOrtho(-2.0,2.0,-2.0 * (GLfloat) h/ (GLfloat) w,2.0 * (GLfloat) h/ (GLfloat) w, -10.0,10.0);
	else
		glOrtho(-2.0 * (GLfloat) w / (GLfloat) h,2.0 * (GLfloat) w / (GLfloat) h,-2.0,2.0,-10.0,10.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);

	printf("Rotate around x: use x in keyboard\n");
	printf("Rotate around y: use y in keyboard\n");
		printf("Rotate around z: use z in keyboard\n");

			printf("\nTo Zoom in : use Numeric 1 in keyboard\n");
			printf("To Zoom out : use Numeric 2 in keyboard");

	glutInitWindowSize(500, 500);
	glutCreateWindow("DOLL");
	glutReshapeFunc(myReshape);
	glutDisplayFunc(display);

	glutCreateMenu(menu);
	glutAddMenuEntry("Zoom in", 1);
	glutAddMenuEntry("Zoom out", 2);
	glutAddMenuEntry("Rotation in x axis", 3);
	glutAddMenuEntry("Rotation in y axis", 4);
	glutAddMenuEntry("Rotation in z axis", 5);
	
	glutAddMenuEntry("Stop the rotation of Doll", 6);

	glutAddMenuEntry("Quit", 666);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	//glutIdleFunc(display);
	//glutIdleFunc(spin);
	
	  glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_NORMALIZE);
	
	glViewport(0,0,500,500);

	glutMainLoop();
}
