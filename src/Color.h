#ifndef COLOR_H__
#define COLOR_H__

#include <stdint.h>

struct Color {
	uint8_t r;	
	uint8_t g;
	uint8_t b;
	uint8_t a;

	Color() : r(0), g(0), b(0), a(0) {}
};

#endif /* end of include guard: COLOR_H__ */