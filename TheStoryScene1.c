#include<GL/glut.h>
#include<math.h>
void draw(float,float,int,int,int,int);
float ty=0,tx=0,tny=0;
int flag=0,flagn=0; 
void net()
{	
	int i;
	float x=0,y=0;
	float px=23,py=10;
	for(i=0;i<90;i++){
		glBegin(GL_QUADS);
		glColor3f(1,1,1);
		glVertex2f(px,py);
		glVertex2f(px,py+1);
		glColor3f(0,0,0);
		glVertex2f(px+1,py+1);
		glVertex2f(px+1,py);
		glEnd();
		py+=1;
	}
	glColor3f(0.082,0.564,0.8);
	glBegin(GL_POLYGON);
	glVertex3f(7,10,0);
	glVertex3f(12,0,0);
	glVertex3f(0,0,0);
	glVertex3f(-5,10,0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(25,10,0);
	glVertex3f(20,0,0);
	glVertex3f(32,0,0);
	glVertex3f(37,10,0);
	glEnd();	
	glBegin(GL_LINES);
	glColor3f(1,1,1);	
	for(i=-5;i<9;i++){
		glVertex3f(x,y,0);
		glVertex3f(x+10,y+10,0);
		x+=2;//y+=0.5;
	}
	glEnd();
	x=0;y=0;
	glBegin(GL_LINES);
	glColor3f(1,1,1);	
	for(i=0;i<15;i++){
		glVertex3f(x,y+10,0);
		glVertex3f(x+10,y,0);
		x+=1.5;//y+=0.5;
	}
	glEnd();
}
void seaweed(float r,float g,float b)
{

	
	glColor3f(r,g,b);	
	glBegin(GL_LINES);
	glVertex3f(25,5,0);
	glVertex3f(25,40,0);

	glVertex3f(25,10,0);
	glVertex3f(30,15,0);

	glVertex3f(30,15,0);
	glVertex3f(32,15,0);

	glVertex3f(32,15,0);
	glVertex3f(33,21,0);
	
	glVertex3f(32.5,17,0);
	glVertex3f(34,18,0);
	
	glVertex3f(34,18,0);
	glVertex3f(34.25,19.5,0);

	glVertex3f(27,12,0);
	glVertex3f(27,23,0);

	glVertex3f(27,23,0);
	glVertex3f(29,26,0);

	glVertex3f(29,26,0);
	glVertex3f(30,32,0);
	
	glVertex3f(29,21,0);
	glVertex3f(29.5,23,0);

	glVertex3f(27,17,0);
	glVertex3f(29,21,0);

	glVertex3f(29.5,23,0);
	glVertex3f(31,23,0);
	
	glVertex3f(29.7,30,0);
	glVertex3f(32,30,0);
	
	glVertex3f(25,27,0);
	glVertex3f(30,40,0);

	glVertex3f(28,35,0);
	glVertex3f(28,40,0);
	
	glVertex3f(25,37,0);
	glVertex3f(23,38,0);

	glVertex3f(25,18,0);
	glVertex3f(14,25,0);
		
	glVertex3f(21,20.5,0);
	glVertex3f(21,30,0);

	glVertex3f(21,25,0);
	glVertex3f(15,30,0);

	glVertex3f(17,28.5,0);
	glVertex3f(17,33,0);
	
	glVertex3f(23,19,0);
	glVertex3f(18,15,0);

	glVertex3f(18,15,0);
	glVertex3f(15,15,0);

	glVertex3f(21.5,18,0);
	glVertex3f(13,18,0);

	glVertex3f(20.5,17,0);
	glVertex3f(19.5,12,0);

	glVertex3f(20,15,0);
	glVertex3f(22,12,0);

	glEnd();
	
}
void base(int x,int y)
{
	x=x-0.5;
	glColor3f(0,0,0);
	int tri=20;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for(int i=-tri/2;i<=0;i++)
		glVertex2f(
			x+6*cos(2*3.14*i/tri),
			y+6*sin(2*3.14*i/tri));	
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x,y-7);
        for(int i=0;i<=tri/2;i++)
                glVertex2f(
                        x+6*cos(2*3.14*i/tri),
                        y-7+6*sin(2*3.14*i/tri));
        glEnd();

}
void anemone(int r,int g,int b)
{
	base(32,11);
	draw(29,10,1,r,g,b);
	draw(28,10,1,r,g,b);
	draw(27,10,0,r,g,b);
	draw(30,10,0,r,g,b);
	draw(31,10,1,r,g,b);
	draw(32,10,0,r,g,b);
	draw(33,10,0,r,g,b);
	draw(34,10,0,r,g,b);
	draw(35,10,1,r,g,b);
	draw(36,10,0,r,g,b);
	draw(29,8,0,r,g,b);
        draw(28,8,0,r,g,b);
        draw(27,8,1,r,g,b);
        draw(30,8,1,r,g,b);
       	draw(31,8,0,r,g,b);
        draw(32,8,1,r,g,b);
        draw(33,8,1,r,g,b);
        draw(34,8,1,r,g,b);
        draw(35,8,0,r,g,b);
        draw(36,8,1,r,g,b);
	draw(29,11,1,r,g,b);
        draw(28,11,1,r,g,b);
        draw(27,11,0,r,g,b);
        draw(30,11,0,r,g,b);
        draw(31,11,1,r,g,b);
        draw(32,11,0,r,g,b);
        draw(33,11,0,r,g,b);
        draw(34,11,0,r,g,b);
        draw(35,11,1,r,g,b);
        draw(36,11,0,r,g,b);
        draw(29,9,0,r,g,b);
        draw(28,9,0,r,g,b);
        draw(27,9,1,r,g,b);
        draw(30,9,1,r,g,b);
        draw(31,9,0,r,g,b);
        draw(32,9,1,r,g,b);
        draw(33,9,1,r,g,b);
        draw(34,9,1,r,g,b);
        draw(35,9,0,r,g,b);
        draw(36,9,1,r,g,b);
}
void draw(float x,float y,int s,int r,int g,int b)
{
	
	int tri=20,i,j,k;
	float tx=x,ty=y;
if(s==1){for(k=0;k<3;k++){
	glColor3ub(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for(j=0;j<50;j++)
	{
		x+=0.01;
		y+=0.05;
		for(i=0;i<=tri;i++){
		glVertex2f(
			x+0.2*cos(2*3.14*i/tri),
			y+0.2*sin(2*3.14*i/tri)
		);	
		}
	}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x,y);
        for(j=0;j<50;j++)
        {
                x-=0.01;
                y+=0.05;
                for(i=0;i<=tri;i++){
                glVertex2f(
                        x+0.2*cos(2*3.14*i/tri),
                        y+0.2*sin(2*3.14*i/tri)
                );
                }
        }
	glEnd();
}

        glColor3ub(r,g,b);
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x,y);
        for(int i=0;i<=tri;i++)
        {
                glVertex2f(
                        x+0.2*cos(2*3.14*i/tri),
                       y+0.2*sin(2*3.14*i/tri));
        }
        glEnd();
}
	else{for(k=0;k<3;k++){
     	glColor3ub(r+64,g+94,b+35);
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x,y);
        for(j=0;j<50;j++)
        {
                x-=0.01;
                y+=0.05;
                for(i=0;i<=tri;i++){
                glVertex2f(
                        x+0.2*cos(2*3.14*i/tri),
                        y+0.2*sin(2*3.14*i/tri)
                );
               }
        }
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x,y);
        for(j=0;j<50;j++)
        {
                x+=0.01;
                y+=0.05;
                for(i=0;i<=tri;i++){
                glVertex2f(
                        x+0.2*cos(2*3.14*i/tri),
                        y+0.2*sin(2*3.14*i/tri)
                );
         	}

     	}
	glEnd();
	}
	glColor3ub(r+64,g+94,b+35);
        glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x,y);
        for(int i=0;i<=tri;i++)
        {
                glVertex2f(
                        x+0.2*cos(2*3.14*i/tri),
                       y+0.2*sin(2*3.14*i/tri));
     	}
        glEnd();
}
}
void eyes(float x,float y,float r,float g,float b,float radius)
{
	int tri=20;
	glColor3f(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	for(int i=0;i<=tri;i++)
	{
		glVertex2f(
			x+ radius*cos(2*3.14*i/tri),
			y+ radius*sin(2*3.14*i/tri));
	}
	glEnd();
}
void circle(float x,float y,float radius,int val)
{
	int tri=val;
	glBegin(GL_TRIANGLE_FAN);       
        glVertex2f(x,y); 	// center of circle
        for(int i = 0; i <= tri;i++) {
        glVertex2f(
                 x + (radius * cos(i*2 *3.14 / tri)),
                 y + (radius * sin(i*2 *3.14 / tri))
                 );
        }
        glEnd();
}

void ellipse(float x,float y,float rx,float ry)
{	
	int tri=20;
	glBegin(GL_TRIANGLE_FAN);       
        glVertex2f(x,y); 	// center of circle
        for(int i = 0; i <= tri;i++) {
        glVertex2f(
                 x + (rx * cos(i*2 *3.14 / tri)),
                 y + (ry * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
}
void semicircle(float x,float y,float rx,float ry)
{
	int tri=40;
	glBegin(GL_POINTS);       
       // glVertex2f(x,y); 	// center of circle
        for(int i = 0; i <= tri/2;i++) {
        glVertex2f(
                 x + (rx * cos(i*2 *3.14 / tri)),
                 y - (ry * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
}

void nemo(){
 	int i;
	eyes(5,3,1,1,1,0.5);
	eyes(10.3,2.5,1,1,1,0.5);
	eyes(6.2,2,0,0,0,1);
	eyes(11.5,2,0,0,0,1);
	eyes(6,2,1,0,0,2);
	eyes(11.5,2,1,0,0,2);
	eyes(5,2,1,1,1,3.5);
	eyes(12,2,1,1,1,3.5);
	//glColor3ub(252,45,15);
	//semicircle(9,-6,1,2);
	glColor3f(0,0,0);
	semicircle(9,-4,2,1.5);
	
	glColor3ub(252,66,28);
	
	int tri=20;
	glBegin(GL_TRIANGLE_FAN);    		//for tail fin   
        glVertex2f(-23,2); 	// center of circle
        for(int i = 5; i <= 15;i++) {
        glVertex2f(
                 -23 + (4 * cos(i*2 *3.14 / tri)),
                 2 + (5 * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
	glBegin(GL_TRIANGLE_FAN);       
        glVertex2f(-23,-3); 	// center of circle
        for(int i = 5; i <= 15;i++) {
        glVertex2f(
                 -23 + (4 * cos(i*2 *3.14 / tri)),
                 -3 + (4 * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_TRIANGLE_FAN);    		//for tail fin   
        glVertex2f(-24,2); 	// center of circle
        for(int i = 5; i <= 15;i++) {
        glVertex2f(
                 -24 + (4 * cos(i*2 *3.14 / tri)),
                 2 + (5 * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
	glBegin(GL_TRIANGLE_FAN);       
        glVertex2f(-24,-3); 	// center of circle
        for(int i = 5; i <= 15;i++) {
        glVertex2f(
                 -24 + (4 * cos(i*2 *3.14 / tri)),
                 -3 + (4 * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLE_FAN);    		//for tail fin   
        glVertex2f(-24.5,2); 	// center of circle
        for(int i = 5; i <= 15;i++) {
        glVertex2f(
                 -24.5 + (4 * cos(i*2 *3.14 / tri)),
                 2 + (5 * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
	glBegin(GL_TRIANGLE_FAN);       
        glVertex2f(-24.5,-3); 	// center of circle
        for(int i = 5; i <= 15;i++) {
        glVertex2f(
                 -24.5 + (4 * cos(i*2 *3.14 / tri)),
                 -3 + (4 * sin(i*2 *3.14 / tri))
                 );
        }
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0,0,0);		//third white strip
	glVertex3f(-17,4,0);
	glVertex3f(-17,-4,0);
	glVertex3f(-16,-5.5,0);
	glVertex3f(-16,5.5,0);
	glEnd();

	 glColor3ub(252,66,28);
	 glBegin(GL_QUADS);	//tail fin
	 glVertex3f(-17,4,0);
	 glVertex3f(-23,7,0);
	 glVertex3f(-23,-7,0);
	 glVertex3f(-17,-4,0);

	glColor3f(1,1,1);	//third white strip
	glVertex3f(-17,4,0);
	glVertex3f(-17,-4,0);
	glVertex3f(-16,-5.5,0);
	glVertex3f(-16,5.5,0);
	glEnd();
	
	glBegin(GL_LINE_LOOP);       //for the fin in the centre
        glColor3f(0,0,0);
                glVertex2f(-4,0); // center of circle
                for(i = 0; i <=2*3.14;i++) {
                        glVertex2f(
                            -4 - (6 * cos(i*2*3.14 / tri)),
                            0 + (6 * sin(i*2*3.14 / tri))
                        );
                }
        glEnd();
        glBegin(GL_TRIANGLE_FAN);       //for the fin in the centre
        glColor3ub(255,67,16);
                glVertex2f(-4,0); // center of circle
                for(i = 0; i <=2*3.14;i++) {
                        glVertex2f(
                            -4 - (6 * cos(i*2*3.14 / tri)),
                            0 + (6 * sin(i*2*3.14 / tri))
                        );
                }
        glEnd();
	
	glColor3ub(252,66,28);		//white strip in front
	ellipse(7,0,10,10);
	glColor3f(0,0,0);
	ellipse(6.2,0,10,10);	
	glColor3f(1,1,1);
	ellipse(6,0,11,10);
	glColor3f(0,0,0);
	ellipse(5,0,11,10);

	glColor3ub(252,50,20);		//second white strip
	ellipse(0.5,0,11,12);
	glColor3f(0,0,0);
	ellipse(0,0,11,12);
	glColor3f(1,1,1);
	ellipse(-3,0,10,11.5);	
	glColor3f(0,0,0);
	ellipse(-4,0,10,11.5);
	//ellipse(0.5,0,10,12);	
	
	glColor3ub(252,66,28);	//body
	ellipse(0,0,17.7,11.7);
	glColor3f(0,0,0);
	ellipse(0,0,18,12);
	
	glColor3ub(255,67,16);
        circle(-9.5,9,3,12);      //first fin on top
        circle(2,10,6,11); 	 //second fin on top
	circle(-3,-8.5,7,10);		//bottom fin
	
	glColor3f(0,0,0);
	circle(-9.5,9,3.5,12);      //first fin on top
        circle(2,10,6.5,11); 	 //second fin on top
	circle(-3,-8.5,7.5,10);		//bottom fin

	glColor3f(1,1,1);
	circle(-9.5,9,3.9,12);      //first fin on top
        circle(2,10,6.9,11); 	 //second fin on top
	circle(-3,-8.5,7.9,10);		//bottom fin
}
void move1()
{
	tx+=1.3;
	glTranslatef(tx,0,0);	
	glutPostRedisplay();
}  
void move()
{
	if(ty>=-70 && flag==0){
		ty-=0.3;
		if(ty<-70){ flag=1;}
	}
	else if(ty<0 && flag==1){
		ty+=0.3;
		if(ty>-50) { flagn=1;}	
	}
	glTranslatef(0,ty,0);	
	glutPostRedisplay();
}  
void otherfish(float x,float y,int s,float r,float g,float b)
{
	int tri=20;
        glColor3f(0,0,0);
        glBegin(GL_TRIANGLE_FAN);       //for the eyes
        glVertex2f((x+(s/2)),y);
        for(int i=0; i<=tri;i++)
        {
                glVertex2f(
                        x+(s/2)+(0.2*s*cos(2*3.14*i/tri)),
                        y+(0.2*s*sin(2*3.14*i/tri)));
        }
        glEnd();
	glColor3f(r,g,b);
        glBegin(GL_POLYGON);    //for the body
        glVertex2f(x,y);
        glVertex2f(x+s,y+s);
        glVertex2f(x+(2*s),y);
        glVertex2f(x+s,y-s);
        glEnd();
        glBegin(GL_TRIANGLES);  //for the tail fin
        glVertex2f(x+(2*s),y);
        glVertex2f(x+(2*s)+2,y+(s-1));
        glVertex2f(x+(2*s)+2,y-(s-1));
        glEnd();
}
void classofFish()
{
	otherfish(-40,40,3,1,1,0);
	otherfish(-35,45,3,1,0,0);
	otherfish(-35,35,3,1,0,0);
	otherfish(-25,50,3,1,0,1);
	otherfish(-25,45,3,1,0,1);
	otherfish(-25,40,3,1,0,1);
	otherfish(-25,35,3,1,0,1);
	otherfish(-25,30,3,1,0,1);
}
void display()
{
	int i;	
	float x=-90;
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glPushMatrix();	
	glTranslatef(0,90,0);
	glScalef(2,2,1);	
	move();	
	glLineWidth(1);
	net();
	glPopMatrix();
	
	glPushMatrix();
	glPointSize(2);
	glLineWidth(2);
	glScalef(0.5,0.5,0);
	glTranslatef(-70,0,0);
	if(tx<140){
		move1();
	}
	else{
		glTranslatef(tx,0,0);
	}
	if(flagn==1)
	{
		tny+=1.3;
		glTranslatef(0,tny,0);
		glutPostRedisplay();
	}
	nemo();
	glPopMatrix();
	//classofFish();
	/*glPushMatrix();	
	glScalef(1.2,1.2,0);
	x=-100;
	//for(i=0;i<2;i++){
	//glPushMatrix();
	glTranslatef(-80,-60,0);
	anemone(62,98,63);
//	glPopMatrix();
	glTranslatef(-50,-60,0);
	anemone(62,98,63);
	x+=30;	
	//}
	glPopMatrix();*/
	/*glPushMatrix();
	glScalef(1.3,1.3,0);
	x=-80;
	for(i=0;i<2;i++){
	glPushMatrix();
	glTranslatef(x,-53,0);
	anemone(126,60,136);
	glPopMatrix();
	x+=20;	
	}
	glPopMatrix();
	glPushMatrix();
	glScalef(1.3,1.3,0);
	x=-80;
	for(i=0;i<3;i++){
	glPushMatrix();
	glTranslatef(x,-55,0);
	anemone(163,60,60);
	glPopMatrix();
	x+=20;	
	}
	glPopMatrix();	*/
	glPushMatrix();
	glTranslatef(-70,-70,0);
	glScalef(1.5,1.5,0);
	glLineWidth(4);
	seaweed(1,0,0);
	glPopMatrix();
	glBegin(GL_POLYGON);	//ocean bed
	glColor3ub(200,170,50);
	glVertex3f(-80,-50,0);
	glColor3ub(253,100,10);
	glVertex3f(80,-50,0);
	glColor3ub(200,131,24);
	glVertex3f(80,-80,0);
	glColor3ub(253,100,10);
	glVertex3f(-80,-80,0);
	glEnd();

	glFlush();
}
void keyboard_s (unsigned char key, int x, int y)
{
   switch (key)
   {
//      case 'a' : ballX -= 0.1f; break;
  //    case 'd' : ballX  += 0.1f; break;
    //  case 'w' : ballY += 0.1f; break;
     // case 's' : ballY -= 0.1f; break;
      case 'x' : exit(0); break;
   }
   glutPostRedisplay();
}
void myReshape(int w,int h)
{
	glClearColor(0.082,0.564,0.8,0.0);
        glViewport(0,0,w,h);
        glMatrixMode(GL_PROJECTION);
        glPointSize(10);
        glLoadIdentity();
        glOrtho(-80.0,80.0,-80.0,80.0,-100.0,100.0);
        glMatrixMode(GL_MODELVIEW);
//	glutPostRedisplay();
}
int main(int argc,char **argv)
{
        glutInit(&argc,argv);
        glutCreateWindow("Whatever");
        glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutFullScreen();        
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
        glutReshapeFunc(myReshape);
        glutDisplayFunc(display);
	//glutMouseFunc(mouse);
        glutKeyboardFunc(keyboard_s);
	glEnable(GL_DEPTH_TEST);

	/*glutCreateMenu(nemomenu);
        glutAddMenuEntry("Second Scene",1);
	glutAddMenuEntry("Third Scene",2);
        glutAddMenuEntry("Exit",3);
        glutAttachMenu(GLUT_RIGHT_BUTTON);*/

        glutMainLoop();
        return 0;
}

