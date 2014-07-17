#include "menu.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "opencv2\core\core.hpp"
#include "opencv2\highgui\highgui.hpp"
#include "Lib3D.h"

using namespace std;
using namespace cv;
using namespace Lib3D;

Menu::Menu()
{
	MainAI();
	dossier_ = "";
}

void Menu::ShowMainMenu()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *"<< endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                              MENU Principal                                  *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "                                    1 - calibration " << endl;
	cout << "                                    2 - blob detection " << endl;
	cout << "                                    3 - Advanced " << endl;
	cout << endl;
	
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - quitter le programme " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    Votre choix :  ";
}

void Menu::ShowMainMenuError()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                              MENU Principal                                  *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << "                                    1 - calibration " << endl;
	cout << "                                    2 - blob detection " << endl;
	cout << "                                    3 - advanced " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - quitter le programme " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                            !!! Vous n'avez pas entrer un nombre correct !!!  :  ";
}

void Menu::ShowCalibMenu()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                              MENU Calibration                                *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << "                                    1 - definir dossier " << endl;
	cout << "                                    2 - prendre les images d'un damier" << endl;
	cout << "                                    3 - calibrer " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    Dossier definit :  "<< dossier_ << endl;
	cout << endl;
	cout << "                                    9 - retour menu principal " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    Votre choix :  ";
}

void Menu::ShowCalibMenuError()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                              MENU Calibration                                *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << "                                    1 - definir dossier " << endl;
	cout << "                                    2 - prendre les images d'un damier" << endl;
	cout << "                                    3 - calibrer " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - retour menu principal " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                             !!! Vous n'avez pas entrer un nombre correct !!! :  ";

}

void Menu::ShowBlobMenu()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                           MENU Blob detection                                *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << "                                    1 - prendre les images du fond " << endl;
	cout << "                                    2 - start programm" << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - retour menu principal " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    Votre choix :  ";
}

void Menu::ShowBlobMenuError()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "*                           MENU Blob detection                                *" << endl;
	cout << "*                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << "                                    1 - prendre les images du fond " << endl;
	cout << "                                    2 - start programm" << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - retour menu principal " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                         !!! Vous n'avez pas entrer un nombre correct !!! :  ";
	
	
}


void Menu::ShowAdvancedMenu()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                       MENU Advanced detection                                *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "                                    1 - prendre les images du fond " << endl;
	cout << "                                    2 - start programm" << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - retour menu principal " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    Votre choix :  ";
}

void Menu::ShowAdvancedMenuError()
{
	system("cls");
	cout << "          ********************************************************************************" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Projet Bachelor - Identification d'objets dans un scène 3D           *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          *         Julien Ithurbide - HEIG-VD / iAi - 2014                              *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                       MENU Advanced detection                                *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << endl;
	cout << "                                    1 - prendre les images du fond " << endl;
	cout << "                                    2 - start programm" << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - retour menu principal " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                             !!! Vous n'avez pas entrer un nombre correct !!! :  ";
	
}

void Menu::ShowDefinedFolder()
{
	system("cls");
	cout << endl;
	cout << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "          *                      MENU Calibration - definir dossier                      *" << endl;
	cout << "          *                                                                              *" << endl;
	cout << "          ********************************************************************************" << endl;
	cout << "                                    1 - changer le dossier " << endl;
	cout << endl;
	cout << "                                    Dossier actuel : " << dossier_ << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    9 - retour menu principal " << endl;
	cout << endl;
	cout << "          --------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                                    Votre choix :  ";
}

void Menu::CalibAI()
{
	int retourClavierMain = 100;
	int retourClavierSecond = 100;
	StereoVideoToImage stereoVideo = StereoVideoToImage(dossier_);
	
	std::string chemin;
	ShowCalibMenu();
	while ( retourClavierMain != 9 )
	{
		cv::waitKey(100);

		while ( !( cin >> retourClavierMain ) )
		{
			string tmp;
			cin.clear();
			cin >> tmp;
			ShowCalibMenuError();
		}
		//while ( retourclavier )
		switch ( retourClavierMain )
		{
			case 9:
				MainAI();
				break;
			case 1:
				PathAI();
				cout <<endl <<"                                    Nouveau chemin :  ";
				while ( !( cin >> chemin ) )
				{
					string tmp;
					cin.clear();
					cin >> tmp;
					ShowCalibMenuError();
				}
				dossier_ = chemin;
				// need add code
				break;
			case 2:
				stereoVideo.Start();
				ShowCalibMenu();
				 stereoVideo.~StereoVideoToImage;
				//start dual picture to save file
				break;
			case 3:
				//start calibration
				break;
			default:
				ShowCalibMenuError();
				break;
		}

	}
}

void Menu::PathAI()
{
	int retourClavierMain = 100;
	int retourClavierSecond = 100;
	std::string path;
	ShowDefinedFolder();
	while ( retourClavierMain != 9 )
	{
		cv::waitKey(100);

		while ( !( cin >> retourClavierMain ) )
		{
			string tmp;
			cin.clear();
			cin >> tmp;
			ShowDefinedFolder();
		}
		//while ( retourclavier )
		switch ( retourClavierMain )
		{
			case 9:
				CalibAI();
				break;
			case 1:
				
				cout << endl << "                                    Nouveau chemin :  ";
				while ( !( cin >> path ) )
				{
					string tmp;
					cin.clear();
					cin >> tmp;
					ShowCalibMenuError();
				}
				dossier_ = path;
				ShowDefinedFolder();
				// need add code
				break;
			default:
				ShowDefinedFolder();
				break;
		}

	}
}

void Menu::MainAI()
{
	int retourClavierMain = 100;
	int retourClavierSecond = 100;
	ShowMainMenu();
	while ( retourClavierMain != 9 )
	{
		cv::waitKey(100);
		
		while ( !( cin >> retourClavierMain ) )
		{
			string tmp;
			cin.clear();
			cin >> tmp;
			ShowMainMenuError();
		}
		//while ( retourclavier )
		switch ( retourClavierMain )
		{
			case 9:
				exit(0);
				break;
			case 1:
				CalibAI();
				// need add code
				break;
			case 2:
				ShowBlobMenu();
				while ( !( cin >> retourClavierSecond ) )
				{
					string tmp;
					cin.clear();
					cin >> tmp;
					ShowBlobMenuError();
				}
				break;
			case 3:
				ShowAdvancedMenu();
				while ( !( cin >> retourClavierSecond ) )
				{
					string tmp;
					cin.clear();
					cin >> tmp;
					ShowAdvancedMenuError();
				}
				break;
			default:
				ShowMainMenuError();
				break;
		}

	}
}

Menu::~Menu()
{
}
