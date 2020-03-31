#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
# define PI 3.142
int i=0;
int disp=0,mainmenu;
void *currentfont;
 float degInRad=0.0;
void drawString(float x,float y,float z,char *string);
 void circle1(GLfloat x, GLfloat y, GLfloat radius)
  {
    int i;
    float angle;
    glBegin(GL_POLYGON);
    for(i=0;i<100;i++)
	{
        angle = i*1*(M_PI/100);
        glVertex2f(x+(cos(angle)*radius),y+(sin(angle)*radius));
    	}
    glEnd();
  }

void circle(GLfloat x, GLfloat y, GLfloat radius)
  {
    int i;
    float angle;
    glBegin(GL_POLYGON);
    for(i=0;i<100;i++)
	{
        angle = i*2*(M_PI/100);
        glVertex2f(x+(cos(angle)*radius),y+(sin(angle)*radius));
    	}
    glEnd();
  }

void drawCircleFilled (double centerX, double centerY, double radiusX, double radiusY)
{
 //   const float DEG2RAD = 3.14159 / 180;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2d (centerX, centerY);
        for (i =-1; i < 360; i++) {
              degInRad=i*(3.14159 / 180);
             glVertex2d (centerX + cos (degInRad) * radiusX, 
                            centerY + sin (degInRad) * radiusY);
            
        }
        
    glEnd();
} 

void drawSemiCircleFilled (double centerX, double centerY, double radiusX, double radiusY)
{
 //   const float DEG2RAD = 3.14159 / 180;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2d (centerX, centerY);
        for (i =-1; i < 360; i++) {
              degInRad=i*(3.14159/352);
             glVertex2d (centerX + cos (degInRad) * radiusX, 
                            centerY + sin (degInRad) * radiusY);
            
        }
        
    glEnd();
} 

void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,1.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
}

void text()
{

glClear(GL_COLOR_BUFFER_BIT);
setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1,1,0);

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(0.57,-0.550,0,"CO ORDINATES");
	drawstring(0.55,-0.620,0,"Ms.Kavyashree E D");
	drawstring(0.50,-0.690,0,"ASSISTANT PROFESSOR");

	glColor3f(1,1,0);
	drawstring(-0.930,-0.550,0,"UNDER THE GUIDANCE OF");
	drawstring(-0.820,-0.620,0,"Ms.Kavyashree E D");
	drawstring(-0.9,-0.70,0,"ASSISTANT PROFESSOR");
      
	glColor3f(1,1,0);
        drawstring(-0.180,0.180,0,"PROJECT ASSOCIATES");
        drawstring(-0.280,0.110,0,"Abhishek Gowda T B (4AD17CS400)");
	drawstring(-0.280,0.030,0,"Akhilesh P                  (4AD17CS402)");
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
      
	glColor3f(0,1,0);
	drawstring(-0.18,0.550,0,"MINI PROJECT ON");
	glColor3f(1,0,0);
	drawstring(-0.540,0.450,0,"COMPUTER GRAPHICS AND VISUALIZATION MINI PROJECT");
        drawstring(-0.02,0.380,0,"on");
        setFont(GLUT_BITMAP_TIMES_ROMAN_24);
        glColor3f(1.0,1.0,1.0);
	drawstring(-0.110,0.30,0,"VISITING PALACE");

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,1);
	drawstring(-0.320,-0.1,0,"COMPUTER SCIENCE AND ENGINEERING");
	drawstring(-0.15,-0.17,0,"ATMECE,MYSURU");
	glFlush();
}

void flower(int x,int y)
{


glBegin(GL_POLYGON);  //start flower1 stem
       	glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.170,-0.35);
        glVertex2f(-0.186,-0.32);
        glVertex2f(-0.145,-0.25);
        glVertex2f(-0.170,-0.2);
        glEnd();   
	glBegin(GL_POLYGON);  //start flower1 stem
       	glColor3f(0.0, 1.0, 0.0);
        glVertex2f(-0.170,-0.35);
        glVertex2f(-0.180,-0.35);
        glVertex2f(-0.180,-0.45);
        glVertex2f(-0.170,-0.45);
        glEnd();   //end flower1 stem


}

void sun()		//SUN//
{
	glColor3f(1.0,1.0,0.0);
	//drawCircleFilled(-0.8,0.8, 0.06,0.08);
	circle(-0.80,0.75,0.08);
}
GLfloat p=-0.850,q=0.75;
void movesun()      		//  SUN MOVE FUNCTION  //
{
     if(p<0.0)
	{
	p=p+0.155;
	q=q+0.02;
	glColor3f(1.0,1.0,0.0);
	circle(p,q,0.08);
	glFlush();
        glutSwapBuffers();
	}
	else if(p<1.0)
	{
	p=p+0.155;
	q=q-0.02;
	glColor3f(1.0,1.0,0.0);
	circle(p,q,0.08);
	glFlush();
        glutSwapBuffers();
	}
	else if(p>0.850)
	{
	p=-0.850;
	q=0.75;
	glColor3f(1.0,1.0,0.0);
	circle(p,q,0.08);
	glFlush();
        glutSwapBuffers();
	}
}


void doll()
{
// ************************DOLL   1  *******************//
	

 	glColor3f(0.804, 0.522, 0.247);  //face
	drawCircleFilled(0.2,-0.5, 0.03, 0.05);
	glColor3f(0,0,0);
	drawCircleFilled(0.18,-0.48, 0.006, 0.006);	//eye1
	glColor3f(0,0,0);
	drawCircleFilled(0.219,-0.48, 0.006, 0.006);	//eye2

	glBegin(GL_POLYGON);		//cap
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(0.21,-0.43);
	glVertex2f(0.186,-0.43);
	glVertex2f(0.176,-0.46);
	glVertex2f(0.22,-0.46);
	glEnd();
	
	glBegin(GL_POLYGON);		//nose
	glColor3f(0.863, 0.078, 0.235);
	glVertex2f(0.199,-0.46);
	glVertex2f(0.195,-0.5);
	glVertex2f(0.204,-0.5);
	glEnd();
	glColor3f(0.863, 0.078, 0.235);
	drawCircleFilled(0.2,-0.52, 0.006, 0.006);	//mouth	
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.7, 0.5);	// shirt
	glVertex2f(0.199,-0.549);
	glVertex2f(0.16,-0.57);
	glVertex2f(0.168,-0.68);
	glVertex2f(0.23,-0.68);
	glVertex2f(0.24,-0.57);
	glEnd();
	glColor3f(0,0,0);
	drawCircleFilled(0.2,-0.59, 0.004, 0.004);	//button
	glColor3f(0,0,0);
	drawCircleFilled(0.2,-0.62, 0.004, 0.004);	//button
	glColor3f(0,0,0);
	drawCircleFilled(0.2,-0.65, 0.004, 0.004);	//button
	glBegin(GL_POLYGON);
	glColor3f(0.200, 0.200, 0.200);	//belt
	glVertex2f(0.168,-0.68);
	glVertex2f(0.23,-0.68);
	glVertex2f(0.23,-0.69);
	glVertex2f(0.168,-0.69);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.64, 0.37, 0.77);	//leg1
	glVertex2f(0.168,-0.69);
	glVertex2f(0.148,-0.8);
	glVertex2f(0.168,-0.8);
	glVertex2f(0.198,-0.69);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.64, 0.37, 0.77);	//leg2
	glVertex2f(0.23,-0.69);
	glVertex2f(0.25,-0.8);
	glVertex2f(0.23,-0.8);
	glVertex2f(0.20,-0.69);
	glEnd();
	glColor3f(0,0,1);
	drawCircleFilled(0.16,-0.801, 0.013, 0.013);	//shoee1
	drawCircleFilled(0.24,-0.801, 0.013, 0.013);	//shoee2
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//right hand
	glVertex2f(0.24,-0.574);
	glVertex2f(0.244,-0.68);
	glVertex2f(0.25,-0.68);
	glVertex2f(0.246,-0.574);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//lEFT hand
	glVertex2f(0.158,-0.574);
	glVertex2f(0.152,-0.68);
	glVertex2f(0.146,-0.68);
	glVertex2f(0.152,-0.574);
	glEnd();
}


