# include <stdio.h>
# include <graphics.h>

int main(){
	int dx,dy,x,y,p,x1,y1,x2,y2;
	int gd,gm;

	printf("Enter the value of x1 : ");
	scanf("%d",&x1);
	printf("Enter the value of y1 : ");
	scanf("%d",&y1);
	printf("Enter the value of x2 : ");
	scanf("%d",&x2);
	printf("Enter the value of y1 : ");
	scanf("%d",&y2);

	dx = x2 - x1;
	dy = y2 - y1;

	p = 2 * dy - dx;

	x = x1;
	y = y1;

	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	putpixel(x,y,3);

	while(x <= x2){
		if(p < 0){
			x=x+1;
			y=y;
			p = p + 2 * (dy);
		}
		else{
			x=x+1;
			y=y+1;
			p = p + 2 * (dy - dx);
		}
		putpixel(x,y,3);
		delay(50);
	}

	getch();
	closegraph();

}