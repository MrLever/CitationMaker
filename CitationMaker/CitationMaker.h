#pragma once

struct Citation;

class CitationMaker{
public:
	CitationMaker();
	~CitationMaker();

	Citation BuildCitation();
};

