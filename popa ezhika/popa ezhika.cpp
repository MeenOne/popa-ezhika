﻿//---/\---/\-------Это ASCII KOT!--//		
//  {  '-'  }                      //
//  {  0 0  }     Добавь его себе  //
//  --> V <--  в исходник, и тебе  //
//   \ \|/ /      будет, наверно,  //
//    \___/  приятно отлаживаться  //
//---------------долгими ночами:)--//
#include <D:/TX/TXLib.h>
#include <stdio.h>
#include <math.h>
void ottyag();
void vozvrat_rezinki();
void polet_shara();
void test_new_rubberband();
void mish();
void ground();
void wall(int x, int y);
void rogatka_1(int x, int y);
void rogatka_2(int x, int y);
void shar(int x, int y, int t);
void shar2(int x, int y, int t); 
void shar3(int z, int l, int t);
void lunka(int z,  int t);
void oblaka(int x, int y); 
void rubber_band(int x, int y, int t);
void rubber_band2(int x, int y, int t);
void rubber_band3(int x, int y, int t);
void rb2(int x, int y, int t);
void rb22(int x, int y, int t);
void rb23(int x, int y, int t);
void test_rubber_band();
void line_for_rogatka(int x, int y);

int main()
{
	txCreateWindow(1100, 500);

	//test_new_rubberband();
	
	ottyag();

	vozvrat_rezinki();

	polet_shara();


	txDisableAutoPause();

	return 0;
}

void ground()
{
	txSetColor(TX_GREEN);
	txSetFillColor(TX_LIGHTBLUE);
	txRectangle(0, 0, 1100, 250);
	txSetFillColor(TX_GREEN);
	txRectangle(0, 250, 1100, 500);

}


void wall(int x, int y)
{
	txSetColor(TX_BLACK);
	txSetFillColour(RGB(160, 54, 35));
	txRectangle(x + 50, y + 450, x + 130, y + 250);
	POINT up[4]{ {x + 50, y + 250}, {x + 130, y + 250,}, {x + 230, y + 180}, {x + 150, y + 180} };
	txPolygon(up, 4);
	POINT left[4]{ {x + 130, y + 450}, {x + 130, y + 250}, {x + 230, y + 180}, {x + 230, y + 380} };
	txPolygon(left, 4);
}


void rubber_band(int x, int y, int t)
{
	txSetColor(TX_BLACK, 7);
	txArc(x + 45 - 2.5 * t, y + 105, x + 245 + 2.5 * t, y + 135, 45, 135);
}

void rubber_band2(int x, int y, int t)
{
	txSetColor(TX_BLACK, 7);
	txArc(x + 45 + 2.5 * t, y + 105, x + 245 - 2.5 * t, y + 135, 45, 135);
}

void rubber_band3(int x, int y, int t)
{
	txSetColor(TX_BLACK, 7);
	txArc(x +110 + 0.000001 * t, y + 105, x + 180 - 0.00001 * t, y + 135, 45, 135);
}

void rogatka_1(int x, int y)
{
	txSetColor(TX_BLACK);
	txSetFillColor(TX_BROWN);
	POINT rog[6]{ {x + 130, y + 220}, {x + 140, y + 220}, {x + 140, y + 160}, {x + 130, y + 90}, {x + 115, y + 90}, {x + 130, y + 160} };
	txPolygon(rog, 6);
}


void rogatka_2(int x, int y)
{
	txSetColor(TX_BLACK);
	txSetFillColor(TX_BROWN);
	POINT rog[6]{ {x + 140, y + 220}, {x + 150, y + 220}, {x + 150,y + 160}, {x + 170,y + 100 }, {x + 160, y + 100}, {x + 140, y + 160} };
	txPolygon(rog, 6);
}


void line_for_rogatka(int x, int y)
{
	txSetColor(TX_BROWN);
	txLine(x + 140, y + 219, x + 140, y + 160);
	txSetColor(TX_BLACK);
}


void shar(int x, int y, int t)
{
	txSetFillColor(TX_YELLOW);
	txCircle(x + 75 - 2.5 * t, y + 120, 20);
}

