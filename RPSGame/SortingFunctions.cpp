#include "SortingFunctions.h"

//"inArray" returns true if a string exists in a vector.

bool SortingFunctions::inArray(const std::string& value, const std::vector<std::string>& strings)
{
    return std::find(strings.begin(), strings.end(), value) != strings.end();
}
