// SECTION A WEB URL CLASS DEFINITION OR INTERFACE OF CLASS 
// PROJECT REQUIREMENTS:
// 1. CONSTRUCTOR TO ACCEPT STRING ARGUMENTS FOR THREE VARIABLES 1.scheme, 2.authority and 3.path
// 2. three public getter methods to return three variables
#include<string>
#include<iostream>
#include<ostream>
class WebURL {
public:
	WebURL(std::string,std::string,std::string);
	std::string getURL() const;
	std::string getScheme() const;
	std::string getAuthority() const;
	std::string getPath() const;
	
private:
	std::string scheme;
	std::string authority;
	std::string path;
};

std::ostream& operator<<(std::ostream& out, const WebURL& url);

