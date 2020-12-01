
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
#include <dos.h>

int main()
{
    int gdriver = DETECT, gmode, errorcode;
	float p,i,x,y,rx,ry;
     int midx,midy;




   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }


    printf("enter the value of rx");
    scanf("%f",&rx);
    printf("enter the value of ry");
    scanf("%f",&ry);

    cleardevice();


       midx=(getmaxx()/2);;
       midy=(getmaxy()/2);;





	p=((ry*ry)-(rx*rx*ry)+(rx*rx*0.25));

	x=0;
	y=ry;

	while((2*ry*ry*x)<(2*rx*rx*y))
	{

		if(p<0)
		{
			putpixel(x+midx,y+midy,getmaxcolor());

			putpixel(x+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,y+midy,getmaxcolor());

			x=x+1;
			p=p + (2*ry*ry*x) + (ry*ry);

		}
		else
		{
			putpixel(x+midx,y+midy,getmaxcolor());

			putpixel(x+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,y+midy,getmaxcolor());

			x=x+1;
			y=y-1;

			p=p + (2*ry*ry*x) + (ry*ry) - (2*rx*rx*y);

		}

	}

	p=(ry*ry)*(x+0.5)*(x+0.5)-((rx*rx)*(y-1)*(y-1))+(rx*rx*ry*ry);



	while(y!=0)
	{

		if(p>0)
		{
			putpixel(x+midx,y+midy,getmaxcolor());

			putpixel(x+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,(-y)+midy,getmaxcolor());
			
			putpixel((-x)+midx,y+midy,getmaxcolor());

			y=y-1;
			p=p - (2*rx*rx*y) + (rx*rx);

		}
		else
		{
			putpixel(x+midx,y+midy,getmaxcolor());

			putpixel(x+midx,(-y)+midy,getmaxcolor());

			putpixel((-x)+midx,(-y)+midy,getmaxcolor());
			
			putpixel((-x)+midx,y+midy,getmaxcolor());

			x=x+1;
			y=y-1;

			p=p + (2*ry*ry*x) + (rx*rx) - (2*rx*rx*y);

		}

	}


   getch();
   closegraph();
   return 0;

	
}