void shar2(int x, int y, int t)
{
	txSetColor(TX_BLACK);
	txSetFillColor(TX_YELLOW);
	txCircle(x + 75 + 2.5 * t, y + 120, 20);
}

void shar3(int z, int l, int p, int m, int t)
{
	printf("%d %d %d %d %d\n", p, m, z, l, t);
	txSetColor(TX_BLACK);
	txSetFillColor(TX_YELLOW);
	txCircle(z + 70 + p * t, l + 120 + m * t, 20);
	

}

void lunka(int z,  int t)
{
	txSetFillColor(TX_BLACK);
	txEllipse(z + 70 + t,  420, z + 70 + t, 435);
}

void oblaka(int x, int y)
{
	txSetFillColor(TX_WHITE);
	txEllipse(x + 100, y + 50, x + 140, y + 70);
	txEllipse(x + 160, y + 80, x + 200, y + 90);
	txEllipse(x + 210, y + 68, x + 260, y + 78);
	txEllipse(x + 280, y + 70, x + 330, y + 80);
	txEllipse(x + 360, y + 50, x + 400, y + 59);
	txEllipse(x + 420, y + 70, x + 460, y + 80);
	txEllipse(x + 490, y + 68, x + 520, y + 78);

}

void rb2(int x, int y, int t)
{
	txSetColor(TX_BLACK, 7);
	txArc(x + 45 - 2.5 * t, y + 105, x + 245 + 2.5 * t, y + 135, -180, 35);
}

void rb22(int x, int y, int t)
{
	txSetColor(TX_BLACK, 7);
	txArc(x + 45 + 2.5 * t, y + 105, x + 245 - 2.5 * t, y + 135, -180, 35);
}

void rb23(int x, int y, int t)
{
	 
	txSetColor(TX_BLACK, 7);
	txArc(x + 110 + 1 * t*0, y + 105, x + 180 - 1 * t *0, y + 135, -180, 35);
}


void test_rubber_band()
{
	txSetColor(TX_BLACK, 7);
	txArc(85, 105, 245, 135, 45, 135);
}

void mish()
{
	RECT area = { 100, 100, 200, 200};

	while (txMouseButtons() != 1)
	{
		if (In(txMousePos(), area)) txTextOut(100, 100, "http://vk.com/TiShtoTamDelaesh?!");
		txSleep(0);
	}
}
void ottyag()
{
		int x = 0;
		int y = 0;
		int t = 0;

		while (t < 18)
		{


			ground();


			wall(x, y);


			rubber_band(x, y, t);


			rogatka_2(x, y);
			
			
			shar(x, y, t);


			rogatka_1(x, y);
			

			line_for_rogatka(x, y);


			//oblaka(x, y);


			rb2(x, y, t);

			t++;


			txSleep(100);

		}

}


void vozvrat_rezinki()
{

	int t = -18;
	int x = 0;
	int y = 0;

	while (t < 30)
	{


		ground();


		wall(x, y);


		rubber_band2(x, y, t);


		rogatka_2(x, y);


		shar2(x, y, t);


		rogatka_1(x, y);


		line_for_rogatka(x, y);


		//oblaka(x, y);

		
		rb22(x, y, t);

		t++;


		txSleep(50);

	}
}

void polet_shara()
{
	int t = 29;
	int x = 0;
	int y = 0;
	int z = 0; 
	int l = 0;
	while (t < 136)
	{

		float m = (0.004 * (t*t)/4 ) / 0.2;
		float p = 0.3 * (t/4);

		ground();


		wall(x, y);


		rubber_band3(x, y, t);


		rogatka_2(x, y);


		if (m < 36 )
		{
			shar3(z, l, t, m, p);
		}
		else
		{
			lunka(z, t);
		}


		rogatka_1(x, y);


		line_for_rogatka(x, y);


		//oblaka(x, y);


		rb23(x, y, t);

		t++;
		z++;
		l++;

		txSleep(20);

	}
}

void test_new_rubberband()
{
	mish();

		
}
