#include "pch.h"

#include <iostream>

#include "CitationDatabase.h"
#include "Citation.h"

CitationDatabase::CitationDatabase(){
}


CitationDatabase::~CitationDatabase(){
}

Citation CitationDatabase::GetCitation(int index) {
	return Citations.at(index);
}

void CitationDatabase::PrintCitations() {
	for (auto x : Citations) {
		std::cout << x;
	}
}