void doll1()
{
 	glColor3f(0.80, 0.52, 0.24);  //face
	drawCircleFilled(-0.2,-0.5, 0.03, 0.05);
	glColor3f(0,0,0);
	drawCircleFilled(-0.18,-0.48, 0.006, 0.006);	//eye1
	glColor3f(0,0,0);
	drawCircleFilled(-0.219,-0.48, 0.006, 0.006);	//eye2
	
	glBegin(GL_POLYGON);		//nose
	glColor3f(0.863, 0.078, 0.235);
	glVertex2f(-0.199,-0.46);
	glVertex2f(-0.195,-0.5);
	glVertex2f(-0.204,-0.5);
	glEnd();
	glColor3f(0.863, 0.078, 0.235);
	drawCircleFilled(-0.2,-0.52, 0.006, 0.006);	//mouth	
	glBegin(GL_POLYGON);
	glColor3f(0.871, 0.722, 0.529);	// shirt
	glVertex2f(-0.199,-0.549);
	glVertex2f(-0.16,-0.57);
	glVertex2f(-0.168,-0.68);
	glVertex2f(-0.23,-0.68);
	glVertex2f(-0.24,-0.57);
	glEnd();
	glColor3f(0,0,0);
	drawCircleFilled(-0.2,-0.59, 0.004, 0.004);	//button
	glColor3f(0,0,0);
	drawCircleFilled(-0.2,-0.62, 0.004, 0.004);	//button
	glColor3f(0,0,0);
	drawCircleFilled(-0.2,-0.65, 0.004, 0.004);	//button
	glBegin(GL_POLYGON);
	glColor3f(0.200, 0.200, 0.200);	//belt
	glVertex2f(-0.168,-0.68);
	glVertex2f(-0.23,-0.68);
	glVertex2f(-0.23,-0.69);
	glVertex2f(-0.168,-0.69);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1
	glVertex2f(-0.168,-0.69);
	glVertex2f(-0.148,-0.8);
	glVertex2f(-0.168,-0.8);
	glVertex2f(-0.198,-0.69);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg2
	glVertex2f(-0.23,-0.69);
	glVertex2f(-0.25,-0.8);
	glVertex2f(-0.23,-0.8);
	glVertex2f(-0.20,-0.69);
	glEnd();
	glColor3f(0,0,1);
	drawCircleFilled(-0.16,-0.801, 0.013, 0.013);	//shoee1
	drawCircleFilled(-0.24,-0.801, 0.013, 0.013);	//shoee2
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//right hand
	glVertex2f(-0.24,-0.574);
	glVertex2f(-0.244,-0.68);
	glVertex2f(-0.25,-0.68);
	glVertex2f(-0.246,-0.574);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//lEFT hand
	glVertex2f(-0.158,-0.574);
	glVertex2f(-0.152,-0.68);
	glVertex2f(-0.146,-0.68);
	glVertex2f(-0.152,-0.574);
	glEnd();
}

  void doll2()
{
      
 	glColor3f(0.804, 0.522, 0.247);  //face
	drawCircleFilled(0.03,-0.3, 0.03, 0.05);
        glBegin(GL_POLYGON);		//cap
	glColor3f(1.0, 0.0, 0.1);
	glVertex2f(0.02,-0.23);
	glVertex2f(0.04,-0.23);
	glVertex2f(0.06,-0.27);
	glVertex2f(0.0,-0.27);
	glEnd();
	/*glColor3f(0,0,0);
	drawCircleFilled(0.015,-0.28, 0.006, 0.006);	//eye1
	glColor3f(0,0,0);
	drawCircleFilled(0.045,-0.28, 0.006, 0.006);*/	//eye2
	
	/*glBegin(GL_POLYGON);		//nose
	glColor3f(0.863, 0.078, 0.235);
	glVertex2f(0.0300,-0.26);
	glVertex2f(0.0250,-0.3);
	glVertex2f(0.0350,-0.3);
	glEnd();
	glColor3f(0.863, 0.078, 0.235);
	drawCircleFilled(0.029,-0.32, 0.006, 0.006);*/	//mouth	
	glBegin(GL_POLYGON);
	glColor3f(0.200, 0.322, 0.600);	// shirt
	glVertex2f(0.0290,-0.349);
	glVertex2f(-0.015,-0.37);
	glVertex2f(-0.006,-0.48);
	glVertex2f(0.07,-0.48);
	glVertex2f(0.076,-0.37);
	glEnd();
	/*glColor3f(0,0,0);
	drawCircleFilled(0.028,-0.39, 0.004, 0.004);	//button
	glColor3f(0,0,0);
	drawCircleFilled(0.028,-0.42, 0.004, 0.004);	//button
	glColor3f(0,0,0);
	drawCircleFilled(0.028,-0.45, 0.004, 0.004);*/	//button
	glBegin(GL_POLYGON);
	glColor3f(0.200, 0.200, 0.200);	//belt
	glVertex2f(-0.006,-0.48);
	glVertex2f(0.07,-0.48);
	glVertex2f(0.07,-0.49);
	glVertex2f(-0.006,-0.49);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.945, 0.871, 0.075);	//skirt
	glVertex2f(-0.006,-0.49);
	glVertex2f(0.07,-0.49);
	glVertex2f(0.08,-0.6);
	glVertex2f(-0.02,-0.6);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1
	glVertex2f(-0.01,-0.59);
	glVertex2f(-0.01,-0.65);
	glVertex2f(0.01,-0.65);
	glVertex2f(0.01,-0.59);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg2
	glVertex2f(0.05,-0.59);
	glVertex2f(0.05,-0.65);
	glVertex2f(0.07,-0.65);
	glVertex2f(0.07,-0.59);
	glEnd();
	
	glColor3f(0.5,0.0,1.0);
	drawCircleFilled(0.0,-0.66, 0.013, 0.013);	//shoee1
	drawCircleFilled(0.06,-0.66, 0.013, 0.013);	//shoee2
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//right hand
	glVertex2f(0.075,-0.372);
	glVertex2f(0.081,-0.49);
	glVertex2f(0.088,-0.49);
	glVertex2f(0.08,-0.372);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//lEFT hand
	glVertex2f(-0.02,-0.372);
	glVertex2f(-0.026,-0.49);
	glVertex2f(-0.02,-0.49);
	glVertex2f(-0.016,-0.372);
	glEnd();
}
void palace()
{
 glClear(GL_COLOR_BUFFER_BIT);


//sky
glBegin(GL_POLYGON);
 glColor3f(0.4,0.7,1.0);
 glVertex2f(1.0,1.0);
 glVertex2f(1.0,0.28);
 glVertex2f(-1.0,0.28);
 glVertex2f(-1.0,1.0);
 glEnd();

//cloud
	glColor3f(0.5,0.5,0.5);
	drawCircleFilled(-0.8,0.8, 0.08, 0.04);
	drawCircleFilled(-0.9,0.8, 0.08, 0.04);
	drawCircleFilled(-0.85,0.76, 0.08, 0.04);
	drawCircleFilled(-0.82,0.83, 0.08, 0.04);

	drawCircleFilled(0.6,0.8, 0.04, 0.02);
	drawCircleFilled(0.65,0.8, 0.04, 0.02);
	drawCircleFilled(0.6,0.79, 0.04, 0.02);
	drawCircleFilled(0.62,0.83, 0.04, 0.02);

	drawCircleFilled(0.8,0.8, 0.08, 0.04);
	drawCircleFilled(0.9,0.8, 0.08, 0.04);
	drawCircleFilled(0.8,0.76, 0.08, 0.04);
	drawCircleFilled(0.82,0.83, 0.08, 0.04);

// Gumbaz

//tower
glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.0,0.97, 0.004, 0.04);
//mini tower
glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.155,0.74, 0.004, 0.05);
drawCircleFilled(0.155,0.74, 0.004, 0.05);

