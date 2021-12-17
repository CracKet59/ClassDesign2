#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<ostream>
#include<vector>
#include<iomanip>
#include<ctime>
#include<sstream>
#include<iostream>
std::string getCurrentDate();
class CameraImage {
public:
	CameraImage(std::string,
		std::string,
		std::string,
		double,
		std::string,
		std::string,
		std::string,
		std::string,
		int,
		bool);

	std::string getFileName();
	void setFileName(std::string fileName);
	std::string getImageType();
	void setImageType(std::string imageType);
	std::string getDate();
	void setDate(std::string date);
	double getSize();
	void setSize(double size);
	std::string getAuthorName();
	void setAuthorName(std::string authorName);
	std::string getImageDimentions();
	void setImageDimentions(std::string dimension);
	std::string getApertureSize();
	void setApertureSize(std::string apertureSize);
	std::string getExposureTime();
	void setExposureTime(std::string exposureTime);
	int getIsoValue();
	void setIsoValue(int isoValue);
	bool getFlashEnabled();
	void setFlashEnabled(bool flashEnabled);
private:
	std::string fileName{ "sampleFileName" };
	std::string imageType{"GIF"};
	std::string date{"date"};
	double size{ 0.0 };
	std::string authorName{ "default" };
	std::string dimension{ "22 X 33" };
	std::string apertureSize{ "f/8" };
	std::string exposureTime{ "1/30" };
	int isoValue{ 600 };
	bool flashEnabled{ true };
};

std::ostream& operator<<(std::ostream& out, CameraImage& cameraImage);
