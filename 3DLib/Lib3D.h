// 3DLib.h

#ifndef _3DLIB_H_
#define _3DLIB_H_

#include "opencv2\core\core.hpp"
#include "opencv2\highgui\highgui.hpp"
#include <iostream>


using namespace cv;
using namespace std;

namespace Lib3D {

	class StereoVideoToImage
	{
	public:
		Mat leftImg, rigthImg;
		string path_;
		void SaveToFile(int i);
		static void mouseCallback(int event, int x, int y, int flags, void *param);
		void doMouseCallback(int event, int x, int y, int flags);
		int Start();
		StereoVideoToImage();
		StereoVideoToImage(string path);
		~StereoVideoToImage();

	};
}
#endif // _3DLIB_H_