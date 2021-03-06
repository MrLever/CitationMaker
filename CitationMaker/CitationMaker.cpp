#include "pch.h"

#include <iostream>

#include "CitationMaker.h"
#include "Citation.h"

CitationMaker::CitationMaker(){

}


CitationMaker::~CitationMaker(){
}

Citation CitationMaker::BuildCitation(){
	std::string AuthorFirst;
	std::string AuthorLast;
	std::string AuthorMiddle;
	std::string Title;
	std::string City;
	std::string Publisher;
	int Year;
	
	std::cout << "\n CITATION BUILDER:\n";
	std::getline(std::cin, AuthorFirst);
	std::cout << "Enter Author's First Name: ";
	std::getline(std::cin, AuthorFirst);
	
	std::cout << "\nEnter Author's Last Name: ";
	std::getline(std::cin, AuthorLast);
	
	std::cout << "\nEnter Author's Middle Name: ";
	std::getline(std::cin, AuthorMiddle);
	
	std::cout << "\nEnter Book Title: ";
	std::getline(std::cin, Title);
	
	std::cout << "\nEnter City Name: ";
	std::getline(std::cin, City);
	
	std::cout << "\nEnter Publisher: ";
	std::getline(std::cin, Publisher);
	
	std::cout << "\nEnter Year: ";
	std::cin >> Year;

	return Citation(AuthorFirst, AuthorLast, AuthorMiddle, Title, City, Publisher, Year);

}
