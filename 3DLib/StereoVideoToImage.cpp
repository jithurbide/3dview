
#include "Lib3d.h"

using namespace std;
using namespace Lib3D;
using namespace cv;

void StereoVideoToImage::SaveToFile(int i)
{
	// Save the frame into a file
	string left = "left";
	string rigth = "rigth";
	string ext = ".jpg";
	left += std::to_string(i);
	left += ext;
	rigth += std::to_string(i);
	rigth += ext;

	imwrite(left, leftImg);
	imwrite(rigth, rigthImg);
}
void StereoVideoToImage::mouseCallback(int event, int x, int y, int flags, void* userdata)
{
	StereoVideoToImage *self = static_cast<StereoVideoToImage*>( userdata );
	self->doMouseCallback(event, x,y,flags);

}
void StereoVideoToImage::doMouseCallback(int event, int x, int y, int flags)
{
	static int i = 1;
	if ( event == EVENT_LBUTTONDOWN )
	{
		cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
		SaveToFile(i);
		i++;
	}

}
int StereoVideoToImage::Start()
{
	VideoCapture LeftCAM(0);
	VideoCapture RightCAM(1);
	if ( !LeftCAM.isOpened() || !RightCAM.isOpened() )  // if not success, exit program
	{
		cout << "Cannot open the video cam" << endl;
		system("pause");
		return -1;
	}


	double dWidth = LeftCAM.get(CV_CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
	double dHeight = LeftCAM.get(CV_CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video

	cout << "Frame size : " << dWidth << " x " << dHeight << endl;

	cv::Mat frame;

	Size frameSize(static_cast<int>( dWidth ), static_cast<int>( dHeight ));



	namedWindow("Left", 1);
	namedWindow("Right", 1);




	while ( 1 )
	{
		bool isValid = true;
		//cv::Mat frameLeft;
		//cv::Mat frameRight;

		try
		{
			LeftCAM >> leftImg; // get a new frame from left camera
			RightCAM >> rigthImg; //get a new frame from right camera
		}
		catch ( cv::Exception& e )
		{
			std::cout << "An exception occurred. Ignoring frame. " << e.err << std::endl;
			isValid = false;
		}

		if ( isValid )
		{
			try
			{
				cv::imshow("Left", leftImg);
				cv::imshow("Right", rigthImg);

				/************************************************************
				*    This is the place for all the cool stuff that you      *
				*    want to do with your stereo images                     *
				************************************************************/

				//set the callback function for any mouse event
				setMouseCallback("Left", mouseCallback, NULL);
				
			}
			catch ( cv::Exception& e )
			{
				/************************************************************
				*    Sometimes an "Unrecognized or unsuported array type"   *
				*    exception is received so we handle it to avoid dying   *
				************************************************************/
				std::cout << "An exception occurred. Ignoring frame. " << e.err << std::endl;
			}
		}


		char c = cvWaitKey(33);
		if ( c == 27 ) break;
	}



	waitKey(0); // Wait for a keystroke in the window
	return 0;
}