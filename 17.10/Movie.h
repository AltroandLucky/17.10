#pragma once
class Movie
{  
	char* name;
	double time;
	int year;
	char* director; // �������
	char* genre; // ����
	char* date; // ����
public:
	Movie();// constructor by def.
	Movie(const char* n, double t, int y, const char* d, const char* g, const char* dt); // constructor by params
	Movie(const Movie & obj); // copy constructor
	~Movie(); // dectructor
	void Print();
};