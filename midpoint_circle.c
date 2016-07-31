#include<stdio.h>
#include<graphics.h>

void pixel(int xc,int yc,int x,int y);

int main(){
	int gd=DETECT,gm,xc,yc,r,x,y,Pk;
	printf("Enter the value of Xc\t");
	scanf("%d",&xc);
	printf("Enter the value of Yc \t");
	scanf("%d",&yc);
	printf("Enter the Radius of circle\t");
	scanf("%d",&r);

	initgraph(&gd,&gm,"");
		
	x=0;
	y=r;
	Pk=1-r;
		
	pixel(xc,yc,x,y);
	while(x<y){
		if(Pk<0){
			x=x+1;
			Pk=Pk+(2*x)+1;
		}
		else{
			x=x+1;
			y=y-1;
			Pk=Pk+(2*x)-(2*y)+1;
		}
		pixel(xc,yc,x,y);
	}
	getch();
	closegraph();
}
void pixel(int xc,int yc,int x,int y){
	putpixel(xc+x,yc+y,7);
	putpixel(xc+y,yc+x,7);
	putpixel(xc-y,yc+x,7);
	putpixel(xc-x,yc+y,7);
	putpixel(xc-x,yc-y,7);
	putpixel(xc-y,yc-x,7);
	putpixel(xc+y,yc-x,7);
	putpixel(xc+x,yc-y,7);
}