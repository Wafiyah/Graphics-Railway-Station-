#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define M_PI 3.14

int c=0,d=300; int e=0,f=550,g=380,h=970,i=540,j=970,k=380,l=965,m=540,n=970;
GLfloat x=0.0;
int z=0,a;
int train1,basic;

//matrix


void sky()
{


		glBegin(GL_POLYGON);
		glColor3f(0,1,1);
		glVertex2f(0,750);
		glVertex2f(999,750);
		glVertex2f(999,999);
		glVertex2f(0,999);
		glEnd();

}

        void tree_one_body(){glBegin(GL_POLYGON);// tree1 er body
		glColor3f(.8,.7,.1);
		glVertex2d(530,750);
        glVertex2d(550,750);
		glVertex2d(550,777);
		glVertex2d(530,777);
		glEnd();}

		void tree_two_body(){glBegin(GL_POLYGON);// tree2 er body
		glColor3f(.8,.7,.1);
		glVertex2d(780,750);
        glVertex2d(795,750);
		glVertex2d(795,777);
		glVertex2d(780,777);
		glEnd();}



		void window_one(){glBegin(GL_POLYGON);//still train er 1st window
		glColor3f(.1,.1,.1);
		glVertex2d(480,550);
		glVertex2d(515,550);
		glVertex2d(515,625);
		glVertex2d(480,625);
		glEnd();}


		void body_one(){glBegin(GL_POLYGON);//still train er 1st body
		glColor3f(1,.87,.1);
		glVertex2d(460,500);
		glVertex2d(600,500);
		glVertex2d(600,660);
		glVertex2d(460,660);
		glEnd();}


        void c_one(){glBegin(GL_POLYGON);//still train er connector 1
		glColor3f(.8,.87,.1);
		glVertex2d(600,550);
        glVertex2d(610,550);
		glVertex2d(610,600);
		glVertex2d(600,600);
		glEnd();}

		void body_two(){glBegin(GL_POLYGON);//still train er 2nd body
		glColor3f(1,.87,.1);
		glVertex2d(610,500);
		glVertex2d(710,500);
		glVertex2d(710,660);
		glVertex2d(610,660);
		glEnd();}


        void window_two(){glBegin(GL_POLYGON);//2nd window
		glColor3f(.1,.1,.1);
		glVertex2d(630,540);
		glVertex2d(660,540);
		glVertex2d(660,600);
		glVertex2d(630,600);
		glEnd();}

		void door_one(){glBegin(GL_POLYGON);//still train er 1st door
		glColor3f(.1,.1,.1);
		glVertex2d(680,510);
		glVertex2d(700,510);
		glVertex2d(700,625);
		glVertex2d(680,625);
		glEnd();}

		void c_two(){glBegin(GL_POLYGON);//still train er connector 2
		glColor3f(.8,.87,.1);
		glVertex2d(710,550);
        glVertex2d(720,550);
		glVertex2d(720,600);
		glVertex2d(710,600);
		glEnd();}

		void body_three(){glBegin(GL_POLYGON);//still train er 3rd body
		glColor3f(1,.87,.1);
		glVertex2d(720,500);
		glVertex2d(820,500);
		glVertex2d(820,660);
		glVertex2d(720,660);
		glEnd();}

		void window_three(){glBegin(GL_POLYGON);//3rd window
		glColor3f(.1,.1,.1);
		glVertex2d(730,540);
		glVertex2d(760,540);
		glVertex2d(760,600);
		glVertex2d(730,600);
		glEnd();}

		void door_two(){glBegin(GL_POLYGON);//still train er 2nd door
		glColor3f(.1,.1,.1);
		glVertex2d(780,510);
		glVertex2d(800,510);
		glVertex2d(800,625);
		glVertex2d(780,625);
		glEnd();}

		void c_three(){glBegin(GL_POLYGON);//still train er connector 3
		glColor3f(.8,.87,.1);
		glVertex2d(820,550);
        glVertex2d(830,550);
		glVertex2d(830,600);
		glVertex2d(820,600);
		glEnd();}

		void body_four(){glBegin(GL_POLYGON);//still train er 4th body
		glColor3f(1,.87,.1);
		glVertex2d(830,500);
		glVertex2d(930,500);
		glVertex2d(930,660);
		glVertex2d(830,660);
		glEnd();}

		void window_four(){glBegin(GL_POLYGON);//4th window
		glColor3f(.1,.1,.1);
		glVertex2d(850,540);
		glVertex2d(880,540);
		glVertex2d(880,600);
		glVertex2d(850,600);
		glEnd();}

		void door_three(){glBegin(GL_POLYGON);//still train er 1st door
		glColor3f(.1,.1,.1);
		glVertex2d(890,510);
		glVertex2d(910,510);
		glVertex2d(910,625);
		glVertex2d(890,625);
		glEnd();}

        void tree_one(){glBegin(GL_TRIANGLES);// pink tree er dalpala
        glColor3f(0., 0.5, 0.0);
        glVertex3f(480, 777, 0);
        glVertex3f(540,900, 0);
        glVertex3f(595, 777, 0);

        glColor3f(0.1, 0.2, 0.5);
        glVertex3f(485, 810, 0);
        glVertex3f(540,900, 0);
        glVertex3f(590, 810, 0);

        glColor3f(0.1, 0.2, 0.5);
        glVertex3f(500, 850, 0);
        glVertex3f(540,910, 0);
        glVertex3f(580, 850, 0);
        glEnd();}

