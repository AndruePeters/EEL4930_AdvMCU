// score.c
// Jonathan Valvano 
// draws score on bottom of screen
// May 1, 2016

#include <stdint.h>
#include "../inc/BSP.h"
// 5 wide, 6 tall images, 
// d0.bmp,d1.bmp,d2.bmp,d3.bmp,d4.bmp,d5.bmp,d6.bmp,d7.bmp,d8.bmp,d9.bmp
const unsigned short SmallFontVertical[10][30] = {
{ 
 0x0000, 0x056C, 0x079F, 0x057F, 0x0000, 0x0300, 0x067F, 0x0007, 0x0672, 0x0316, 0x0300, 0x057F, 0x0000, 0x0447, 0x0316, 0x0300,
 0x057F, 0x0000, 0x0447, 0x0316, 0x0300, 0x067F, 0x0007, 0x0672, 0x0316, 0x0000, 0x056C, 0x079F, 0x057F, 0x0000},
{
 0x0447, 0x079F, 0x079F, 0x079F, 0x045B, 0x0000, 0x0000, 0x0796, 0x000C, 0x0000, 0x0000, 0x0000, 0x0796, 0x000C, 0x0000, 0x0000,
 0x0000, 0x0796, 0x000C, 0x0000, 0x0000, 0x0000, 0x0796, 0x000C, 0x0000, 0x0300, 0x079F, 0x079F, 0x000C, 0x0000},
{
 0x056C, 0x079F, 0x079F, 0x079F, 0x0316, 0x0000, 0x0672, 0x045B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0447, 0x0316, 0x0000, 0x0000,
 0x0000, 0x0000, 0x056C, 0x01B2, 0x0300, 0x057F, 0x0000, 0x0672, 0x0316, 0x0000, 0x0672, 0x079F, 0x067F, 0x0007},
{
 0x0300, 0x079F, 0x079F, 0x079F, 0x000C, 0x0000, 0x0000, 0x0000, 0x0447, 0x045B, 0x0000, 0x0000, 0x0000, 0x056C, 0x0316, 0x0000,
 0x01A0, 0x079B, 0x067F, 0x0007, 0x0000, 0x0000, 0x0000, 0x056C, 0x0316, 0x0000, 0x0796, 0x079F, 0x079F, 0x000C},
{
 0x0000, 0x01A0, 0x079B, 0x079F, 0x045B, 0x0000, 0x0000, 0x01A0, 0x067B, 0x0007, 0x0447, 0x079F, 0x079F, 0x079F, 0x045B, 0x01A0,
 0x079B, 0x0312, 0x067B, 0x0007, 0x0000, 0x0447, 0x057B, 0x067B, 0x0007, 0x0000, 0x0000, 0x0672, 0x067F, 0x0007},
{
 0x0300, 0x079F, 0x079F, 0x079F, 0x000C, 0x0000, 0x0000, 0x0000, 0x0447, 0x045B, 0x0000, 0x0000, 0x0000, 0x0447, 0x045B, 0x0000,
 0x0796, 0x079F, 0x079F, 0x000C, 0x0000, 0x0676, 0x0007, 0x0000, 0x0000, 0x0000, 0x0796, 0x079F, 0x079F, 0x01B2},
{
 0x0000, 0x0447, 0x079F, 0x079F, 0x000C, 0x0000, 0x0796, 0x000C, 0x0447, 0x045B, 0x01A0, 0x079B, 0x01B2, 0x0447, 0x045B, 0x01A0,
 0x067B, 0x0676, 0x079F, 0x000C, 0x0000, 0x0672, 0x045B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0672, 0x079F, 0x045B},
{
 0x0000, 0x0000, 0x0672, 0x01B2, 0x0000, 0x0000, 0x0000, 0x056C, 0x0316, 0x0000, 0x0000, 0x0000, 0x0300, 0x057F, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0676, 0x0007, 0x0300, 0x057F, 0x0000, 0x056C, 0x01B2, 0x0300, 0x079F, 0x079F, 0x079F, 0x01B2},
{
 0x0000, 0x0672, 0x079F, 0x067F, 0x0007, 0x0300, 0x057F, 0x0000, 0x056C, 0x0316, 0x0300, 0x067F, 0x0007, 0x056C, 0x0316, 0x0000,
 0x056C, 0x079F, 0x057F, 0x0000, 0x0300, 0x057F, 0x0000, 0x0447, 0x0316, 0x0000, 0x0672, 0x079F, 0x079F, 0x000C},
{
 0x01A0, 0x079B, 0x079F, 0x0316, 0x0000, 0x0000, 0x0000, 0x01A0, 0x079B, 0x01B2, 0x0000, 0x056C, 0x079F, 0x067B, 0x045B, 0x01A0,
 0x067B, 0x0007, 0x056C, 0x045B, 0x01A0, 0x067B, 0x0007, 0x056C, 0x0316, 0x0000, 0x056C, 0x079F, 0x067F, 0x0007}
};
const unsigned short dblank[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};
// 6 wide, 5 tall images
// e0.bmp,e1.bmp,e2.bmp,e3.bmp,e4.bmp,e5.bmp,e6.bmp,e7.bmp,e8.bmp,e9.bmp
const unsigned short SmallFontHorizontal[10][30] = {
{ //0
 0x0000, 0x0316, 0x0316, 0x0316, 0x0316, 0x0000, 0x057F, 0x079F, 0x0E5F, 0x0E5F, 0x079F, 0x057F, 0x079F, 0x0007, 0x0000, 0x0000,
 0x0007, 0x079F, 0x056C, 0x067F, 0x057F, 0x057F, 0x067F, 0x056C, 0x0000, 0x0300, 0x0300, 0x0300, 0x0300, 0x0000
},
{ //1
 0x045B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x079F, 0x000C, 0x000C, 0x000C, 0x000C, 0x000C, 0x079F, 0x0796, 0x0796, 0x0796,
 0x0796, 0x079F, 0x079F, 0x0000, 0x0000, 0x0000, 0x0000, 0x079F, 0x0447, 0x0000, 0x0000, 0x0000, 0x0000, 0x0300 },
{ //2
 0x0316, 0x0000, 0x0000, 0x01B2, 0x0316, 0x0007, 0x079F, 0x0000, 0x0316, 0x056C, 0x0672, 0x067F, 0x079F, 0x045B, 0x0447, 0x0000,
 0x0000, 0x079F, 0x079F, 0x0672, 0x0000, 0x0000, 0x057F, 0x0672, 0x056C, 0x0000, 0x0000, 0x0000, 0x0300, 0x0000 },
{ //3
 0x000C, 0x045B, 0x0316, 0x0007, 0x0316, 0x000C, 0x079F, 0x0447, 0x056C, 0x067F, 0x056C, 0x079F, 0x079F, 0x0000, 0x0000, 0x079B,
 0x0000, 0x079F, 0x079F, 0x0000, 0x0000, 0x01A0, 0x0000, 0x0796, 0x0300, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
{ //4
 0x045B, 0x0007, 0x045B, 0x0007, 0x0007, 0x0007, 0x079F, 0x067B, 0x079F, 0x067B, 0x067B, 0x067F, 0x079B, 0x01A0, 0x079F, 0x0312,
 0x057B, 0x0672, 0x01A0, 0x0000, 0x079F, 0x079B, 0x0447, 0x0000, 0x0000, 0x0000, 0x0447, 0x01A0, 0x0000, 0x0000},
{ //5
 0x000C, 0x045B, 0x045B, 0x000C, 0x0000, 0x01B2, 0x079F, 0x0447, 0x0447, 0x079F, 0x0000, 0x079F, 0x079F, 0x0000, 0x0000, 0x079F,
 0x0007, 0x079F, 0x079F, 0x0000, 0x0000, 0x0796, 0x0676, 0x0796, 0x0300, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 },
{ //6
 0x000C, 0x045B, 0x045B, 0x000C, 0x0000, 0x045B, 0x079F, 0x0447, 0x0447, 0x079F, 0x0000, 0x079F, 0x079F, 0x000C, 0x01B2, 0x0676,
 0x045B, 0x0672, 0x0447, 0x0796, 0x079B, 0x067B, 0x0672, 0x0000, 0x0000, 0x0000, 0x01A0, 0x01A0, 0x0000, 0x0000 },
{ //7
 0x0000, 0x0000, 0x0000, 0x0007, 0x01B2, 0x01B2, 0x01B2, 0x0316, 0x057F, 0x0676, 0x056C, 0x079F, 0x0672, 0x056C, 0x0300, 0x0000,
 0x0000, 0x079F, 0x0000, 0x0000, 0x0000, 0x0000, 0x057F, 0x079F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0300, 0x0300 },
{ //8
 0x0007, 0x0316, 0x0316, 0x0000, 0x0316, 0x000C, 0x067F, 0x056C, 0x056C, 0x057F, 0x0447, 0x079F, 0x079F, 0x0000, 0x0007, 0x079F,
 0x0000, 0x079F, 0x0672, 0x057F, 0x067F, 0x056C, 0x057F, 0x0672, 0x0000, 0x0300, 0x0300, 0x0000, 0x0300, 0x0000 },
{ //9
 0x0000, 0x01B2, 0x045B, 0x045B, 0x0316, 0x0007, 0x0316, 0x079B, 0x067B, 0x056C, 0x056C, 0x067F, 0x079F, 0x01A0, 0x079F, 0x0007,
 0x0007, 0x079F, 0x079B, 0x0000, 0x056C, 0x067B, 0x067B, 0x056C, 0x01A0, 0x0000, 0x0000, 0x01A0, 0x01A0, 0x0000 }
};
const unsigned short eblank[] = {
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,

};
// digit 1 108-112
// digit 2 113-117
// digit 3 118-122
// digit 4 123-127
// **********Score_OutVertical*******************
// draw score on screen vertically as 4-digit number
// font is 5 wide-6 high Courier bold yellow on black
// Input: n is between 0 and 9999
//        x     horizontal position of the bottom left corner of the image, columns from the left edge
//        y     vertical position of the bottom left corner of the image, rows from the top edge
// Output: none
void Score_OutVertical(uint32_t n, int16_t x, int16_t y){
  uint32_t d1,d2,d3,d4; int notZero=0;
  if(n>9999)n=9999;
  d1 = n/1000; n = n%1000;
  d2 = n/100;  n = n%100;
  d3 = n/10;  
  d4 = n%10;
  if(d1){  // 1000 to 9999
    BSP_LCD_DrawBitmap(x,y,&SmallFontVertical[d1][0],5,6);
    notZero = 1;
  } else {
    BSP_LCD_DrawBitmap(x,y,dblank,5,6);
  }
  if(d2||notZero){  
    BSP_LCD_DrawBitmap(x+5,y,&SmallFontVertical[d2][0],5,6);
    notZero = 1;
  } else {
    BSP_LCD_DrawBitmap(x+5,y,dblank,5,6);
  }  
  if(d3||notZero){  
    BSP_LCD_DrawBitmap(x+10,y,&SmallFontVertical[d3][0],5,6);
    notZero = 1;
  } else {
    BSP_LCD_DrawBitmap(x+10,y,dblank,5,6);
  }  
  BSP_LCD_DrawBitmap(x+15,y,&SmallFontVertical[d4][0],5,6);
}

// **********Score_OutHorizontal*******************
// draw score on screen horizontally as 4-digit number
// font is 6 wide-5 high Courier bold yellow on black
// Input: n is between 0 and 9999
//        x     horizontal position of the bottom left corner of the image, columns from the left edge
//        y     vertical position of the bottom left corner of the image, rows from the top edge
// Output: none
void Score_OutHorizontal(uint32_t n, int16_t x, int16_t y){
  uint32_t d1,d2,d3,d4; int notZero=0;
  if(n>9999)n=9999;
  d1 = n/1000; n = n%1000;
  d2 = n/100;  n = n%100;
  d3 = n/10;  
  d4 = n%10;
  if(d1){  // 1000 to 9999
    BSP_LCD_DrawBitmap(x,y,&SmallFontHorizontal[d1][0],6,5);
    notZero = 1;
  } else {
    BSP_LCD_DrawBitmap(x,y,eblank,6,5);
  }
  if(d2||notZero){  
    BSP_LCD_DrawBitmap(x,y+5,&SmallFontHorizontal[d2][0],6,5);
    notZero = 1;
  } else {
    BSP_LCD_DrawBitmap(x,y+5,eblank,6,5);
  }  
  if(d3||notZero){  
    BSP_LCD_DrawBitmap(x,y+10,&SmallFontHorizontal[d3][0],6,5);
    notZero = 1;
  } else {
    BSP_LCD_DrawBitmap(x,y+10,eblank,6,5);
  }  
  BSP_LCD_DrawBitmap(x,y+15,&SmallFontHorizontal[d4][0],6,5);
}