//glColor3f(0.9,0.5,0.0);
glColor3f(0.7,0.0,0.1);
//drawCircleFilled(0.0003,0.3, 0.2, 0.4);
drawCircleFilled(0.0003,0.7, 0.11, 0.25);
//drawCircleFilled(0.0003,0.6, 0.1138, 0.38);

 glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.2);
 glVertex2f(0.2,0.35);
 glVertex2f(-0.2,0.35);
 glVertex2f(-0.2,0.6);
 glVertex2f(0.2,0.6);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.2);
 glVertex2f(0.11,0.6);
 glVertex2f(-0.11,0.6);
 glVertex2f(-0.11,0.76);
 glVertex2f(0.11,0.76);
 glEnd();

glColor3f(0.7,0.0,0.1);
//drawSemiCircleFilled(-0.3,0.5, 0.1, 0.2);
drawSemiCircleFilled(-0.154,0.62, 0.038, 0.12);
drawSemiCircleFilled(0.154,0.62, 0.038, 0.12);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.7,0.4);
 glVertex2f(-0.117,0.6);
 glVertex2f(-0.192,0.6);
 glVertex2f(-0.192,0.65);
 glVertex2f(-0.117,0.65);
 glEnd();


glBegin(GL_POLYGON);
 glColor3f(1.0,1.7,0.4);
 glVertex2f(0.116,0.6);
 glVertex2f(0.192,0.6);
 glVertex2f(0.192,0.65);
 glVertex2f(0.116,0.65);
 glEnd();

// center double arch
//glColor3f(1.9,1.6,1.0);
glColor3f(0.7,0.0,0.1);
drawSemiCircleFilled(0.0003,0.15, 0.228, 0.4);//1

glColor3f(1.0,0.7,0.0);
drawSemiCircleFilled(0.0003,0.1, 0.228, 0.4);//2

//glColor3f(1.0,0.7,0.4);
glColor3f(0.8,0.4,0.0);
drawSemiCircleFilled(0.0003,0.06, 0.228, 0.4);//3

//arc wall center
glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(-0.08,0.44);
 glVertex2f(-0.06,0.44);
 glVertex2f(-0.06,0.3);
 glVertex2f(-0.08,0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(-0.06,0.45);
 glVertex2f(-0.04,0.45);
 glVertex2f(-0.04,0.3);
 glVertex2f(-0.06,0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(-0.04,0.46);
 glVertex2f(0.02,0.46);
 glVertex2f(0.02,0.3);
 glVertex2f(-0.04,0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(0.04,0.46);
 glVertex2f(0.02,0.46);
 glVertex2f(0.02,0.3);
 glVertex2f(0.04,0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(0.06,0.45);
 glVertex2f(0.04,0.45);
 glVertex2f(0.04,0.3);
 glVertex2f(0.06,0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(0.08,0.44);
 glVertex2f(0.06,0.44);
 glVertex2f(0.06,0.3);
 glVertex2f(0.08,0.3);
 glEnd();

glColor3f(0.8,0.4,0.0);
drawSemiCircleFilled(0.0003,0.04, 0.08, 0.37);

//CENTER MINAR 1//

//center wall
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.2,-0.3);
 glVertex2f(-0.2,0.3);
 glVertex2f(0.2,0.3);
 glVertex2f(0.2,-0.3);
 glEnd();

//center minar arch 1//
 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(-0.16,-0.3);
 glVertex2f(-0.16,0.1);
 glVertex2f(0.16,0.1);
 glVertex2f(0.16,-0.3);
 glEnd();
 glColor3f(0.0,0.0,0.0);
 circle1(0.001,0.09,0.11);

 glBegin(GL_POLYGON);
 glColor3f(0.1,0.1,0.2);
 glVertex2f(-0.16,-0.01);
 glVertex2f(-0.16,-0.0);
 glVertex2f(0.16,-0.0);
 glVertex2f(0.16,-0.01);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0.1,0.1,0.2);
 glVertex2f(-0.16,-0.3);
 glVertex2f(-0.16,-0.05);
 glVertex2f(0.16,-0.05);
 glVertex2f(0.16,-0.3);
 glEnd();

glColor3f(0.0,0.0,0.0);
drawCircleFilled(0.0,-0.33, 0.15,0.275);

 //LEFT MINAR 2//

//left tower
glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.3,0.63, 0.004, 0.04);

 glColor3f(0.7,0.0,0.1);
//drawSemiCircleFilled(-0.3,0.5, 0.1, 0.2);
drawSemiCircleFilled(-0.3,0.45, 0.06, 0.15);
//sticks
glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.4,0.4);
 glVertex2f(-0.4,0.5);
 glVertex2f(-0.39,0.5);
 glVertex2f(-0.39,0.4);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.382,0.4);
 glVertex2f(-0.382,0.5);
 glVertex2f(-0.372,0.5);
 glVertex2f(-0.372,0.4);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.21,0.4);
 glVertex2f(-0.21,0.5);
 glVertex2f(-0.2,0.5);
 glVertex2f(-0.2,0.4);
 glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.218,0.4);
 glVertex2f(-0.218,0.5);
 glVertex2f(-0.228,0.5);
 glVertex2f(-0.228,0.4);
 glEnd();
//left basement
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.4,0.4);
 glVertex2f(-0.4,0.3);
 glVertex2f(-0.2,0.3);
 glVertex2f(-0.2,0.4);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.36,0.45);
 glVertex2f(-0.36,0.4);
 glVertex2f(-0.24,0.4);
 glVertex2f(-0.24,0.45);
 glEnd();

//wall
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(-0.4,-0.3);
 glVertex2f(-0.4,0.3);
 glVertex2f(-0.2,0.3);
 glVertex2f(-0.2,-0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(-0.37,-0.3);
 glVertex2f(-0.37,0.1);
 glVertex2f(-0.23,0.1);
 glVertex2f(-0.23,-0.3);
 glEnd();
 glColor3f(0.0,0.0,0.0);
 drawCircleFilled(-0.3,0.09, 0.06, 0.09);

//stage
glBegin(GL_POLYGON);
glColor3f(0.1,0.1,0.2);
 glVertex2f(-0.37,-0.01);
 glVertex2f(-0.37,-0.0);
 glVertex2f(-0.23,-0.0);
 glVertex2f(-0.23,-0.01);
 glEnd(); 

glBegin(GL_POLYGON);
 glVertex2f(-0.37,-0.09);
 glVertex2f(-0.37,-0.08);
 glVertex2f(-0.28,-0.08);
 glVertex2f(-0.28,-0.09);
 glEnd(); 

glBegin(GL_POLYGON);
 glVertex2f(-0.37,-0.16);
 glVertex2f(-0.37,-0.15);
 glVertex2f(-0.28,-0.15);
 glVertex2f(-0.28,-0.16);
 glEnd(); 

glBegin(GL_POLYGON);
 glVertex2f(-0.285,-0.01);
 glVertex2f(-0.285,-0.15);
 glVertex2f(-0.28,-0.15);
 glVertex2f(-0.28,-0.01);
 glEnd();


 //right minar//
//rigt tower
glColor3f(1.0,0.7,0.0);
drawCircleFilled(0.3,0.63, 0.004, 0.04);

glColor3f(0.7,0.0,0.1);
//drawCircleFilled(0.3,0.3, 0.1, 0.2);
 
drawSemiCircleFilled(0.3,0.45, 0.06, 0.15);

//sticks
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(0.4,0.4);
 glVertex2f(0.4,0.5);
 glVertex2f(0.39,0.5);
 glVertex2f(0.39,0.4);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(0.382,0.4);
 glVertex2f(0.382,0.5);
 glVertex2f(0.372,0.5);
 glVertex2f(0.372,0.4);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(0.21,0.4);
 glVertex2f(0.21,0.5);
 glVertex2f(0.2,0.5);
 glVertex2f(0.2,0.4);
 glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0,0.7,0.0);
 glVertex2f(0.218,0.4);
 glVertex2f(0.218,0.5);
 glVertex2f(0.228,0.5);
 glVertex2f(0.228,0.4);
 glEnd();
//right basement
glBegin(GL_POLYGON);
 glColor3f(1.0,0.6,0.0);
 glVertex2f(0.4,0.4);
 glVertex2f(0.4,0.3);
 glVertex2f(0.2,0.3);
 glVertex2f(0.2,0.4);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.6,0.0);
 glVertex2f(0.36,0.45);
 glVertex2f(0.36,0.4);
 glVertex2f(0.24,0.4);
 glVertex2f(0.24,0.45);
 glEnd();

