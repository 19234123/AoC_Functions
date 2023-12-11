#ifndef ADVENTOFCODE23_FUNCTIONS_H
#define ADVENTOFCODE23_FUNCTIONS_H
#include <string>
#include <vector>
#include <unordered_set>
#include <set>
#include <list>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>


using std::vector;
using std::list;
using std::string;
using std::cout;
using std::endl;

struct NodeStruct {
    string name;
    NodeStruct* left;
    NodeStruct* right;
};

// Generics functions
vector<string> readFile(const string& filePath);
vector<string> splitLineToString(const string& line, const char& delimiter);
vector<int> splitLineToInt(const string& line, const char& delimiter);
vector<long long> splitLineToLongLong(const string& line, const char& delimiter);
string trimWhitespace(const string& input);
string stripCharacters(const string& input, const std::unordered_set<char>& charsToRemove);
vector<long long> quickSort(vector<long long> numbers);
bool binarySearch(const vector<long long>& sortedArray, long long target);
long long greatestCommonMultiple(long long a, long long b);
long long lowestCommonMultiple(long long a, long long b);
long long lcmOfSet(const vector<long long>& numbers);
vector<int> getPositiveIntegersFromString(const string& inputString);
vector<string> extractSubstringsBetween(const string& inputString, char startChar, char endChar);

// Used for specific challenges
long long getNextSequenceValue(const vector<int>& currentSequence);
int pathLength(const string& instructions, NodeStruct* currentNode);
void setRange(const vector<string>& rangeData, std::map<long long, long long>& map);

#endif //ADVENTOFCODE23_FUNCTIONS_H