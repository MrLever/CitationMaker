#include "pch.h"
#include <iostream>

#include "CitationMaker.h"
#include "CitationManager.h"
#include "Citation.h"

CitationMaker maker;
CitationManager manager;


void processInput(int input);

int main() {
	int userSelection;
	do {
		std::cout << "COMMANDS" << std::endl;
		std::cout << "\t1. List Citations" << std::endl;
		std::cout << "\t2. Add Citation" << std::endl;
		std::cout << "\t3. Remove Citation" << std::endl;
		std::cout << "\t4. Export Citaitons" << std::endl;
		std::cout << "\t5. Quit" << std::endl;
		std::cout << "\nPlease Choose an option: ";
		
		std::cin >> userSelection;

		processInput(userSelection);

	} while (userSelection != 5);
}

void processInput(int input) {
	std::cout << std::endl;
	switch (input){
	case 1:
		manager.PrintList();
		break;
	case 2:
		manager.AddCitation(maker.BuildCitation());
		break;
	case 3:
		manager.RemoveCitation();
		break;
	case 4: 
		manager.ExportCitations();
		break;
	default:
		break;
	
	}

	std::cout << std::endl;
}