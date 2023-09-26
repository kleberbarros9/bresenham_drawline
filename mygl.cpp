#include "definitions.h"
#include <iostream>
#include <cmath>
#include <stdio.h>


using namespace std;

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
//*************************************************************************
// Chame aqui as funções do mygl.h
//*************************************************************************
	int x_max = IMAGE_WIDTH;
	int y_max = IMAGE_HEIGHT;
	int x_meio = (int)(IMAGE_WIDTH / 2);
	int y_meio = (int)(IMAGE_WIDTH / 2);

	PutPixel(100, 200, 255, 255, 255);

	DrawLine(0, 0, x_max, y_max, 0, 255, 255);
	DrawLine(0, x_meio, y_max, x_meio, 255, 0, 0);	
	DrawLine(0, x_max, y_max, 0, 255, 125, 255);
	DrawLine(x_meio, 0, x_meio, y_max, 255, 255, 0);
	DrawLine(100, 150, 400, 300, 125, 125, 255);	

	DrawTriangle(200, 100, 100, 300, 450, 500, 0, 0, 255);

}