//wall
glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.2);
 glVertex2f(0.2,-0.3);
 glVertex2f(0.2,0.3);
 glVertex2f(0.4,0.3);
 glVertex2f(0.4,-0.3);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
 glVertex2f(0.23,-0.3);
 glVertex2f(0.23,0.1);
 glVertex2f(0.37,0.1);
 glVertex2f(0.37,-0.3);
 glEnd();
 glColor3f(0.0,0.0,0.0);
 drawCircleFilled(0.3,0.10, 0.06, 0.09);
 
glBegin(GL_POLYGON);
 glColor3f(0.1,0.1,0.2);
 glVertex2f(0.37,-0.01);
 glVertex2f(0.37,-0.0);
 glVertex2f(0.23,-0.0);
 glVertex2f(0.23,-0.01);
 glEnd();


//left MIDDLE WALL//

  //left wall sticks
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.78,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.8,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.82,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.84,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.86,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.88,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);

 //right wall sticks//
 
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.54,0.28, 0.004, 0.04);//wall stick
  glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.52,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.5,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.48,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.46,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.44,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.42,0.28, 0.004, 0.04);//wall stick
 

 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.4,-0.3);
 glVertex2f(-0.4,0.28);
 glVertex2f(-0.9,0.28);
 glVertex2f(-0.9,-0.3);
 glEnd();

 //left middle wall upper gumbaz//
   glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.65,0.63, 0.004, 0.04);//gubaz stick
 glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.75,0.4, 0.004, 0.04);//left stick
 glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.73,0.4, 0.004, 0.04);//left stick
glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.55,0.4, 0.004, 0.04);//right stick
glColor3f(1.0,0.7,0.0);
drawCircleFilled(-0.57,0.4, 0.004, 0.04);//right stick


glColor3f(0.7,0.0,0.1); 
drawSemiCircleFilled(-0.65,0.45, 0.06, 0.15);//gumbaz


//left middle wall upper basement
 

 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.76,0.4);
 glVertex2f(-0.76,0.25);
 glVertex2f(-0.54,0.25);
 glVertex2f(-0.54,0.4);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(-0.71,0.45);
 glVertex2f(-0.71,0.4);
 glVertex2f(-0.59,0.4);
 glVertex2f(-0.59,0.45);
 glEnd();
  


 //upper basement inside 

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.69,0.4);
 glVertex2f(-0.69,0.28);
 glVertex2f(-0.61,0.28);
 glVertex2f(-0.61,0.4);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.65,0.4,0.03,0.045);
 
 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.75,0.38);
 glVertex2f(-0.75,0.28);
 glVertex2f(-0.71,0.28);
 glVertex2f(-0.71,0.38);
 glEnd();   

 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.55,0.38);
 glVertex2f(-0.55,0.28);
 glVertex2f(-0.59,0.28);
 glVertex2f(-0.59,0.38);
 glEnd(); 
 
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.56,0.28, 0.004, 0.04);//wall stick 
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.58,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.62,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.64,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.66,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.68,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.7,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.72,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.74,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.76,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);

// small arcs

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.892,0.18);
 glVertex2f(-0.892,0.1);
 glVertex2f(-0.809,0.1);
 glVertex2f(-0.809,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.8509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.792,0.18);
 glVertex2f(-0.792,0.1);
 glVertex2f(-0.709,0.1);
 glVertex2f(-0.709,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.7509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.692,0.18);
 glVertex2f(-0.692,0.1);
 glVertex2f(-0.609,0.1);
 glVertex2f(-0.609,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.6509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.592,0.18);
 glVertex2f(-0.592,0.1);
 glVertex2f(-0.509,0.1);
 glVertex2f(-0.509,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.5509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.492,0.18);
 glVertex2f(-0.492,0.1);
 glVertex2f(-0.409,0.1);
 glVertex2f(-0.409,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.4509,0.18, 0.036, 0.06);

// arcs
glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.86,-0.3);
 glVertex2f(-0.86,0.01);
 glVertex2f(-0.75,0.01);
 glVertex2f(-0.75,-0.3);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.8055,0.009, 0.048, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.71,-0.3);
 glVertex2f(-0.71,0.01);
 glVertex2f(-0.6,0.01);
 glVertex2f(-0.6,-0.3);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.655,0.009, 0.048, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.56,-0.3);
 glVertex2f(-0.56,0.01);
 glVertex2f(-0.45,0.01);
 glVertex2f(-0.45,-0.3);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(-0.505,0.009, 0.048, 0.06);

glBegin(GL_POLYGON);
glColor3f(0.1,0.1,0.2);
 glVertex2f(-0.56,-0.01);
 glVertex2f(-0.56,-0.00);
 glVertex2f(-0.45,-0.0);
 glVertex2f(-0.45,-0.01);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.71,-0.01);
 glVertex2f(-0.71,-0.0);
 glVertex2f(-0.6,-0.0);
 glVertex2f(-0.6,-0.01);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.86,-0.01);
 glVertex2f(-0.86,-0.0);
 glVertex2f(-0.75,-0.0);
 glVertex2f(-0.75,-0.01);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.56,-0.09);
 glVertex2f(-0.56,-0.08);
 glVertex2f(-0.45,-0.08);
 glVertex2f(-0.45,-0.09);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.71,-0.09);
 glVertex2f(-0.71,-0.08);
 glVertex2f(-0.6,-0.08);
 glVertex2f(-0.6,-0.09);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.86,-0.09);
 glVertex2f(-0.86,-0.08);
 glVertex2f(-0.75,-0.08);
 glVertex2f(-0.75,-0.09);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.56,-0.16);
 glVertex2f(-0.56,-0.15);
 glVertex2f(-0.45,-0.15);
 glVertex2f(-0.45,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.71,-0.16);
 glVertex2f(-0.71,-0.15);
 glVertex2f(-0.6,-0.15);
 glVertex2f(-0.6,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.86,-0.16);
 glVertex2f(-0.86,-0.15);
 glVertex2f(-0.75,-0.15);
 glVertex2f(-0.75,-0.16);
 glEnd();

// left mini arc 1
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.86,-0.16);
 glVertex2f(-0.86,-0.2);
 glVertex2f(-0.75,-0.2);
 glVertex2f(-0.75,-0.16);
 glEnd();

 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.841,-0.20, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.86,-0.2);
 glVertex2f(-0.86,-0.3);
 glVertex2f(-0.857,-0.3);
 glVertex2f(-0.857,-0.2);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.805,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.826,-0.196);
 glVertex2f(-0.826,-0.3);
 glVertex2f(-0.82,-0.3);
 glVertex2f(-0.82,-0.196);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.769,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.784,-0.196);
 glVertex2f(-0.784,-0.3);
 glVertex2f(-0.79,-0.3);
 glVertex2f(-0.79,-0.196);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.75,-0.196);
 glVertex2f(-0.75,-0.3);
 glVertex2f(-0.754,-0.3);
 glVertex2f(-0.754,-0.196);
 glEnd();

// left mini arc 2
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.71,-0.16);
 glVertex2f(-0.71,-0.2);
 glVertex2f(-0.6,-0.2);
 glVertex2f(-0.6,-0.16);
 glEnd();

 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.691,-0.20, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.71,-0.2);
 glVertex2f(-0.71,-0.3);
 glVertex2f(-0.707,-0.3);
 glVertex2f(-0.707,-0.2);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.655,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.676,-0.196);
 glVertex2f(-0.676,-0.3);
 glVertex2f(-0.67,-0.3);
 glVertex2f(-0.67,-0.196);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.619,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.639,-0.196);
 glVertex2f(-0.639,-0.3);
 glVertex2f(-0.634,-0.3);
 glVertex2f(-0.634,-0.196);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.6,-0.196);
 glVertex2f(-0.6,-0.3);
 glVertex2f(-0.605,-0.3);
 glVertex2f(-0.605,-0.196);
 glEnd();

