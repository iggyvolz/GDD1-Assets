#include <iostream>
#include "buildpng.h"
using namespace std;
#include <fstream>
#define NUDGE_X 20
#define NUDGE_Y 20
void make_normal();
void make_reverse();
int main(int argc, char *argv[])
{
    make_normal();
    make_reverse();
    return 0;
}

void make_normal()
{

    Image r(792,612);
    for(png::uint_32 x=0;x<4*TILE_WITH_BORDER;x+=TILE_WITH_BORDER)
    {
        red(r,NUDGE_X+x, NUDGE_Y+0);
        green(r,NUDGE_X+x, NUDGE_Y+1*TILE_WITH_BORDER);
        blue(r,NUDGE_X+x, NUDGE_Y+2*TILE_WITH_BORDER);
        yellow(r,NUDGE_X+x, NUDGE_Y+3*TILE_WITH_BORDER);
        moneybag(r,NUDGE_X+x, NUDGE_Y+0);
        moneybag(r,NUDGE_X+x, NUDGE_Y+1*TILE_WITH_BORDER);
        moneybag(r,NUDGE_X+x, NUDGE_Y+2*TILE_WITH_BORDER);
        moneybag(r,NUDGE_X+x, NUDGE_Y+3*TILE_WITH_BORDER);
    }
    lightblue_piece(r,NUDGE_X+BORDER_SIZE, NUDGE_Y+4*TILE_WITH_BORDER);
    lightblue_piece(r,NUDGE_X+BORDER_SIZE, NUDGE_Y+5*TILE_WITH_BORDER);
    yellow_piece(r,NUDGE_X+2*BORDER_SIZE, NUDGE_Y+4*TILE_WITH_BORDER+2*BORDER_SIZE);
    lightblue_piece(r,NUDGE_X+3*TILE_WITH_BORDER, NUDGE_Y+4*TILE_WITH_BORDER);
    lightblue_piece(r,NUDGE_X+3*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    green_piece(r,NUDGE_X+4*TILE_WITH_BORDER, NUDGE_Y+0);
    green_piece(r,NUDGE_X+5*TILE_WITH_BORDER, NUDGE_Y+0);
    green_piece(r,NUDGE_X+9*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    green_piece(r,NUDGE_X+10*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    purple_piece(r,NUDGE_X+4*TILE_WITH_BORDER, NUDGE_Y+3*TILE_WITH_BORDER);
    yellow_piece(r,NUDGE_X+6*TILE_WITH_BORDER+2*BORDER_SIZE, NUDGE_Y+2*BORDER_SIZE);
    orange_piece(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+1*TILE_WITH_BORDER);
    orange_piece(r,NUDGE_X+7*TILE_WITH_BORDER, NUDGE_Y+1*TILE_WITH_BORDER);
    purple_piece(r,NUDGE_X+10*TILE_WITH_BORDER+BORDER_SIZE, NUDGE_Y+0);
    door(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+3*TILE_WITH_BORDER);
    door(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+4*TILE_WITH_BORDER);
    door(r,NUDGE_X+9*TILE_WITH_BORDER, NUDGE_Y+3*TILE_WITH_BORDER);
    door(r,NUDGE_X+9*TILE_WITH_BORDER, NUDGE_Y+4*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+6*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+7*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+8*TILE_WITH_BORDER);
    r.write("bin/out.png");
}


void make_reverse()
{

    Image r(792,612);
    for(png::uint_32 x=0;x<4*TILE_WITH_BORDER;x+=TILE_WITH_BORDER)
    {
        red(r,NUDGE_X+x, NUDGE_Y+0);
        green(r,NUDGE_X+x, NUDGE_Y+1*TILE_WITH_BORDER);
        blue(r,NUDGE_X+x, NUDGE_Y+2*TILE_WITH_BORDER);
        yellow(r,NUDGE_X+x, NUDGE_Y+3*TILE_WITH_BORDER);
        //moneybag(r,NUDGE_X+x, NUDGE_Y+0);
        //moneybag(r,NUDGE_X+x, NUDGE_Y+1*TILE_WITH_BORDER);
        //moneybag(r,NUDGE_X+x, NUDGE_Y+2*TILE_WITH_BORDER);
        //moneybag(r,NUDGE_X+x, NUDGE_Y+3*TILE_WITH_BORDER);
    }
    lightblue_piece(r,NUDGE_X+BORDER_SIZE, NUDGE_Y+4*TILE_WITH_BORDER);
    lightblue_piece(r,NUDGE_X+BORDER_SIZE, NUDGE_Y+5*TILE_WITH_BORDER);
    yellow_piece(r,NUDGE_X+2*BORDER_SIZE, NUDGE_Y+4*TILE_WITH_BORDER+2*BORDER_SIZE);
    lightblue_piece(r,NUDGE_X+3*TILE_WITH_BORDER, NUDGE_Y+4*TILE_WITH_BORDER);
    lightblue_piece(r,NUDGE_X+3*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    green_piece(r,NUDGE_X+4*TILE_WITH_BORDER, NUDGE_Y+0);
    green_piece(r,NUDGE_X+5*TILE_WITH_BORDER, NUDGE_Y+0);
    green_piece(r,NUDGE_X+9*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    green_piece(r,NUDGE_X+10*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    purple_piece(r,NUDGE_X+4*TILE_WITH_BORDER, NUDGE_Y+3*TILE_WITH_BORDER);
    yellow_piece(r,NUDGE_X+6*TILE_WITH_BORDER+2*BORDER_SIZE, NUDGE_Y+2*BORDER_SIZE);
    orange_piece(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+1*TILE_WITH_BORDER);
    orange_piece(r,NUDGE_X+7*TILE_WITH_BORDER, NUDGE_Y+1*TILE_WITH_BORDER);
    purple_piece(r,NUDGE_X+10*TILE_WITH_BORDER+BORDER_SIZE, NUDGE_Y+0);
    door(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+3*TILE_WITH_BORDER);
    door(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+4*TILE_WITH_BORDER);
    door(r,NUDGE_X+9*TILE_WITH_BORDER, NUDGE_Y+3*TILE_WITH_BORDER);
    door(r,NUDGE_X+9*TILE_WITH_BORDER, NUDGE_Y+4*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+5*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+6*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+7*TILE_WITH_BORDER);
    laser(r,NUDGE_X+6*TILE_WITH_BORDER, NUDGE_Y+8*TILE_WITH_BORDER);
    Image rev(792,612);
    reverse(r,rev);
    rev.write("bin/rev.png");
}