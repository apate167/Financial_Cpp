
#pragma once
#include <iostream>

class InterestCalc {
public: 
	InterestCalc(double r);
	InterestCalc(const InterestCalc& o);
	InterestCalc &operator=(const InterestCalc& o);
	~InterestCalc();
	double OnePeriod(double r);
private:
	double rate;
};

inline double InterestCalc::OnePeriod(double r) {
	double f = r * (1 + this->rate);
	return f;
}

class CompoundRtCalc {
public:
	CompoundRtCalc(double r);
	CompoundRtCalc(const CompoundRtCalc&);
	CompoundRtCalc& operator=(const CompoundRtCalc&);
	~CompoundRtCalc();

	double multiPeriod(double val, int period);
	double contCompound(double val, int period);

private:
	double rate;
};