// left mini arc 3
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.56,-0.16);
 glVertex2f(-0.56,-0.2);
 glVertex2f(-0.45,-0.2);
 glVertex2f(-0.45,-0.16);
 glEnd();

 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.541,-0.20, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.56,-0.2);
 glVertex2f(-0.56,-0.3);
 glVertex2f(-0.557,-0.3);
 glVertex2f(-0.557,-0.2);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.505,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.526,-0.196);
 glVertex2f(-0.526,-0.3);
 glVertex2f(-0.52,-0.3);
 glVertex2f(-0.52,-0.196);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(-0.469,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.485,-0.196);
 glVertex2f(-0.485,-0.3);
 glVertex2f(-0.49,-0.3);
 glVertex2f(-0.49,-0.196);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(-0.45,-0.196);
 glVertex2f(-0.45,-0.3);
 glVertex2f(-0.455,-0.3);
 glVertex2f(-0.455,-0.196);
 glEnd();


//vertical bar
 glBegin(GL_POLYGON);
 glColor3f(0.1,0.1,0.2);
 glVertex2f(-0.82,-0.16);
 glVertex2f(-0.82,-0.09);
 glVertex2f(-0.825,-0.09);
 glVertex2f(-0.825,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(-0.78,-0.16);
 glVertex2f(-0.78,-0.09);
 glVertex2f(-0.785,-0.09);
 glVertex2f(-0.785,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.67,-0.16);
 glVertex2f(-0.67,-0.09);
 glVertex2f(-0.675,-0.09);
 glVertex2f(-0.675,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(-0.63,-0.16);
 glVertex2f(-0.63,-0.09);
 glVertex2f(-0.635,-0.09);
 glVertex2f(-0.635,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(-0.52,-0.16);
 glVertex2f(-0.52,-0.09);
 glVertex2f(-0.525,-0.09);
 glVertex2f(-0.525,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(-0.48,-0.16);
 glVertex2f(-0.48,-0.09);
 glVertex2f(-0.485,-0.09);
 glVertex2f(-0.485,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(-0.35,-0.16);
 glVertex2f(-0.35,-0.09);
 glVertex2f(-0.355,-0.09);
 glVertex2f(-0.355,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.31,-0.16);
 glVertex2f(-0.31,-0.09);
 glVertex2f(-0.315,-0.09);
 glVertex2f(-0.315,-0.16);
 glEnd();

// horizontal bar
glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,1.0);
 glVertex2f(-0.898,0.089);
 glVertex2f(-0.898,0.076);
 glVertex2f(-0.4,0.076);
 glVertex2f(-0.4,0.089);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,1.0);
 glVertex2f(-0.898,0.265);
 glVertex2f(-0.898,0.25);
 glVertex2f(-0.4,0.25);
 glVertex2f(-0.4,0.265);
 glEnd();




 //RIGHT MIDDLE WALL//
 
 //left wall sticks
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.78,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.8,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.82,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.84,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.86,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.88,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);

 //right wall sticks//
 
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.54,0.28, 0.004, 0.04);//wall stick
  glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.52,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.5,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.48,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.46,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.44,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.42,0.28, 0.004, 0.04);//wall stick
 
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(0.4,-0.3);
 glVertex2f(0.4,0.28);
 glVertex2f(0.9,0.28);
 glVertex2f(0.9,-0.3);
 glEnd();

 //right middle wall upper gumbaz//
   glColor3f(1.0,0.7,0.0);
drawCircleFilled(0.65,0.63, 0.004, 0.04);//gumbaz stick
 glColor3f(1.0,0.7,0.0);
drawCircleFilled(0.75,0.4, 0.004, 0.04);//left stick
 glColor3f(1.0,0.7,0.0);
drawCircleFilled(0.73,0.4, 0.004, 0.04);//left stick
glColor3f(1.0,0.7,0.0);
drawCircleFilled(0.55,0.4, 0.004, 0.04);//right stick
glColor3f(1.0,0.7,0.0);
drawCircleFilled(0.57,0.4, 0.004, 0.04);//right stick



glColor3f(0.7,0.0,0.1); 
drawSemiCircleFilled(0.65,0.45, 0.06, 0.15);//gumbaz

//right basement
glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(0.76,0.4);
 glVertex2f(0.76,0.25);
 glVertex2f(0.54,0.25);
 glVertex2f(0.54,0.4);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0,0.7,0.0);
 glVertex2f(0.71,0.45);
 glVertex2f(0.71,0.4);
 glVertex2f(0.59,0.4);
 glVertex2f(0.59,0.45);
 glEnd();


 //right upper basement inside 

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.69,0.4);
 glVertex2f(0.69,0.28);
 glVertex2f(0.61,0.28);
 glVertex2f(0.61,0.4);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.65,0.4,0.03,0.045);
 
 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.75,0.38);
 glVertex2f(0.75,0.28);
 glVertex2f(0.71,0.28);
 glVertex2f(0.71,0.38);
 glEnd();   

 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.55,0.38);
 glVertex2f(0.55,0.28);
 glVertex2f(0.59,0.28);
 glVertex2f(0.59,0.38);
 glEnd();   

 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.56,0.28, 0.004, 0.04);//wall stick 
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.58,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.62,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.64,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.66,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.68,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.7,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.72,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.74,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(0.76,0.28, 0.004, 0.04);//wall stick
 glColor3f(1.0,0.7,0.0);



// ending of right middel wall upper gumbag//
 
// small arcs

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.892,0.18);
 glVertex2f(0.892,0.1);
 glVertex2f(0.809,0.1);
 glVertex2f(0.809,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.8509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.792,0.18);
 glVertex2f(0.792,0.1);
 glVertex2f(0.709,0.1);
 glVertex2f(0.709,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.7509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.692,0.18);
 glVertex2f(0.692,0.1);
 glVertex2f(0.609,0.1);
 glVertex2f(0.609,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.6509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.592,0.18);
 glVertex2f(0.592,0.1);
 glVertex2f(0.509,0.1);
 glVertex2f(0.509,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.5509,0.18, 0.036, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.492,0.18);
 glVertex2f(0.492,0.1);
 glVertex2f(0.409,0.1);
 glVertex2f(0.409,0.18);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.4509,0.18, 0.036, 0.06);

// archs
glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.86,-0.3);
 glVertex2f(0.86,0.01);
 glVertex2f(0.75,0.01);
 glVertex2f(0.75,-0.3);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.8055,0.009, 0.048, 0.06);


glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.71,-0.3);
 glVertex2f(0.71,0.01);
 glVertex2f(0.6,0.01);
 glVertex2f(0.6,-0.3);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.655,0.009, 0.048, 0.06);

glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.56,-0.3);
 glVertex2f(0.56,0.01);
 glVertex2f(0.45,0.01);
 glVertex2f(0.45,-0.3);
 glEnd();
 glColor3f(1.0,1.0,0.0);
 drawCircleFilled(0.505,0.009, 0.048, 0.06);

glBegin(GL_POLYGON);
glColor3f(0.1,0.1,0.2);
 glVertex2f(0.56,-0.01);
 glVertex2f(0.56,-0.0);
 glVertex2f(0.45,-0.0);
 glVertex2f(0.45,-0.01);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.71,-0.01);
 glVertex2f(0.71,-0.0);
 glVertex2f(0.6,-0.0);
 glVertex2f(0.6,-0.01);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.86,-0.01);
 glVertex2f(0.86,-0.0);
 glVertex2f(0.75,-0.0);
 glVertex2f(0.75,-0.01);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(0.56,-0.09);
 glVertex2f(0.56,-0.08);
 glVertex2f(0.45,-0.08);
 glVertex2f(0.45,-0.09);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.71,-0.09);
 glVertex2f(0.71,-0.08);
 glVertex2f(0.6,-0.08);
 glVertex2f(0.6,-0.09);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.86,-0.09);
 glVertex2f(0.86,-0.08);
 glVertex2f(0.75,-0.08);
 glVertex2f(0.75,-0.09);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(0.56,-0.16);
 glVertex2f(0.56,-0.15);
 glVertex2f(0.45,-0.15);
 glVertex2f(0.45,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.71,-0.16);
 glVertex2f(0.71,-0.15);
 glVertex2f(0.6,-0.15);
 glVertex2f(0.6,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.86,-0.16);
 glVertex2f(0.86,-0.15);
 glVertex2f(0.75,-0.15);
 glVertex2f(0.75,-0.16);
 glEnd();


