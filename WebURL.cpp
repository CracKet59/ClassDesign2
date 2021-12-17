// SECTION A WEB URL CLASS IMPLEMENTATION
// PROJECT REQUIREMENTS:
// 1. CONSTRUCTOR TO ACCEPT STRING ARGUMENTS FOR THREE VARIABLES 1.scheme, 2.authority and 3.path
// 2. three public getter methods to return three variables
#include<string>
#include<iostream>
#include<iomanip>
#include "WebURL.h"

WebURL::WebURL(std::string scheme,std::string authority,std::string path) {
	this->scheme = scheme;
	this->authority = authority;
	this->path = path;
}
std::string WebURL::getURL() const {
	return scheme + "://" + authority + "/" + path;
}
std::string WebURL::getScheme() const { return scheme; }
std::string WebURL::getAuthority() const { return authority; }
std::string WebURL::getPath() const { return "/" + path; }



std::ostream& operator<<(std::ostream& out, const WebURL& url)
{
	out <<"\n=====================================" 
		<< "\n" << std::setw(10) << "URL:" << url.getURL()
		<< "\n" << std::setw(10) << "SCHEME:" << url.getScheme()
		<< "\n" << std::setw(10) << "AUTHORITY:" << url.getAuthority()
		<< "\n" << std::setw(10) << "PATH:" << url.getPath()
		<< "\n=====================================";
	return out;
}
