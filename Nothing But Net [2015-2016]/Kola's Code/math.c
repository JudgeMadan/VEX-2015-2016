/*
 math.c
 Maths stuffs
*/

//// headers
bool isWithin(float value, float expects, float range);
float filter(float value, float lower, float upper);

//// implementations
bool isWithin(float value, float expects, float range){
	return abs(value-expects)<abs(range); //in case negative range given
}

float filter(float value, float lower, float upper){
	if(abs(value)<lower){
		return 0;
	}
	if(abs(value)>upper){
		return upper;
	}
	return value;
}