// Right mini arc 1
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.86,-0.16);
 glVertex2f(0.86,-0.2);
 glVertex2f(0.75,-0.2);
 glVertex2f(0.75,-0.16);
 glEnd();

 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.841,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.86,-0.2);
 glVertex2f(0.86,-0.3);
 glVertex2f(0.857,-0.3);
 glVertex2f(0.857,-0.2);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.805,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.826,-0.196);
 glVertex2f(0.826,-0.3);
 glVertex2f(0.82,-0.3);
 glVertex2f(0.82,-0.196);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.769,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.784,-0.196);
 glVertex2f(0.784,-0.3);
 glVertex2f(0.79,-0.3);
 glVertex2f(0.79,-0.196);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.75,-0.196);
 glVertex2f(0.75,-0.3);
 glVertex2f(0.754,-0.3);
 glVertex2f(0.754,-0.196);
 glEnd();


// right mini arc 2
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.71,-0.16);
 glVertex2f(0.71,-0.2);
 glVertex2f(0.6,-0.2);
 glVertex2f(0.6,-0.16);
 glEnd();

 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.691,-0.20, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.71,-0.2);
 glVertex2f(0.71,-0.3);
 glVertex2f(0.707,-0.3);
 glVertex2f(0.707,-0.2);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.655,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.676,-0.196);
 glVertex2f(0.676,-0.3);
 glVertex2f(0.67,-0.3);
 glVertex2f(0.67,-0.196);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.619,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.639,-0.196);
 glVertex2f(0.639,-0.3);
 glVertex2f(0.634,-0.3);
 glVertex2f(0.634,-0.196);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.6,-0.196);
 glVertex2f(0.6,-0.3);
 glVertex2f(0.605,-0.3);
 glVertex2f(0.605,-0.196);
 glEnd();
// left mini arc 3
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.56,-0.16);
 glVertex2f(0.56,-0.2);
 glVertex2f(0.45,-0.2);
 glVertex2f(0.45,-0.16);
 glEnd();

 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.541,-0.20, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.56,-0.2);
 glVertex2f(0.56,-0.3);
 glVertex2f(0.557,-0.3);
 glVertex2f(0.557,-0.2);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.505,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.526,-0.196);
 glVertex2f(0.526,-0.3);
 glVertex2f(0.52,-0.3);
 glVertex2f(0.52,-0.196);
 glEnd();
 glColor3f(0.0,0.0,0.0);
drawSemiCircleFilled(0.469,-0.2, 0.016, 0.04);
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.485,-0.196);
 glVertex2f(0.485,-0.3);
 glVertex2f(0.49,-0.3);
 glVertex2f(0.49,-0.196);
 glEnd();
//wall
glBegin(GL_POLYGON);
 glColor3f(0.0,0.1,1.0);
 glVertex2f(0.45,-0.196);
 glVertex2f(0.45,-0.3);
 glVertex2f(0.455,-0.3);
 glVertex2f(0.455,-0.196);
 glEnd();

//stage
glBegin(GL_POLYGON);
glColor3f(0.1,0.1,0.2);
 glVertex2f(0.37,-0.01);
 glVertex2f(0.37,-0.0);
 glVertex2f(0.23,-0.0);
 glVertex2f(0.23,-0.01);
 glEnd(); 

glBegin(GL_POLYGON);
 glVertex2f(0.37,-0.09);
 glVertex2f(0.37,-0.08);
 glVertex2f(0.28,-0.08);
 glVertex2f(0.28,-0.09);
 glEnd(); 

glBegin(GL_POLYGON);
 glVertex2f(0.37,-0.16);
 glVertex2f(0.37,-0.15);
 glVertex2f(0.28,-0.15);
 glVertex2f(0.28,-0.16);
 glEnd(); 

glBegin(GL_POLYGON);
 glVertex2f(0.285,-0.01);
 glVertex2f(0.285,-0.15);
 glVertex2f(0.28,-0.15);
 glVertex2f(0.28,-0.01);
 glEnd(); 


//vertical bar
glBegin(GL_POLYGON);
 glColor3f(0.1,0.1,0.2);
 glVertex2f(0.82,-0.16);
 glVertex2f(0.82,-0.09);
 glVertex2f(0.825,-0.09);
 glVertex2f(0.825,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(0.78,-0.16);
 glVertex2f(0.78,-0.09);
 glVertex2f(0.785,-0.09);
 glVertex2f(0.785,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.67,-0.16);
 glVertex2f(0.67,-0.09);
 glVertex2f(0.675,-0.09);
 glVertex2f(0.675,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(0.63,-0.16);
 glVertex2f(0.63,-0.09);
 glVertex2f(0.635,-0.09);
 glVertex2f(0.635,-0.16);
 glEnd();


glBegin(GL_POLYGON);

 glVertex2f(0.52,-0.16);
 glVertex2f(0.52,-0.09);
 glVertex2f(0.525,-0.09);
 glVertex2f(0.525,-0.16);
 glEnd();


glBegin(GL_POLYGON);
  glVertex2f(0.48,-0.16);
 glVertex2f(0.48,-0.09);
 glVertex2f(0.485,-0.09);
 glVertex2f(0.485,-0.16);
 glEnd();


glBegin(GL_POLYGON);
 glVertex2f(0.35,-0.16);
 glVertex2f(0.35,-0.09);
 glVertex2f(0.355,-0.09);
 glVertex2f(0.355,-0.16);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.31,-0.16);
 glVertex2f(0.31,-0.09);
 glVertex2f(0.315,-0.09);
 glVertex2f(0.315,-0.16);
 glEnd();


 //leftMOST PILLER//
 glColor3f(1.0,0.7,0.0);
 drawCircleFilled(-0.95,0.69, 0.004, 0.04);
 glColor3f(0.7,0.0,0.1);
 drawCircleFilled(-0.95,0.58, 0.05, 0.1);
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(-0.9,-0.3);
 glVertex2f(-0.9,0.58);
 glVertex2f(-1.0,0.58);
 glVertex2f(-1.0,-0.3);
 glEnd();

 //2nd inside piller// 
 glBegin(GL_POLYGON);
 glColor3f(0.8,0.4,0.0);
 glVertex2f(-0.98,-0.2);
 glVertex2f(-0.98,0.08);
 glVertex2f(-0.92,0.08);
 glVertex2f(-0.92,-0.2);
 glEnd();
 glColor3f(0.8,0.4,0.0);
 drawCircleFilled(-0.95,0.08, 0.03, 0.05);

  glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.97,-0.015);
 glVertex2f(-0.97,0.075);
 glVertex2f(-0.93,0.075);
 glVertex2f(-0.93,-0.015);
 glEnd();
 
  glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.97,-0.06);
 glVertex2f(-0.97,-0.16);
 glVertex2f(-0.93,-0.16);
 glVertex2f(-0.93,-0.06);
 glEnd();
 

 //1st inside piller//
 glBegin(GL_POLYGON);
 glColor3f(0.8,0.4,0.0);
 glVertex2f(-0.98,0.2);
 glVertex2f(-0.98,0.45);
 glVertex2f(-0.92,0.45);
 glVertex2f(-0.92,0.2);
 glEnd();
 glColor3f(0.8,0.4,0.0);
 drawCircleFilled(-0.95,0.45, 0.03, 0.05);
   
 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.97,0.36);
 glVertex2f(-0.97,0.45);
 glVertex2f(-0.93,0.45);
 glVertex2f(-0.93,0.36);
 glEnd();
 
  glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(-0.97,0.24);
 glVertex2f(-0.97,0.33);
 glVertex2f(-0.93,0.33);
 glVertex2f(-0.93,0.24);
 glEnd();



