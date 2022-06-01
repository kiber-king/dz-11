#include "dz 11.h"
float Romb::Pl(float d1, float d2) {
	return (d1 * d2) / 2;
}
float Romb::Perim(float a, float b) {
	return (a + b) * 2;
}
float Rect::Pl(float a, float b) {
	return a * b;
}
float Rect::Perim(float a, float b) {
	return (a + b) * 2;
}
float Rect::get_a() {
	return a;
}
float Rect::get_b() {
	return b;
}

