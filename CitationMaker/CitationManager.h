#pragma once
#include <iostream>
#include <fstream>

class CitationDatabase;
struct Citation;

class CitationManager{
private:
	CitationDatabase *Database;
public:
	CitationManager();
	~CitationManager();

	void AddCitation(Citation c);
	void RemoveCitation();
	void ExportCitations();

	void PrintList();
};

