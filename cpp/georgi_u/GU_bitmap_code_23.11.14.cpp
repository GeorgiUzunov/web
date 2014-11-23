#include "bitmap_image.hpp"
#include <string>

using namespace std;

void bmp_encode(const string fname, const string msg) {
	bitmap_image img("girl1.bmp");
	unsigned char r, g, b;
	int x, y, i;
	i = 0;
	img.get_pixel(0, 0, r, g, b);
	img.set_pixel(0, 0, msg.size(), g, b);
		
		for ( x = 1; i < msg.size(); x++) {
			
			for ( y = 1; i < msg.size(); y++) {
			img.get_pixel(x, y, r, g, b);
			
			r = msg[i];
			i += 1;
			img.set_pixel(x, y, r, g, b);
			}
		}
		img.save_image(fname);
}

string bmp_decode(const string fname) {
	unsigned char r, g, b;
	int x, y, i, size;
	i = 0;
	string msg = "";
	bitmap_image img(fname);
	
	img.get_pixel(0, 0, r, g, b);
	size = r;
	
		
		for ( x = 1; i < size; x++) {
			
			for ( y = 1; i < size; y++) {
			img.get_pixel(x, y, r, g, b);
			
			msg += r;
			i++;
			}
		}

	return msg;
}


int main () {
	
	bmp_encode("code_output.bmp", "Joroe super");
	cout << bmp_decode("code_output.bmp");
	
	return 0;	
}
