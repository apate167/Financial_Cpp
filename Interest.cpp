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