//RIGHTMOST PILLER//
 glColor3f(1.0,0.7,0.6);
 drawCircleFilled(0.95,0.69, 0.004, 0.04); 
 glColor3f(0.7,0.0,0.1);
 drawCircleFilled(0.95,0.58, 0.05, 0.1);
 glBegin(GL_POLYGON);
 glColor3f(1.0,0.8,0.0);
 glVertex2f(0.9,-0.3);
 glVertex2f(0.9,0.58);
 glVertex2f(1.0,0.58);
 glVertex2f(1.0,-0.3);
 glEnd();

 // 2nd inside right piller//
glBegin(GL_POLYGON);
 glColor3f(0.8,0.4,0.0);
 glVertex2f(0.98,-0.2);
 glVertex2f(0.98,0.08);
 glVertex2f(0.92,0.08);
 glVertex2f(0.92,-0.2);
 glEnd();
 glColor3f(0.8,0.4,0.0);
 drawCircleFilled(0.95,0.08, 0.03, 0.05);

 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.97,-0.015);
 glVertex2f(0.97,0.075);
 glVertex2f(0.93,0.075);
 glVertex2f(0.93,-0.015);
 glEnd();
 
  glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.97,-0.06);
 glVertex2f(0.97,-0.16);
 glVertex2f(0.93,-0.16);
 glVertex2f(0.93,-0.06);
 glEnd();

 // 1st inside right piller//
 glBegin(GL_POLYGON);
 glColor3f(0.8,0.4,0.0);
 glVertex2f(0.98,0.2);
 glVertex2f(0.98,0.455);
 glVertex2f(0.92,0.45);
 glVertex2f(0.92,0.2);
 glEnd();
 glColor3f(0.8,0.4,0.0);
 drawCircleFilled(0.95,0.45, 0.03, 0.05);

 glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.97,0.36);
 glVertex2f(0.97,0.45);
 glVertex2f(0.93,0.45);
 glVertex2f(0.93,0.36);
 glEnd();
 
  glBegin(GL_POLYGON);
 glColor3f(1.0,1.0,0.0);
 glVertex2f(0.97,0.24);
 glVertex2f(0.97,0.33);
 glVertex2f(0.93,0.33);
 glVertex2f(0.93,0.24);
 glEnd();

// horizontal bar
glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,1.0);
 glVertex2f(0.898,0.089);
 glVertex2f(0.898,0.076);
 glVertex2f(0.4,0.076);
 glVertex2f(0.4,0.089);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,1.0);
 glVertex2f(0.898,0.265);
 glVertex2f(0.898,0.25);
 glVertex2f(0.4,0.25);
 glVertex2f(0.4,0.265);
 glEnd();



// Left Garden Road
glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 glVertex2f(-0.4,-0.3);
 glVertex2f(-0.42,-0.5);
 glVertex2f(-0.44,-0.5);
 glVertex2f(-0.42,-0.3);
 glEnd();



glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 glVertex2f(-0.42,-0.5);
 glVertex2f(-0.44,-0.7);
 glVertex2f(-0.46,-0.7);
 glVertex2f(-0.44,-0.5);
 glEnd();


 glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 glVertex2f(-1.0,-0.78);
 glVertex2f(-0.44,-0.7);
 glVertex2f(-0.44,-0.73);
 glVertex2f(-1.0,-0.81);
 glEnd();


//grass
glBegin(GL_POLYGON);
 glColor3f(0.0,0.6,0.0);
 glVertex2f(-0.42,-0.3);
 glVertex2f(-0.44,-0.5);
 glVertex2f(-1.0,-0.5);
 glVertex2f(-1.0,-0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.6,0.0);
 glVertex2f(-0.44,-0.5);
 glVertex2f(-0.46,-0.7);
 glVertex2f(-1.0,-0.7);
 glVertex2f(-1.0,-0.5);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.6,0.0);
 glVertex2f(-1.0,-0.78);
 glVertex2f(-1.0,-0.7);
 glVertex2f(-0.44,-0.7);
 glEnd();



glBegin(GL_POLYGON);
 glColor3f(0.6,0.3,0.0);
 glVertex2f(-0.79,-0.4);
 glVertex2f(-0.63,-0.4);
 glVertex2f(-0.63,-0.57);
 glVertex2f(-0.79,-0.57);
 glEnd();
//flowres
     
        glColor3f(1.0,0.7,0.0); 
	drawCircleFilled(-0.975,-0.35, 0.05, 0.015);
        glColor3f(1.0,0.0,0.0); 
	drawCircleFilled(-0.975,-0.35, 0.01, 0.007);
        
        glColor3f(1.0,0.7,0.0); 
	drawCircleFilled(-0.85,-0.35, 0.05, 0.015);
        glColor3f(1.0,0.0,0.0); 
	drawCircleFilled(-0.85,-0.35, 0.01, 0.007);
   
        glColor3f(1.0,0.7,0.0); 
	drawCircleFilled(-0.72,-0.35, 0.05, 0.015);
        glColor3f(1.0,0.0,0.0); 
	drawCircleFilled(-0.72,-0.35, 0.01, 0.007);
        
        glColor3f(1.0,0.7,0.0); 
	drawCircleFilled(-0.59,-0.35, 0.05, 0.015);
        glColor3f(1.0,0.0,0.0); 
	drawCircleFilled(-0.59,-0.35, 0.01, 0.007);
        
         //small gardens flowers                      
	glColor3f(1.0,0.0,0.0); 
	drawCircleFilled(-0.775,-0.41, 0.01, 0.005);
	drawCircleFilled(-0.745,-0.41, 0.01, 0.005);
	drawCircleFilled(-0.715,-0.41, 0.01, 0.005);
	drawCircleFilled(-0.68,-0.41, 0.01, 0.005);
	drawCircleFilled(-0.645,-0.41, 0.01, 0.005);

glBegin(GL_POLYGON);
 glColor3f(0.6,0.6,0.0);
 glVertex2f(-0.775,-0.42);
 glVertex2f(-0.77,-0.42);
 glVertex2f(-0.77,-0.44);
 glVertex2f(-0.775,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.745,-0.42);
 glVertex2f(-0.74,-0.42);
 glVertex2f(-0.74,-0.44);
 glVertex2f(-0.745,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.715,-0.42);
 glVertex2f(-0.71,-0.42);
 glVertex2f(-0.71,-0.44);
 glVertex2f(-0.715,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.68,-0.42);
 glVertex2f(-0.675,-0.42);
 glVertex2f(-0.675,-0.44);
 glVertex2f(-0.68,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.645,-0.42);
 glVertex2f(-0.64,-0.42);
 glVertex2f(-0.64,-0.44);
 glVertex2f(-0.645,-0.44);
 glEnd();



glColor3f(1.0,0.0,0.0);
	drawCircleFilled(-0.775,-0.47, 0.01, 0.005);
	drawCircleFilled(-0.745,-0.47, 0.01, 0.005);
	drawCircleFilled(-0.715,-0.47, 0.01, 0.005);
	drawCircleFilled(-0.68,-0.47, 0.01, 0.005);
	drawCircleFilled(-0.645,-0.47, 0.01, 0.005);

glBegin(GL_POLYGON);
  glColor3f(0.6,0.6,0.0);
 glVertex2f(-0.775,-0.48);
 glVertex2f(-0.77,-0.48);
 glVertex2f(-0.77,-0.50);
 glVertex2f(-0.775,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.745,-0.48);
 glVertex2f(-0.74,-0.48);
 glVertex2f(-0.74,-0.50);
 glVertex2f(-0.745,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.715,-0.48);
 glVertex2f(-0.71,-0.48);
 glVertex2f(-0.71,-0.50);
 glVertex2f(-0.715,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.68,-0.48);
 glVertex2f(-0.675,-0.48);
 glVertex2f(-0.675,-0.50);
 glVertex2f(-0.68,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.645,-0.48);
 glVertex2f(-0.64,-0.48);
 glVertex2f(-0.64,-0.50);
 glVertex2f(-0.645,-0.50);
 glEnd();


glColor3f(1.0,0.0,0.0);
	drawCircleFilled(-0.775,-0.53, 0.01, 0.005);
	drawCircleFilled(-0.745,-0.53, 0.01, 0.005);
	drawCircleFilled(-0.715,-0.53, 0.01, 0.005);
	drawCircleFilled(-0.68,-0.53, 0.01, 0.005);
	drawCircleFilled(-0.645,-0.53, 0.01, 0.005);

