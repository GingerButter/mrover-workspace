#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/aruco.hpp>
#include <string>

using namespace std;

class Map  {
    public:
        vector<uint8_t> ReadInputImage(){
            cv::Mat image;
            image = cv::imread(filename, cv::IMREAD_UNCHANGED);   // Read the file
            // flatten the mat.
            uint totalElements = image.total()*image.channels(); // Note: image.total() == rows*cols.
            
        }



    private:
        string filename;
};