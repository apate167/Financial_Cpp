#include "Interest.h"

InterestCalc::InterestCalc(double r) : rate(r) {

}

InterestCalc::InterestCalc(const InterestCalc& o) : rate(o.rate) {

}

InterestCalc::~InterestCalc() {

}

InterestCalc& InterestCalc::operator=(const InterestCalc& o) {
	rate = o.rate;
	return *this;
}


CompoundRtCalc::CompoundRtCalc(double r) : rate(r) {

}

CompoundRtCalc::CompoundRtCalc(const CompoundRtCalc& o) : rate(o.rate) {

}

CompoundRtCalc::~CompoundRtCalc() {

}

CompoundRtCalc& CompoundRtCalc::operator=(const CompoundRtCalc& o) {
	rate = o.rate;
	return *this;
}

double CompoundRtCalc::multiPeriod(double val, int period) {
	double f = val * pow(1 + rate, period);
	return f;
}

double CompoundRtCalc::contCompound(double val, int period) {
	double f = val * exp(rate * period);
	return f;
}