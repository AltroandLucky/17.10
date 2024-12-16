#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
	

    Movie* arrptr[2]{ new Movie("Avatar", 2.10, 2009, "James Cameron", "Sci-Fi", "18.12.2009"), new Movie("Bad boys", 2.40, 1998, "Michael Bay", "Action", "07.04.1998") };

	for (int i = 0; i < 2; i++)
	{
		arrptr[i]-> Print();
	}
	for (int i = 0; i < 2; i++)
	{
		delete arrptr[i];
	}
}

