#include<stdio.h>
#include<math.h>

typedef struct
{
	float x, y;
}Punkt;

void main() {
	Punkt punktA = { 1.11,1.32 };
	Punkt punktB = { 4.51,5.79 };
	Punkt* punktB_zeiger = &punktB;

	printf("Punkt A Koordinaten: (%.2f,%.2f)\n", punktA.x, punktA.y);
	printf("Punkt B Koordinaten: (%.2f,%.2f)\n\n",punktB_zeiger->x,punktB_zeiger->y);

	printf("Punkt M Koordinaten: (%.2f/%.2f)\n",(punktA.x+punktB_zeiger->x)/2,(punktA.y+punktB_zeiger->y)/2);
	printf("Abstand der Punkt A und B: %.2f\n", pow(pow(punktA.x - punktB_zeiger->x, 2) + pow(punktA.y - punktB_zeiger->y, 2), 0.5));
}