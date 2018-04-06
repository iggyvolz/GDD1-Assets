#include <png++/png.hpp>
typedef png::image<png::rgb_pixel> Image;
void red(Image& image, png::uint_32 startX, png::uint_32 startY);
void green(Image& image, png::uint_32 startX, png::uint_32 startY);
void blue(Image& image, png::uint_32 startX, png::uint_32 startY);
void yellow(Image& image, png::uint_32 startX, png::uint_32 startY);
void lightblue_piece(Image& image, png::uint_32 startX, png::uint_32 startY);
void yellow_piece(Image& image, png::uint_32 startX, png::uint_32 startY);
void green_piece(Image& image, png::uint_32 startX, png::uint_32 startY);
void orange_piece(Image& image, png::uint_32 startX, png::uint_32 startY);
void purple_piece(Image& image, png::uint_32 startX, png::uint_32 startY);
void moneybag(Image& image, png::uint_32 startX, png::uint_32 startY);
void door(Image& image, png::uint_32 startX, png::uint_32 startY);
void laser(Image& image, png::uint_32 startX, png::uint_32 startY);
void markXY(png::uint_32 x, png::uint_32 y);
void reverse(Image& source, Image& dest);
void printMax();
bool about(double a, double b, double delta);
#define TILE_SIZE 56
#define BORDER_SIZE 6
#define TILE_WITH_BORDER (TILE_SIZE+BORDER_SIZE)