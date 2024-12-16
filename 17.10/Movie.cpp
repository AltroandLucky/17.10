#include "Movie.h"
#include<iostream>
using namespace std;

Movie::Movie()
{
	name = nullptr;
	time = 0.0;
	year = 0;
	director = nullptr;
	genre = nullptr;
	date = nullptr;
}

Movie::Movie(const char* n, double t, int y, const char* d, const char* g, const char* dt)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	time = t;
	year = y;
	director = new char[strlen(d) + 1];
	strcpy_s(director, strlen(d) + 1, d);
	genre = new char[strlen(g) + 1];
	strcpy_s(genre, strlen(g) + 1, g);
	date = new char[strlen(dt) + 1];
	strcpy_s(date, strlen(dt) + 1, dt);
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name)+1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	time = obj.time;
	year = obj.year;
	director = new char[strlen(obj.director) + 1];
	strcpy_s(director, strlen(obj.director) + 1, obj.director);
	genre = new char[strlen(obj.genre) + 1];
	strcpy_s(genre, strlen(obj.genre) + 1, obj.genre);
	date = new char[strlen(obj.date) + 1];
	strcpy_s(date, strlen(obj.date) + 1, obj.date);
}

Movie::~Movie()
{
	delete[] name;
	delete[] director;
	delete[] genre;
	delete[] date;
	cout << "destructor\n";
}

void Movie::Print()
{
	cout << "Name: " << name << "\t"
		<< "Time: " << time << "\t"
		<< "Year: " << year << "\t"
		<< "Director: " << director << "\t"
		<< "Genre: " << genre << "\t"
		<< "Date: " << date << endl;
}
