#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        cout << "Usage: DisplayImage <Image_Path>" << endl;
        return -1;
    }

    Mat image;
    image = imread(argv[1], IMREAD_COLOR);

    if (!image.data)
    {
        cout << "No image data" << endl;
        return -1;
    }

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);

    waitKey(0);
    return 0;
}
