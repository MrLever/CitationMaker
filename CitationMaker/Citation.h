#pragma once

#include <string>
#include <ostream>


struct Citation{
private:
	std::string AuthorFirst;
	std::string AuthorLast;
	std::string AuthorMiddle;
	std::string Title;
	std::string City;
	std::string Publisher;
	int Year;

public:
	Citation(std::string AuthorFirst,
		std::string AuthorLast,
		std::string AuthorMiddle,
		std::string Title,
		std::string City,
		std::string Publisher,
		int Year) {

		this->AuthorFirst = AuthorFirst;
		this->AuthorLast = AuthorLast;
		this->AuthorMiddle = AuthorMiddle;
		this->Title = Title;
		this->City = City;
		this->Publisher = Publisher;
		this->Year = Year;
	}

	friend std::ostream& operator<<(std::ostream& out, const Citation& a){
		return out << a.AuthorLast << ", " << a.AuthorFirst << " " << a.AuthorMiddle << ". " << a.Title << ". " << a.City << ": " << a.Publisher << ", " << a.Year << "." << std::endl;
	}

	~Citation() {}
};

