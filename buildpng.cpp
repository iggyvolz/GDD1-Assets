#include <png++/png.hpp>
#include "buildpng.h"
#include<cmath>
#include <ft2build.h>
#include<iostream>
using namespace std;
#include FT_FREETYPE_H
bool about(double a, double b, double delta)
{
    if(a>b)
    {
        return (a-b)<delta;
    }
    return (b-a)<delta;
}


void red(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(255,0,0);
        }
    }
}

void green(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(0,255,0);
        }
    }
}

void blue(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(0,0,255);
        }
    }
}

void yellow(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(255,255,0);
        }
    }
}

// Draw moneybag on image
void moneybag(Image& image, png::uint_32 startX, png::uint_32 startY)
{

    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE; x++)
        {
            // Circle
            if((x-28)*(x-28)+(y-28)*(y-28)<=15*15-5)
            {
                markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(219, 138, 67);
            }
            // Lines
            else if(about(y,5,1) && x>=17 && x<=39)
            {
                markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(0,0,0);
            }
            else if(y>=5&&y<=28 && about(x,(y+12), 1))
            {
                markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(0,0,0);
            }
            else if(y>=5 && y<=28 && about(x,TILE_SIZE-(y+12), 1))
            {
                markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(0,0,0);
            }
            else if(y>=5 && y<=28 && x>=(y+12) && x<=(44-y))
            {
                markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(219, 138, 67);
            }
            // Border
            else if((x-28)*(x-28)+(y-28)*(y-28)<=16*16-5)
            {
                markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(0,0,0);
            }
        }
    }
}
void lightblue_piece(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE*2; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX]=png::rgb_pixel(135,206,250);
        }
    }
}

void yellow_piece(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=TILE_SIZE*2; y < TILE_SIZE*3; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE*5; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX]=png::rgb_pixel(255,255,0);
        }
    }
    for(png::uint_32 y=0; y < TILE_SIZE*5; y++)
    {
        for (png::uint_32 x = TILE_SIZE*2; x < TILE_SIZE*3; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX]=png::rgb_pixel(255,255,0);
        }
    }
}

void green_piece(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0;y<TILE_SIZE*3;y++)
    {
        for(png::uint_32 x=0;x<TILE_SIZE;x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX]=png::rgb_pixel(0,255,0);
        }
    }
}

void orange_piece(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(255,165,0);
        }
    }
}

void purple_piece(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < TILE_SIZE*2; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(128,0,128);
        }
    }
    for(png::uint_32 y=0; y<TILE_SIZE*6;y++)
    {
        for (png::uint_32 x = TILE_SIZE; x < TILE_SIZE*2; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(128,0,128);
        }        
    }
}

void door(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < 2*TILE_SIZE; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(139,69,19);
        }
    }
}

void laser(Image& image, png::uint_32 startX, png::uint_32 startY)
{
    for(png::uint_32 y=0; y < TILE_SIZE; y++)
    {
        for (png::uint_32 x = 0; x < 3*TILE_SIZE; x++)
        {
            markXY(x+startX,y+startY);image[y+startY][x+startX] = png::rgb_pixel(255,0,0);
        }
    }
}

template<typename T>
T square(T val)
{
    return val*val;
}
png::uint_32 maxX=0;
png::uint_32 maxY=0;
void markXY(png::uint_32 x, png::uint_32 y)
{
    if(x>maxX) maxX=x;
    if(y>maxY) maxY=y;
}

void printMax()
{
    cout << "x: " << maxX << ", y: " << maxY << endl;
}

void reverse(Image& source, Image& dest)
{
    for(png::uint_32 y=0; y < source.get_height(); y++)
    {
        for (png::uint_32 x = 0; x < source.get_width(); x++)
        {
            dest[y][source.get_width()-x-1] = source[y][x];
        }
    }
}