void tree_two(){glBegin(GL_TRIANGLES);// green tree er dalpala


        glColor3f(0.0, 0.5, 0.0);
        glVertex3f(700, 777, 0);
        glVertex3f(790,900, 0);
        glVertex3f(880, 777, 0);


        glVertex3f(710, 830, 0);
        glVertex3f(800,930, 0);
        glVertex3f(870,830, 0);

        glVertex3f(718, 870, 0);
        glVertex3f(795,990, 0);
        glVertex3f(865,870, 0);
        glEnd();}

void wall(){glBegin(GL_POLYGON);
		glColor3f(0.8,.91,.51);
		glVertex2d(0,550);
		glVertex2d(999,550);
		glVertex2d(999,750);
		glVertex2d(0,750);
		glEnd();}

		void platform(){

        glBegin(GL_POLYGON);
		glColor3f(0.6,.61,.51);
		glVertex2d(0,370);
		glVertex2d(999,370);
		glVertex2d(999,555);
		glVertex2d(0,555);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.6,.61,.51);
		glVertex2d(0,360);
		glVertex2d(999,360);
		glVertex2d(999,368);
		glVertex2d(0,368);
		glEnd();

		}
void home(){
    glBegin(GL_POLYGON);//g1
		glColor3f(1,.6,1);
		glVertex2f(125,450);
		glVertex2f(150,415);
		glVertex2f(150,990);
		glVertex2f(125,990);
		glEnd();


    glBegin(GL_POLYGON);//chal 1
		glColor3f(1,0,1);
		glVertex2f(0,790);
		glVertex2f(140,790);
		glVertex2f(100,950);
		glVertex2f(0,950);
		glEnd();

		glBegin(GL_POLYGON);//wall 1
		glColor3f(1,0.9,1);
		glVertex2f(0,450);
		glVertex2f(125,450);
		glVertex2f(125,790);
		glVertex2f(0,790);
		glEnd();

        glBegin(GL_POLYGON);//g2
		glColor3f(1,.8,1);
		glVertex2f(150,415);
		glVertex2f(350,415);
		glVertex2f(350,990);
		glVertex2f(150,990);
		glEnd();


		glBegin(GL_POLYGON);//g4
		glColor3f(1,0,.91);
		glVertex2f(350,750);
		glVertex2f(460,750);
		glVertex2f(400,950);
		glVertex2f(350,950);
		glEnd();
         glBegin(GL_POLYGON);//g3
		glColor3f(1,0.3,1);
		glVertex2f(150,810);
		glVertex2f(370,810);
		glVertex2f(348,990);
		glVertex2f(0200,990);
		glEnd();
		glBegin(GL_POLYGON);//g5
		glColor3f(1,.6,1);
		glVertex2f(350,440);
		glVertex2f(440,440);
		glVertex2f(440,750);
		glVertex2f(350,750);
		glEnd();

		glBegin(GL_POLYGON);//g6
		glColor3f(1,.7,.91);
		glVertex2f(440,440);
		glVertex2f(448,470);
		glVertex2f(448,750);
		glVertex2f(440,750);
		glEnd();
        glBegin(GL_POLYGON);//g7
		glColor3f(0,0,1);
		glVertex2f(170,580);
		glVertex2f(370,580);
		glVertex2f(350,680);
		glVertex2f(150,680);
		glEnd();
		glBegin(GL_POLYGON);//d1
		glColor3f(1,.9,0);
		glVertex2f(25,455);
		glVertex2f(90,455);
		glVertex2f(90,665);
		glVertex2f(25,665);
		glEnd();
		glBegin(GL_POLYGON);//d2
		glColor3f(0,1,1);
		glVertex2f(25,455);
		glVertex2f(90,455);
		glVertex2f(90,460);
		glVertex2f(25,460);
		glEnd();

		glBegin(GL_POLYGON);//d3
		glColor3f(0,1,1);
		glVertex2f(25,455);
		glVertex2f(30,455);
		glVertex2f(30,665);
		glVertex2f(25,665);
		glEnd();
		glBegin(GL_POLYGON);//d4
		glColor3f(0,1,1);
		glVertex2f(25,665);
		glVertex2f(95,665);
		glVertex2f(95,670);
		glVertex2f(25,670);
		glEnd();

		glBegin(GL_POLYGON);//d5
		glColor3f(0,1,1);
		glVertex2f(90,455);
		glVertex2f(95,455);
		glVertex2f(95,665);
		glVertex2f(90,665);
		glEnd();
		glBegin(GL_POLYGON);//d10
		glColor3f(0,1,1);
		glVertex2f(35,580);
		glVertex2f(85,580);
		glVertex2f(85,655);
		glVertex2f(35,655);
		glEnd();
		glBegin(GL_POLYGON);//d6
		glColor3f(1,.7,0);
		glVertex2f(40,623);
		glVertex2f(56,623);
		glVertex2f(56,650);
		glVertex2f(40,650);
		glEnd();
		glBegin(GL_POLYGON);//d7
		glColor3f(1,.7,0);
		glVertex2f(60,623);
		glVertex2f(77,623);
		glVertex2f(77,650);
		glVertex2f(60,650);
		glEnd();
		glBegin(GL_POLYGON);//d8
		glColor3f(1,.7,0);
		glVertex2f(40,590);
		glVertex2f(56,590);
		glVertex2f(56,617);
		glVertex2f(40,617);
		glEnd();
		glBegin(GL_POLYGON);//d9
		glColor3f(1,.7,0);
		glVertex2f(60,590);
		glVertex2f(77,590);
		glVertex2f(77,617);
		glVertex2f(60,617);
		glEnd();
        glBegin(GL_POLYGON);//d02
		glColor3f(0,1,1);
		glVertex2f(210,417);
		glVertex2f(285,417);
		glVertex2f(285,421);
		glVertex2f(210,421);
		glEnd();

		glBegin(GL_POLYGON);//d03
		glColor3f(0,1,1);
		glVertex2f(210,417);
		glVertex2f(215,421);
		glVertex2f(215,580);
		glVertex2f(210,580);
		glEnd();
		glBegin(GL_POLYGON);//d04
		glColor3f(0.6,.1,.51);
		glVertex2f(215,419);
		glVertex2f(285,419);
		glVertex2f(285,580);
		glVertex2f(215,580);
		glEnd();
		glBegin(GL_POLYGON);//d04
		glColor3f(0,1,1);
		glVertex2f(285,417);
		glVertex2f(290,417);
		glVertex2f(290,580);
		glVertex2f(285,580);
		glEnd();
       /* glBegin(GL_POLYGON);// janala 1 er nich
        glColor3f(.6,0.5,.40);
		glVertex2f(0,543);
		glVertex2f(40,543);
		glVertex2f(40,550);
		glVertex2f(0,550);
		glEnd();

		glBegin(GL_POLYGON);// janala  1 er upor
		glColor3f(.6,0.6,.0);
		glVertex2f(0,600);
		glVertex2f(48,600);
		glVertex2f(48,615);
		glVertex2f(0,615);
		glEnd();

		glBegin(GL_POLYGON);// janala 1
		glColor3f(.6,0.6,.51);
		glVertex2f(0,548);
		glVertex2f(35,548);
		glVertex2f(35,600);
		glVertex2f(0,600);
		glEnd();

		glBegin(GL_POLYGON);// janala1 er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(0,548);
		glVertex2f(5,548);
		glVertex2f(5,600);
		glVertex2f(0,600);
		glEnd();

		glBegin(GL_POLYGON);// janala1 er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(15,548);
		glVertex2f(20,548);
		glVertex2f(20,600);
		glVertex2f(15,600);
		glEnd();

		glBegin(GL_POLYGON);// janala1 er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(35,548);
		glVertex2f(40,548);
		glVertex2f(40,600);
		glVertex2f(35,600);
		glEnd();



        glBegin(GL_POLYGON);// janala er nich
        glColor3f(.6,0.5,.40);
		glVertex2f(135,543);
		glVertex2f(238,543);
		glVertex2f(238,550);
		glVertex2f(135,550);
		glEnd();

		glBegin(GL_POLYGON);// janala er upor
		glColor3f(.6,0.6,.0);
		glVertex2f(120,600);
		glVertex2f(250,600);
		glVertex2f(250,615);
		glVertex2f(120,615);
		glEnd();





		glBegin(GL_POLYGON);// janala
		glColor3f(.6,0.6,.51);
		glVertex2f(135,548);
		glVertex2f(233,548);
		glVertex2f(233,600);
		glVertex2f(135,600);
		glEnd();

		glBegin(GL_POLYGON);// janala er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(135,548);
		glVertex2f(140,548);
		glVertex2f(140,600);
		glVertex2f(135,600);
		glEnd();

		glBegin(GL_POLYGON);// janala er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(155,548);
		glVertex2f(160,548);
		glVertex2f(160,600);
		glVertex2f(155,600);
		glEnd();

		glBegin(GL_POLYGON);// janala er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(175,548);
		glVertex2f(180,548);
		glVertex2f(180,600);
		glVertex2f(175,600);
		glEnd();

		glBegin(GL_POLYGON);// janala er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(195,548);
		glVertex2f(200,548);
		glVertex2f(200,600);
		glVertex2f(195,600);
		glEnd();

		glBegin(GL_POLYGON);// janala er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(215,548);
		glVertex2f(220,548);
		glVertex2f(220,600);
		glVertex2f(215,600);
		glEnd();

		glBegin(GL_POLYGON);// janala er greel
		glColor3f(.6,0.5,.40);
		glVertex2f(233,548);
		glVertex2f(238,548);
		glVertex2f(238,600);
		glVertex2f(233,600);
		glEnd();




		glBegin(GL_POLYGON);
		glColor3f(.66,0,1);
		glVertex2f(0,473);
		glVertex2f(320,473);
		glVertex2f(320,500);
		glVertex2f(0,500);
		glEnd();*/





}		void quad(){//railline er kath gula
        glColor3f(0.21, 0.2, 0.05);
glBegin(GL_POLYGON);
		glVertex2f(20,74);
		glVertex2f(40,74);
		glVertex2f(50,160);
		glVertex2f(30,160);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(60,74);
		glVertex2f(80,74);
		glVertex2f(90,160);
		glVertex2f(70,160);
		glEnd();

        glBegin(GL_POLYGON);
		glVertex2f(100,74);
		glVertex2f(120,74);
		glVertex2f(130,160);
		glVertex2f(110,160);
		glEnd();

        glBegin(GL_POLYGON);
		glVertex2f(140,74);
		glVertex2f(160,74);
		glVertex2f(170,160);
		glVertex2f(150,160);
		glEnd();

        glBegin(GL_POLYGON);
		glVertex2f(180,74);
		glVertex2f(200,74);
		glVertex2f(210,160);
		glVertex2f(190,160);
		glEnd();

        glBegin(GL_POLYGON);
		glVertex2f(220,74);
		glVertex2f(240,74);
		glVertex2f(250,160);
		glVertex2f(230,160);
		glEnd();

        glBegin(GL_POLYGON);
		glVertex2f(260,74);
		glVertex2f(280,74);
		glVertex2f(290,160);
		glVertex2f(270,160);
		glEnd();

        glBegin(GL_POLYGON);
        glVertex2f(300,74);
		glVertex2f(320,74);
		glVertex2f(330,160);
		glVertex2f(310,160);
		glEnd();



		glBegin(GL_POLYGON);
		glVertex2f(340,74);
		glVertex2f(360,74);
		glVertex2f(370,160);
		glVertex2f(350,160);
		glEnd();



		glBegin(GL_POLYGON);
		glVertex2f(380,74);
		glVertex2f(400,74);
		glVertex2f(410,160);
		glVertex2f(390,160);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(420,74);
		glVertex2f(440,74);
		glVertex2f(450,160);
		glVertex2f(430,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(460,74);
		glVertex2f(480,74);
		glVertex2f(490,160);
		glVertex2f(470,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(500,74);
		glVertex2f(520,74);
		glVertex2f(530,160);
		glVertex2f(510,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(540,74);
		glVertex2f(560,74);
		glVertex2f(570,160);
		glVertex2f(550,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(580,74);
		glVertex2f(600,74);
		glVertex2f(610,160);
		glVertex2f(590,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(620,74);
		glVertex2f(640,74);
		glVertex2f(650,160);
		glVertex2f(630,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(660,74);
		glVertex2f(680,74);
		glVertex2f(690,160);
		glVertex2f(670,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(700,74);
		glVertex2f(720,74);
		glVertex2f(730,160);
		glVertex2f(710,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(740,74);
		glVertex2f(760,74);
		glVertex2f(770,160);
		glVertex2f(750,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(780,74);
		glVertex2f(800,74);
		glVertex2f(810,160);
		glVertex2f(790,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(820,74);
		glVertex2f(840,74);
		glVertex2f(850,160);
		glVertex2f(830,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(860,74);
		glVertex2f(880,74);
		glVertex2f(890,160);
		glVertex2f(870,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(900,74);
		glVertex2f(920,74);
		glVertex2f(930,160);
		glVertex2f(910,160);
		glEnd();

		glBegin(GL_POLYGON);
		//glColor3f(.0,0,1);
		glVertex2f(940,74);
		glVertex2f(960,74);
		glVertex2f(970,160);
		glVertex2f(950,160);
		glEnd();
		}

void woman()
{
    glColor3ub(255,190,128);
	//face
    glColor3ub(255,190,128);
	glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(640,295,01);
	glutSolidTorus(1,15,70,90);
	glPopMatrix();
	glColor3ub(255,191,128);
    //glPushMatrix();
	//glTranslatef(540,494,0);
	//glutSolidTorus(7,17,100,90);
	//glPopMatrix();
	//glColor3ub(0,0,0);
	/*glBegin(GL_LINES);
 		glVertex2i(340,194);
 		glVertex2i(340,190); //nose
  		glVertex2i(331,198);
		glVertex2i(332,199);
 		glVertex2i(332,199);
 		*/
		//glVertex2i(537,298);//eyebrow
  	   // glVertex2i(549,298);
		//glVertex2i(548,299);
		//glVertex2i(548,299);
 		//glVertex2i(543,298);//eyebrow
 	glEnd();
//ear right
	glBegin(GL_POLYGON);
	glColor3ub(255,191,128);
	glVertex2i(640-14,294+1);
	glVertex2i(640-14,290+1);
	glVertex2i(638-14,289+1);
	glVertex2i(638-14,295+1);
	glEnd();
	//ear left
	glBegin(GL_POLYGON);
	glColor3ub(255,191,128);
	glVertex2i(654,295);
	glVertex2i(656,296);
	glVertex2i(656,291);
	glVertex2i(654,290);
	glEnd();
	//ear ring right
	glBegin(GL_POLYGON);
	glColor3ub(255,85,90);
	glVertex2i(639-14,292);
	glVertex2i(642-14,285);
	glVertex2i(636-14,285);

	glEnd();
	//ear ring left
   glBegin(GL_POLYGON);
	glColor3ub(255,85,90);
	glVertex2i(651,285);
	glVertex2i(655,292);
	glVertex2i(658,285);
	glEnd();

//hair
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(625,299);
	glVertex2i(649,309);
	glVertex2i(640,312);
	glVertex2i(628,307);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(640,307);
	glVertex2i(649,309);
	glVertex2i(652,307);
	glVertex2i(655,299);
	glEnd();
	// eyes
        glBegin(GL_POLYGON);
 		glVertex2i(633,296);
 		glVertex2i(635,296);
 		glVertex2i(635,294);
 		glVertex2i(633,294);
        glEnd();
        glBegin(GL_POLYGON);
 		glVertex2i(645,296);
 		glVertex2i(648,296);
     	glVertex2i(648,294);
 		glVertex2i(645,294);
glEnd();
//mouth
glBegin(GL_POLYGON);
 		glColor3ub(150,50,50);
        glVertex2i(634,287);
 		glVertex2i(640,284);
 		glVertex2i(646,287);
 		glVertex2i(640,285);
glEnd();
//shirt
 	glBegin(GL_POLYGON);
 		glColor3ub(160,150,250);
        glVertex2i(629,280);
 		glVertex2i(651,280);
 		glVertex2i(666,269);
 		glVertex2i(661,260);
 		glVertex2i(656,265);
        glVertex2i(656,245);
 		glVertex2i(624,245);
 		glVertex2i(624,265);
 		glVertex2i(619,260);
 		glVertex2i(614,269);
glEnd();
//neck
    glBegin(GL_POLYGON);
        glColor3ub(255,190,128);
        glVertex2i(633,280);
        glVertex2i(647,280);
        glVertex2i(645,271);
        glVertex2i(635,271);
    glEnd();
//hands
 	glBegin(GL_POLYGON);
		glColor3ub(255,191,128);
 		glVertex2i(665,268);
 		glVertex2i(675,253);
 		glVertex2i(667,254);
 		glVertex2i(662,262);
 	glEnd();
  	glBegin(GL_POLYGON);
		glVertex2i(675,253);
 		glVertex2i(656,238);
 		glVertex2i(656,245);
 		glVertex2i(667,254);
 	glEnd();
glBegin(GL_POLYGON);
	 	glVertex2i(615,268);
 		glVertex2i(605,253);
 		glVertex2i(613,254);
 		glVertex2i(618,262);
 	glEnd();
  	glBegin(GL_POLYGON);
		glVertex2i(605,253);
   		glVertex2i(624,238);
   		glVertex2i(624,245);
   		glVertex2i(613,254);
  	glEnd();
// belt
 	glBegin(GL_POLYGON);
		glColor3ub(10,120,130);
 		glVertex2i(656,245);
 		glVertex2i(624,245);
 		glVertex2i(624,240);
 		glVertex2i(656,240);
glEnd();


	/// leg
glBegin(GL_POLYGON);
		glColor3ub(255,190,128);
glVertex2i(655,240);
glVertex2i(625,240);
glVertex2i(620,165);//185
glVertex2i(630,165);//185
glVertex2i(633,238);
glVertex2i(650,165);//185
glVertex2i(660,165);//185
	glEnd();
//skirt
    glBegin(GL_POLYGON);
	    glColor3ub(180,80,90);
		glVertex2i(624,240);
		glVertex2i(656,240);
		glVertex2i(666,170);//190
		glVertex2i(614,170);//190
    glEnd();
	//shoe left
	glBegin(GL_POLYGON);
	glColor3ub(180,0,0);
	glVertex2i(630,165);//165
	glVertex2i(630,156);//156
	glVertex2i(628,156);
	glVertex2i(628,164);//164
	glVertex2i(622,156);
	glVertex2i(612,156);
	glVertex2i(620,165);//165

	glEnd();
	//shoe right
	glBegin(GL_POLYGON);
	glColor3ub(180,0,0);
	glVertex2i(650,165);
	glVertex2i(650,156);
	glVertex2i(652,156);
	glVertex2i(652,164);
	glVertex2i(658,156);
	glVertex2i(668,156);
	glVertex2i(660,165);
	glEnd();

}
void resting()
{
glBegin(GL_POLYGON);// 1st bench

		glColor3f(1,0,.0);

		glVertex2f(605,600);
		glVertex2f(650,600);
		glVertex2f(690,650);
		glVertex2f(605,650);
        glEnd();

glBegin(GL_POLYGON);// floor

		glColor3f(.4,.5,.6);
		glVertex2f(565,470);
		glVertex2f(940,470);
		glVertex2f(978,570);
		glVertex2f(615,570);
        glEnd();

        glBegin(GL_POLYGON);// floor er nich

		glColor3f(.44,.54,.64);
		glVertex2f(565,450);
		glVertex2f(940,450);
		glVertex2f(940,469);
		glVertex2f(565,469);
        glEnd();


glBegin(GL_POLYGON);// floor er side

		glColor3f(.44,.54,.64);

		glVertex2f(940,451);
		glVertex2f(978,562);
		glVertex2f(978,572);
		glVertex2f(940,469);
        glEnd();





    glBegin(GL_POLYGON);// back 1

		glColor3f(.64,.6,.9);
		glVertex2f(650,552);
		glVertex2f(945,552);
		glVertex2f(945,690);
		glVertex2f(650,690);
        glEnd();
        glBegin(GL_POLYGON);// 1st tar pisoner boro pa

		glColor3f(1,1.0,.0);

		glVertex2f(794,540);
		glVertex2f(800,540);
		glVertex2f(800,580);
		glVertex2f(794,580);
        glEnd();
        glBegin(GL_POLYGON);// 1st tar pisoner pa

		glColor3f(1,1.0,.0);

		glVertex2f(696,540);
		glVertex2f(701,540);
		glVertex2f(701,560);
		glVertex2f(696,560);
        glEnd();
        glBegin(GL_POLYGON);// 1st bench SEAT

		glColor3f(1,0,.0);

		glVertex2f(670,550);
		glVertex2f(770,550);
		glVertex2f(800,580);
		glVertex2f(700,580);
        glEnd();

        glBegin(GL_POLYGON);// 1st er back

		glColor3f(1,1.0,.0);

		glVertex2f(700,580);
		glVertex2f(800,580);
		glVertex2f(800,610);
		glVertex2f(700,610);
        glEnd();
        glBegin(GL_POLYGON);// 2ND er back

		glColor3f(1,1.0,.0);

		glVertex2f(850,580);
		glVertex2f(940,580);
		glVertex2f(940,610);
		glVertex2f(850,610);
        glEnd();

        glBegin(GL_POLYGON);// 2nd tar pisoner pa

		glColor3f(1,1.0,.0);

		glVertex2f(850,540);
		glVertex2f(855,540);
		glVertex2f(855,580);
		glVertex2f(850,580);
        glEnd();
        glBegin(GL_POLYGON);// 2nd tar samner pa

		glColor3f(1,1.0,.0);

		glVertex2f(825,520);
		glVertex2f(830,520);
		glVertex2f(830,555);
		glVertex2f(825,555);
        glEnd();
        glBegin(GL_POLYGON);// 1st tar samner pa

		glColor3f(1,1.0,.0);

		glVertex2f(680,520);
		glVertex2f(685,520);
		glVertex2f(685,550);
		glVertex2f(680,550);
        glEnd();
        glBegin(GL_POLYGON);// 1st tar samner pa

		glColor3f(1,1.0,.0);

		glVertex2f(762,520);
		glVertex2f(767,520);
		glVertex2f(767,550);
		glVertex2f(762,550);
        glEnd();


        glBegin(GL_POLYGON);// 2nd bench seaT

		glColor3f(1,0,.0);

		glVertex2f(820,550);
		glVertex2f(920,550);
		glVertex2f(940,580);
		glVertex2f(850,580);
        glEnd();
//eituku +50
        glBegin(GL_POLYGON);// 2ND er back

		glColor3f(1,1.0,.0);

		glVertex2f(850,580);
		glVertex2f(940,580);
		glVertex2f(940,610);
		glVertex2f(850,610);
        glEnd();


    glBegin(GL_POLYGON);// right side

		glColor3f(.6,0.65,.50);
		glVertex2f(917,490);
		glVertex2f(945,550);
		glVertex2f(945,760);
		glVertex2f(917,707);
		glEnd();

		glBegin(GL_POLYGON);// left side

		glColor3f(.6,0.65,.50);
		glVertex2f(620,490);
		glVertex2f(660,550);
		glVertex2f(660,760);
		glVertex2f(620,688);
		glEnd();




	glBegin(GL_POLYGON);// chad
		glColor3f(.6,0.65,.50);
		glVertex2f(600,700);
		glVertex2f(910,700);
		glVertex2f(960,800);
		glVertex2f(650,800);
		glEnd();

		glBegin(GL_POLYGON);// samner line ta
		glColor3f(.69,0.68,.50);
		glVertex2f(600,690);
		glVertex2f(910,690);
		glVertex2f(910,698);
		glVertex2f(600,698);
		glEnd();

		glBegin(GL_POLYGON);// side er line ta

		glColor3f(.69,0.68,.50);
		glVertex2f(910,690);
		glVertex2f(960,790);
		glVertex2f(960,800);
		glVertex2f(910,698);
		glEnd();


}


void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}


void TRAINS(int x1,int y1,int a,int b)
{		int i=0;
glBegin(GL_QUADS);
		glColor3f(0,0.0,1.0);			 //ENGINE
		glVertex2f(x1,y1);				//lengh ;
		glColor3f(0,0.0,1.0);
		glVertex2f(x1+150,y1);
		glColor3f(1.0,0.0,0.0);
		glVertex2f(x1+150,y1-90);
		glColor3f(0,0.0,0.0);
		glVertex2f(x1,y1-90);
		glEnd();

		while(i<3)
		{	glBegin(GL_QUADS);			//BOGIES
			glColor3f(1.0,0.0,0.0);		//F
			glVertex2f(a,b);

			glVertex2f(a+70,b);

			glVertex2f(a+70,b-90);

			glVertex2f(a,b-90);
			glEnd();
			a+=75;
			i++;
		}


}


void TRACKS()
{


		sky();

		tree_one();
		tree_one_body();
		tree_two();
		tree_two_body();
		wall();
		platform();
		//quad();
		woman();
        resting();
        home();

		/*body_one();
		window_one();
		c_one();

		body_two();
		window_two();
		door_one();
		c_two();

		body_three();
        window_three();
		door_two();
		c_three();

		body_four();
		window_four();
		door_three();*/

//
        glBegin(GL_LINES);// samner lomba line
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0,85);
		glVertex2f(999,85);
		glVertex2f(999,84);
		glVertex2f(0,84);

        glVertex2f(0,82);
		glVertex2f(999,82);
		glVertex2f(999,78);
		glVertex2f(0,78);

		glVertex2f(0,147);
		glVertex2f(999,147);
		glVertex2f(999,148);
		glVertex2f(0,148);


		glVertex2f(0,152);
		glVertex2f(999,152);
		glVertex2f(0,150);
		glVertex2f(999,150);

	glEnd();
	quad();


		/** boundery strt **/
	/*	glBegin(GL_LINES);// samner boundery
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0,300);
		glVertex2f(1000,300);
		glVertex2f(0,297);
		glVertex2f(1000,297);



		glColor3f(0.0,0.0,0.0);//boundery samner
		glVertex2f(0,295);
		glVertex2f(1000,295);
		glVertex2f(0,293);
		glVertex2f(1000,293);

		glColor3f(0.0,0.0,0.0);
		glVertex2f(0,400);
		glVertex2f(1000,400);
		glVertex2f(0,397);
		glVertex2f(1000,397);

        glColor3f(.1111,.10,.0);
		glVertex2f(0,395);
		glVertex2f(1000,395);
		glVertex2f(0,393);
		glVertex2f(1000,393);


        glColor3f(.1111,.10,.0);
		glVertex2f(0,304);
		glVertex2f(1000,304);

		glVertex2f(0,305);
		glVertex2f(1000,305);// samner railline shes


// sliper
		while(c!=1000)
		{
			glVertex2f(c,d);
			glVertex2f(c,d+120);
			c+=10;
		}
		glEnd();*/

		/** boundery finish **/


}



void myinit()
{	glClearColor(0.6,0.6,0.3,0);	//background color
	gluOrtho2D(0,999,0,999);



	basic = glGenLists(1);
		glNewList(basic, GL_COMPILE);
		TRACKS();
	glEndList();

	train1 = glGenLists(1);
		glNewList(train1, GL_COMPILE);
		TRAINS(730,180,882,180);
	glEndList();
}


void draw(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();

	glPushMatrix();
		glCallList(basic);
	glPopMatrix();

	glPushMatrix();
		glTranslatef(x,0.0,0.0);
		glCallList(train1);
		glFlush();
	glPopMatrix();
if(z<150)
{	a+=5;
	x=x-5.0;
	sleep(100);
	z++;
}

glPopMatrix();
glutPostRedisplay();
glFlush();

}


int main()
{	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1200,700);
	glutCreateWindow("Running Trains");
	glutDisplayFunc(draw);
   	myinit();
    glutMainLoop ();

    return 0;
}




