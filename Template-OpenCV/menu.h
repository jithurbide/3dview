#ifndef _MENU_H_
#define _MENU_H_


#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <list>
#include <algorithm>
#include "opencv2\core\core.hpp"
#include "opencv2\highgui\highgui.hpp"
#include "Lib3D.h"

using namespace Lib3D;


class Menu
{
public:
//	string path_;
	int test;
	std::string dossier_;
public:
	Menu();
	void ShowMainMenu();
	void ShowMainMenuError();
	void CalibAI();
	void PathAI();
	void MainAI();
	void ShowCalibMenu();
	void ShowCalibMenuError();
	void ShowBlobMenu();
	void ShowBlobMenuError();
	void ShowAdvancedMenu();
	void ShowAdvancedMenuError();
	void ShowDefinedFolder();
	~Menu();
};

#endif //  _MENU_H_