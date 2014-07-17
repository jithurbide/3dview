// 3DLib.h

#ifndef _3DLIB_H_
#define _3DLIB_H_

#include "opencv2\core\core.hpp"
#include "opencv2\highgui\highgui.hpp"
#include <iostream>


using namespace cv;

namespace Lib3D {


	class Calibration
	{
		// TODO: Add your methods for this class here.

	};

	class StereoVideoToImage
	{
		Mat leftImg, rigthImg;
		void SaveToFile(int i);
		static void mouseCallback(int event, int x, int y, int flags, void *param);
		void doMouseCallback(int event, int x, int y, int flags);
		int Start();
		StereoVideoToImage();
		~StereoVideoToImage();

	};
}
#endif // _3DLIB_H_