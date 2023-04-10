#include<iostream>
#include<graphics.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight * 0.75
using namespace std;
int main()
{
    int gd=DETECT,gm,x=0,j,i,y,ldisp=0,rx, ry;
    initgraph(&gd,&gm,"");
  outtextxy(40,110,"Jannatul Ferdous (Dola)");
outtextxy(40,125," computer Grafics Project Name");
 outtextxy(50,180,"(1) Football Field");
outtextxy(50,200,"(2) Man drawing");
outtextxy(50,220,"(3)Bus Drawing");
outtextxy(50,240,"(4) Flag drawing ");
outtextxy(50,260,"(5) Emoji drawing");
outtextxy(50,280,"(6)School drawing");
outtextxy(50,300,"(7) Rain and House drawing");
outtextxy(50,320,"(8) Flower Drawing");
outtextxy(50,340,"(9) The End ");

outtextxy(150,85,"CSE1901016120");
int digit;
      cout<<"Enter a Number :";
      cin>>digit;
  switch (digit)


   {
   case 1:
setcolor(YELLOW);
 line(20,80,500,80);
    break;
    case 2 :

initwindow(800,600,"Bresenham's");
int x,y,x1,x2,y1,y2,dx,dy,p;
cout<<"Enter x1 and y1: ";
cin>>x1>>y1;

cout<<"Enter x2 and y2: ";
cin>>x2>>y2;

dx=abs(x2-x1);
dy=abs(y2-y1);

x=x1;
y=y1;

p=2*dy-dx;

while(x<=x2)
{
    if(p>=0){

        putpixel(x,y,RED);
        y=y+1;
       p=p+2*dy-2*dx;
    }
    else{
      putpixel(x,y,7);
       p=p+2*dy;

    }
    x=x+1;
    delay(100);
}
    break;
   case 3:

float step;
cout<<"Enter the value of x1 and y1 : ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;

dx=abs(x2-x1);
dy=abs(y2-y1);

if(dx>=dy)
step=dx;
else
step=dy;

dx=dx/step;
dy=dy/step;

x=x1;
y=y1;

i=1;
while(i<=step)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}


      break;
   case 4:
  initgraph(&gd, &gm, "C:\\turboc3\\bgi");
 initwindow(1250,800,"Football Field");
    // Ground Outline
    rectangle(100, 50, 1200, 550);

    // Coloring Green
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(150, 150, 15);

    // Ground Middle Line
    line(650, 50, 650, 550);
    line(656, 50, 656, 550);

    // Coloring White
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(652, 150, 15);

    // Mid Circles
    circle(653, 300, 60);
    circle(653, 300, 65);
    circle(653, 300, 10);

    // Outer Rectangle Left
    rectangle(100, 200, 250, 400);
    rectangle(100, 205, 245, 395);

    // Inner Rectangle Left
    rectangle(100, 230, 200, 370);
    rectangle(100, 235, 195, 365);

    // Arc Left Side
    arc(250, 300, 270, 90, 40);
    arc(250, 300, 270, 90, 35);

    // Outer Rectangle Right
    rectangle(1200, 200, 1050, 400);
    rectangle(1200, 205, 1055, 395);

    // Inner Rectangle Right
    rectangle(1200, 230, 1100, 370);
    rectangle(1200, 235, 1105, 365);

    // Arc Right Side
    arc(1051, 300, 90, 270, 40);
    arc(1051, 300, 90, 270, 35);

    // Coloring All White
    floodfill(714, 300, 15);
    floodfill(592, 300, 15);
    floodfill(657, 300, 15);
    floodfill(645, 300, 15);
    floodfill(247, 300, 15);
    floodfill(197, 300, 15);
    floodfill(287, 300, 15);
    floodfill(1053, 300, 15);
    floodfill(1103, 300, 15);
    floodfill(1013, 300, 15);

    // Holding Screen F
       break;
    case 5:

   //for head
   ellipse(320,95,360,0,25,20);
   line(298,85,341,85);
   circle(310,90,2);
   circle(330,90,2);

   arc(320,100,200,-20,10);

   //for neck
   line(313,115,313,125);
   line(328,115,328,125);

   //For centre part
   arc(320,225,72,107,100);
   line(290,129,290,200);
   line(350,129,350,200);
   line(290,193,350,193);
   line(290,200,350,200);

   //for legs
   line(290,200,285,280);
   line(320,225,305,280);
   line(322,225,335,280);
   line(350,200,355,280);

   //for right hand
   line(290,129,255,165);
   line(255,165,290,200);
   line(290,149,275,165);
   line(275,165,290,182);

   //for left hand
   line(350,129,385,165);
   line(385,165,350,200);
   line(350,149,365,165);
   line(365,165,350,182);

   //for shoes
   line(285,280,275,287);
   line(275,287,305,287);
   line(305,280,305,287);

   line(335,280,335,287);
   line(335,287,365,287);
   line(355,280,365,287);

   //for name
   settextstyle(2,HORIZ_DIR,4);
   outtextxy(293,150,"The Crazy");
   outtextxy(292,160,"Programmer");
            break;
    case 6:
      setcolor(WHITE);
      setfillstyle(SOLID_FILL,BLUE);
      circle(550,35,20);
      floodfill(550,35,WHITE);

 for(j=0;j<700;j++)
{
    line(100+j,200,150+j,200);

    arc(170+j,200,0,180,20);
    line(190+j,200,310+j,200);
    arc(330+j,200,0,180,20);
    line(350+j,200,400+j,200);
    line(400+j,200,400+j,180);
    line(400+j,180,340+j,160);
    line(340+j,160,310+j,140);
    line(310+j,140,175+j,140);
    line(175+j,140,145+j,160);
    line(340+j,160,145+j,160);
    line(145+j,160,100+j,180);
  line(100+j,180,100+j,200);
  line(0,200,700,200);
 delay(5);
cleardevice();
}
      break;
     case 7:

    initwindow(1000,800,"National Flag");

    line(500,0,500,800);
    line(0,400,1000,400);


setcolor(RED);
      setfillstyle(SOLID_FILL,GREEN);
    rectangle(100,50,400,200);
    rectangle(600,50,900,200);
    rectangle(100,450,400,600);
    rectangle(600,450,900,600);
     floodfill(101,60,RED);
     floodfill(601,60,RED);
     floodfill(101,460,RED);
     floodfill(601,460,RED);
setcolor(RED);
      setfillstyle(SOLID_FILL,BLUE);
    rectangle(80,50,100,350);
    rectangle(580,50,600,350);
    rectangle(80,450,100,750);
    rectangle(580,450,600,750);
 floodfill(81,60,RED);
  floodfill(581,60,RED);
   floodfill(81,460,RED);
   floodfill(581,460,RED);

    setcolor(RED);
      setfillstyle(SOLID_FILL,RED);

    circle(250,120,50);
    circle(750,120,50);
    circle(250,525,50);
    circle(750,525,50);
   floodfill(250,120,RED);
   floodfill(750,120,RED);
   floodfill(250,525,RED);
   floodfill(750,525,RED);
         break;
   case 8 :

    initwindow(1000,800,"EMOJI");

    line(500,0,500,800);
    line(0,400,1000,400);
setcolor(RED);
      setfillstyle(SOLID_FILL,YELLOW);
 circle(250,150,120);
circle(750,150,120);
circle(250,550,120);
circle(750,550,120);
floodfill(250,150,RED);
floodfill(750,150,RED);
floodfill(250,550,RED);
floodfill(750,550,RED);

setcolor(RED);
      setfillstyle(SOLID_FILL,WHITE);
circle(200,100,15);
circle(300,100,15);

circle(700,100,15);
circle(800,100,15);

circle(200,500,15);
circle(300,500,15);

circle(700,500,15);
circle(800,500,15);

floodfill(200,100,RED);
floodfill(300,100,RED);
floodfill(700,100,RED);
floodfill(800,100,RED);
floodfill(200,500,RED);
floodfill(300,500,RED);
floodfill(700,500,RED);
floodfill(800,500,RED);


setcolor(BLACK);
line(250,190,210,140);
line(250,190,290,140);

line(750,190,710,140);
line(750,190,790,140);

line(250,590,210,540);
line(250,590,290,540);

line(750,590,710,540);
line(750,590,790,540);

line(240,156,260,156);
line(740,156,760,156);
line(240,556,260,556);
line(740,556,760,556);
setcolor(RED);
      setfillstyle(SOLID_FILL,BLACK);
circle(200,100,5),
circle(300,100,5);

circle(700,100,5);
circle(800,100,5);

circle(200,500,5);
circle(300,500,5);

circle(700,500,5);
circle(800,500,5);

floodfill(200,100,RED);
floodfill(300,100,RED);
floodfill(700,100,RED);
floodfill(800,100,RED);
floodfill(200,500,RED);
floodfill(300,500,RED);
floodfill(700,500,RED);
floodfill(800,500,RED);


floodfill(200,100,RED);
     break;

case 9:
setcolor(RED);
setfillstyle(SOLID_FILL,GREEN);
  line(250,50,100,150);
  line(250,50,400,150);

 //windrow
  line(170,200,200,200);
  line(200,200,200,230);
  line(200,230,170,230);
  line(170,230,170,200);

  line(330,200,300,200);
  line(300,200,300,230);
  line(300,230,330,230);
  line(330,230,330,200);
  //line(100,50,100,150);
 // line(100,50,400,50);
 // line(400,50,400,150);
  line(100,150,400,150);
floodfill(256,60,RED);
floodfill(176,210,RED);
floodfill(306,210,RED);
 setcolor(RED);
setfillstyle(SOLID_FILL,BLUE);


  line(150,150,150,300);
  line(350,150,350,300);
  line(150,300,350,300);
  line(200,300,200,325);
  line(300,300,300,325);
  line(200,325,300,325);
  line(225,325,225,340);
  line(275,325,275,340);
  line(225,340,275,340);
floodfill(156,160,RED);
floodfill(201,310,RED);
floodfill(226,330,RED);
  //door
    setcolor(RED);
setfillstyle(SOLID_FILL,RED);
  line(230,160,230,280);
  line(230,160,260,165);
  line(260,165,260,285);
  line(260,285,230,280);
  floodfill(231,165,RED);
//flag
setcolor(RED);
   setfillstyle(SOLID_FILL,GREEN);

line(500,100,500,300);
line(500,300,470,320);
line(500,300,480,320);
line(500,300,490,320);
line(500,300,500,320);
line(500,300,510,320);
line(500,300,510,320);
line(500,300,530,320);
line(500,100,600,100);
line(600,100,600,150);
line(600,150,500,150);
floodfill(501,110,RED);

//circle
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(550,125,20);
floodfill(550,125,RED);
//NAME
setcolor(YELLOW);
line(150,400,150,470),
line(160,400,160,470);
line(160,400,190,470);
line(190,400,190,470);
line(200,400,220,400);
line(200,400,200,435);
line(200,435,220,435);
line(220,435,220,470);
line(220,470,200,470);
line(240,400,230,470);
line(240,400,250,470);
line(235,435,245,435);
line(260,400,260,470);
line(290,400,290,470);
line(260,400,290,470);
      break;
     case 10 :


case 11:
  setcolor(WHITE);
 setfillstyle(SOLID_FILL,RED);
 circle(230,200,40);
 floodfill(230,200,WHITE);
setcolor(WHITE);
 setfillstyle(SOLID_FILL,YELLOW);
arc(260,160,290,180,32);
 arc(285,219,202,118,32);
 arc(232,255,140,50,30);
 arc(180,222,75,338,32);
 arc(195,160,0,263,32);
 arc(100,255,300,0,162);
 arc(102,275,300,12,164);
 floodfill(262,163,WHITE);
 floodfill(287,220,WHITE);
floodfill(233,257,WHITE);
   floodfill(182,224,WHITE);
 floodfill(197,163,WHITE);

 outtextxy(100,425," ***  This program is made by jannatul  ***");

         break;
case 12:

outtextxy(100,400,"THANK YOU MA,MAM");
   break;
 defalt :
    cout<<"thank you man:";
      }




   getch();
   closegraph();
   return 0;
}



