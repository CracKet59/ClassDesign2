#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<vector>
#include<iomanip>
#include<ostream>
#include<ctime>
#include<sstream>
#include<iostream>
#include"CameraImage.h"

std::vector<std::string> ImageTypes = { "PNG","GIF","JPEG" };

std::string getCurrentDate() {
	auto t = std::time(nullptr);
	auto tm = *std::localtime(&t);
	std::ostringstream outStringStream;
	outStringStream << std::put_time(&tm, "%d-%m-%Y");
	return outStringStream.str();
}
CameraImage::CameraImage(std::string fileName,
	std::string imageType,
	std::string date,
	double size,
	std::string authorName,
	std::string dimension,
	std::string apertureTime,
	std::string exposureTime,
	int isoValue,
	bool flashEnabled) {
		this->fileName = fileName;
		if (std::count(ImageTypes.begin(), ImageTypes.end(), imageType))
			this->imageType = imageType;
		else
			std::cout << "Invalid Image Type provided, setting the image type to default value:"
			<< ImageTypes.at(0);
		this->date = date;
		this->size = size;
		this->authorName = authorName;
		this->dimension = dimension;
		this->apertureSize = apertureSize;
		this->exposureTime = exposureTime;
		this->isoValue = isoValue;
		this->flashEnabled = flashEnabled;
	}
	std::string CameraImage::getFileName() { return fileName; }
	void CameraImage::setFileName(std::string fileName) { this->fileName = fileName; }
	std::string CameraImage::getImageType() { return imageType; }
	void CameraImage::setImageType(std::string imageType) { this->imageType = imageType; }
	std::string CameraImage::getDate() { return date; }
	void CameraImage::setDate(std::string date) { this->date = date; }
	double CameraImage::getSize() { return size; }
	void CameraImage::setSize(double size) { this->size = size; }
	std::string CameraImage::getAuthorName() { return authorName; }
	void CameraImage::setAuthorName(std::string authorName) { this->authorName = authorName; }
	std::string CameraImage::getImageDimentions() { return dimension; }
	void CameraImage::setImageDimentions(std::string dimension) { this->dimension = dimension; }
	std::string CameraImage::getApertureSize() { return apertureSize; }
	void CameraImage::setApertureSize(std::string apertureSize) { this->apertureSize = apertureSize; }
	std::string CameraImage::getExposureTime() { return exposureTime; }
	void CameraImage::setExposureTime(std::string exposureTime) { this->exposureTime = exposureTime; }
	int CameraImage::getIsoValue() { return isoValue; }
	void CameraImage::setIsoValue(int isoValue) { this->isoValue = isoValue; }
	bool CameraImage::getFlashEnabled() { return flashEnabled; }
	void CameraImage::setFlashEnabled(bool flashEnabled) { this->flashEnabled = flashEnabled; }


	std::ostream& operator<<(std::ostream& out, CameraImage& cameraImage)
	{
		out << "\n====================================="
		<< "\n" << std::setw(15) << "File Name:" << cameraImage.getFileName()
		<< "\n" << std::setw(15) << "Image Type:" << cameraImage.getImageType()
		<< "\n" << std::setw(15) << "Date Created:" << cameraImage.getDate()
		<< "\n" << std::setw(15) << "Size:" << cameraImage.getSize()
		<< "\n" << std::setw(15) << "Author Name:" << cameraImage.getAuthorName()
		<< "\n" << std::setw(15) << "Image Dimensions:" << cameraImage.getImageDimentions()
		<< "\n" << std::setw(15) << "Aperture Size:" << cameraImage.getApertureSize()
		<< "\n" << std::setw(15) << "Exposure Time:" << cameraImage.getExposureTime()
		<< "\n" << std::setw(15) << "ISO Value:" << cameraImage.getIsoValue()
		<< "\n" << std::setw(15) << "Flash Enabled:" << cameraImage.getFlashEnabled()
		<< "\n=====================================";
		return out;
	}