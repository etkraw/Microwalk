#pragma once
/*
Contains helper functions.
*/

/* INCLUDES */
#include <string>
#include <algorithm>
#include <cctype>


/* FUNCTIONS */

unsigned char makeLower(unsigned char c) { return std::tolower(c); }

// Converts the given string into its lower case representation.
void tolower(std::string &str)
{
	//std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) -> unsigned char { return std::tolower(c); });
	std::transform(str.begin(), str.end(), str.begin(), makeLower);
}
