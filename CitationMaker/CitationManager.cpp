#include "pch.h"

#include <iostream>

#include "CitationManager.h"
#include "CitationDatabase.h"
#include "Citation.h"


CitationManager::CitationManager(){
	Database = new CitationDatabase();
}


CitationManager::~CitationManager(){
	delete Database;
}

void CitationManager::AddCitation(Citation c){
	Database->Citations.push_back(c);
}

void CitationManager::RemoveCitation(){
	for (unsigned int x = 0; x < Database->Citations.size(); x++) {
		std::cout << x << ". " << Database->GetCitation(x) << std::endl;
	}
	std::cout << "Please select an entry to remove: ";
	int index;
	std::cin >> index;
	
	auto element = Database->Citations.begin() + index;
	Database->Citations.erase(element);
}

void CitationManager::ExportCitations(){
	std::ofstream outFile;
	outFile.open("Export.txt", std::ios::out | std::ios::app);

	for (auto x : Database->Citations) {
		outFile << x;
	}

	outFile.close();
}

void CitationManager::PrintList(){
	Database->PrintCitations();
}



