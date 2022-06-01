#pragma once
#ifndef dz 11_H
#define dz 11_H
#include<iostream>
#include <vector>
class Figur {
public:
	virtual float Pl(float, float) = 0;
	virtual float Perim(float,float) = 0;
};

class Quadro : public Figur{
protected:
	float a, b, c, d, d1,d2;
};

class Romb:public Quadro {
public:
	float Pl(float d1, float d2) override;
	float Perim(float a, float b) override;

};


class Rect : public Quadro {
	int num;
public:
	Rect(float a, float b) {
		this->a = a;
		this->b = b;
	}
	float Pl(float a, float b) override;
	float Perim(float a, float b) override;
	~Rect(){}
	float get_a();
	float get_b();
};



#endif