glBegin(GL_POLYGON);
 glColor3f(0.6,0.6,0.0);
 glVertex2f(-0.775,-0.54);
 glVertex2f(-0.77,-0.54);
 glVertex2f(-0.77,-0.56);
 glVertex2f(-0.775,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.745,-0.54);
 glVertex2f(-0.74,-0.54);
 glVertex2f(-0.74,-0.56);
 glVertex2f(-0.745,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.715,-0.54);
 glVertex2f(-0.71,-0.54);
 glVertex2f(-0.71,-0.56);
 glVertex2f(-0.715,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.68,-0.54);
 glVertex2f(-0.675,-0.54);
 glVertex2f(-0.675,-0.56);
 glVertex2f(-0.68,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(-0.645,-0.54);
 glVertex2f(-0.64,-0.54);
 glVertex2f(-0.64,-0.56);
 glVertex2f(-0.645,-0.56);
 glEnd();

// Right Garden Road
glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 glVertex2f(0.4,-0.3);
 glVertex2f(0.42,-0.5);
 glVertex2f(0.44,-0.5);
 glVertex2f(0.42,-0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 glVertex2f(0.42,-0.5);
 glVertex2f(0.44,-0.7);
 glVertex2f(0.46,-0.7);
 glVertex2f(0.44,-0.5);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0,0.0,0.0);
 glVertex2f(1.0,-0.78);
 glVertex2f(0.44,-0.7);
 glVertex2f(0.44,-0.73);
 glVertex2f(1.0,-0.81);
 glEnd();




//grass
glBegin(GL_POLYGON);
 glColor3f(0.0,0.6,0.0);
 glVertex2f(0.42,-0.3);
 glVertex2f(0.44,-0.5);
 glVertex2f(1.0,-0.5);
 glVertex2f(1.0,-0.3);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.6,0.0);
 glVertex2f(0.44,-0.5);
 glVertex2f(0.46,-0.7);
 glVertex2f(1.0,-0.7);
 glVertex2f(1.0,-0.5);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.0,0.6,0.0);
 glVertex2f(1.0,-0.78);
 glVertex2f(1.0,-0.7);
 glVertex2f(0.44,-0.7);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(0.6,0.3,0.0);
 glVertex2f(0.79,-0.4);
 glVertex2f(0.63,-0.4);
 glVertex2f(0.63,-0.57);
 glVertex2f(0.79,-0.57);
 glEnd();

//flowres


	glColor3f(1.0,0.0,0.0);
	drawCircleFilled(0.773,-0.41, 0.01, 0.005);
	drawCircleFilled(0.743,-0.41, 0.01, 0.005);
	drawCircleFilled(0.713,-0.41, 0.01, 0.005);
	drawCircleFilled(0.678,-0.41, 0.01, 0.005);
	drawCircleFilled(0.643,-0.41, 0.01, 0.005);

glBegin(GL_POLYGON);
 glColor3f(0.6,0.6,0.0);
 glVertex2f(0.775,-0.42);
 glVertex2f(0.77,-0.42);
 glVertex2f(0.77,-0.44);
 glVertex2f(0.775,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.745,-0.42);
 glVertex2f(0.74,-0.42);
 glVertex2f(0.74,-0.44);
 glVertex2f(0.745,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.715,-0.42);
 glVertex2f(0.71,-0.42);
 glVertex2f(0.71,-0.44);
 glVertex2f(0.715,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.68,-0.42);
 glVertex2f(0.675,-0.42);
 glVertex2f(0.675,-0.44);
 glVertex2f(0.68,-0.44);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.645,-0.42);
 glVertex2f(0.64,-0.42);
 glVertex2f(0.64,-0.44);
 glVertex2f(0.645,-0.44);
 glEnd();



glColor3f(1.0,0.0,0.0);
	drawCircleFilled(0.773,-0.47, 0.01, 0.005);
	drawCircleFilled(0.743,-0.47, 0.01, 0.005);
	drawCircleFilled(0.713,-0.47, 0.01, 0.005);
	drawCircleFilled(0.678,-0.47, 0.01, 0.005);
	drawCircleFilled(0.643,-0.47, 0.01, 0.005);

glBegin(GL_POLYGON);
 glColor3f(0.6,0.6,0.0);
 glVertex2f(0.775,-0.48);
 glVertex2f(0.77,-0.48);
 glVertex2f(0.77,-0.50);
 glVertex2f(0.775,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.745,-0.48);
 glVertex2f(0.74,-0.48);
 glVertex2f(0.74,-0.50);
 glVertex2f(0.745,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.715,-0.48);
 glVertex2f(0.71,-0.48);
 glVertex2f(0.71,-0.50);
 glVertex2f(0.715,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.68,-0.48);
 glVertex2f(0.675,-0.48);
 glVertex2f(0.675,-0.50);
 glVertex2f(0.68,-0.50);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.645,-0.48);
 glVertex2f(0.64,-0.48);
 glVertex2f(0.64,-0.50);
 glVertex2f(0.645,-0.50);
 glEnd();


glColor3f(1.0,0.0,0.0);
	drawCircleFilled(0.773,-0.53, 0.01, 0.005);
	drawCircleFilled(0.743,-0.53, 0.01, 0.005);
	drawCircleFilled(0.713,-0.53, 0.01, 0.005);
	drawCircleFilled(0.678,-0.53, 0.01, 0.005);
	drawCircleFilled(0.643,-0.53, 0.01, 0.005);

glBegin(GL_POLYGON);
glColor3f(0.6,0.6,0.0);
 glVertex2f(0.775,-0.54);
 glVertex2f(0.77,-0.54);
 glVertex2f(0.77,-0.56);
 glVertex2f(0.775,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.745,-0.54);
 glVertex2f(0.74,-0.54);
 glVertex2f(0.74,-0.56);
 glVertex2f(0.745,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.715,-0.54);
 glVertex2f(0.71,-0.54);
 glVertex2f(0.71,-0.56);
 glVertex2f(0.715,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.68,-0.54);
 glVertex2f(0.675,-0.54);
 glVertex2f(0.675,-0.56);
 glVertex2f(0.68,-0.56);
 glEnd();

glBegin(GL_POLYGON);
 glVertex2f(0.645,-0.54);
 glVertex2f(0.64,-0.54);
 glVertex2f(0.64,-0.56);
 glVertex2f(0.645,-0.56);
 glEnd();

}

void screen1()
{
palace();
//sun(); 
//flower(-0.4,0.4);
glFlush();
}

 void screen2()
{
palace();
//sun(); 
doll();
doll1();
doll2();
glFlush();
}

void display(void)
{

if(disp==0)
{
     glClearColor(0,0,0,0);
     //glClear(GL_COLOR_BUFFER_BIT);
     text();
//glFlush();
}

if(disp==1)
{
 glClearColor(0,0,0,0);
//glClear(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);
screen1();
}
if(disp==2)
{
 glClearColor(0,0,0,0);
//glClear(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);
screen2();
}
glutSwapBuffers();
}

void menu1(int value)
{
if(value==1)
{
disp=1;
glutPostRedisplay();
}
if(value==2)
{
disp=2;
glutPostRedisplay();
}
if(value==0)
    exit(0);
}

void CreateMenu()
{
mainmenu=glutCreateMenu(menu1);
}


void keys(unsigned char key,int x,int y)        // KEY BOARD //
{
	if(key=='b'||key=='B')
	{
	screen1();
	movesun();
	}
}

 

 void init()
 {
  glClearColor(0.0,0.0,0.0,0.0);
  glColor3f(0.0,0.0,0.0);
 }
 int main(int argc,char **argv)
 {
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(1300,1300);
  glutInitWindowPosition(0,0);
  glutCreateWindow("palace");
  glutDisplayFunc(display);
  glutKeyboardFunc(keys);
  init();
CreateMenu();
glutAddMenuEntry("SCREEN 1",1);
glutAddMenuEntry("SCREEN 2",2);
glutAddMenuEntry("Exit",0);
glutAttachMenu(GLUT_RIGHT_BUTTON);
  glutMainLoop();
return 0;
 }

