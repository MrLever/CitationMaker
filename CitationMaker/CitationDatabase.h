#pragma once
#include <vector>

struct Citation;

class CitationDatabase{
public:
	std::vector<Citation> Citations;
	
	CitationDatabase();
	~CitationDatabase();

	Citation GetCitation(int index);
	void PrintCitations();
};

