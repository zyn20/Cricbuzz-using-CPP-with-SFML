// CricBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
  A stringstream class in C++ is a Stream Class to Operate
  on strings. The stringstream class Implements the
  Input/Output Operations on Memory Bases streams i.e. string:
*/
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <sstream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Headers.h"
int size = 0;
using namespace std;
using namespace sf;
Font font;
RenderWindow window(VideoMode(1000, 600), "Cricbuzz Application");
void loginDisp()
{
	window.clear();
	Texture pic;
	Sprite ps1;
	pic.loadFromFile("login.jpg");
	ps1.setTexture(pic);
	ps1.setPosition(0, 0);

	window.draw(ps1);
	/*window.draw(credit);*/
	window.display();

}


void SuccessloginDisp()
{

	Text credit;
	credit.setString("You are Successfully Logged in !!!!");
	credit.setFillColor(Color::White);
	credit.setCharacterSize(25);
	credit.setPosition(350, 300);
	credit.setFont(font);
	credit.getOutlineColor();

	window.clear();
	Texture pic;
	Sprite ps1;
	pic.loadFromFile("successlogin.jpg");
	ps1.setTexture(pic);
	ps1.setPosition(0, 0);

	window.draw(ps1);
	window.draw(credit);
	window.display();

}
void Title_Display()
{
	window.clear();
	if (!font.loadFromFile("OpenSans-Bold.ttf"))
		cout << "ERROR FONT LOADING" << endl;

	Text text1, text2, by, credit;
	RectangleShape line;

	RectangleShape image(Vector2f(350.0f, 210.0f));
	image.setOutlineThickness(5);
	image.setPosition(620.0, 100.0);
	Texture photo;
	photo.loadFromFile("cribuzz.jpg");
	image.setTexture(&photo);
	//Line vertical
	line.setSize(Vector2f(03, 240));//size
	line.setFillColor(Color::Red);
	line.setPosition(50, 200);
	text1.setString("Cricbuzz");
	text1.setFillColor(Color::White);
	text1.setCharacterSize(80);
	text1.setPosition(80, 180);
	text1.setFont(font);
	text1.getOutlineColor();

	text2.setString("Application");
	text2.setFillColor(Color::White);
	text2.setCharacterSize(80);
	text2.setPosition(80, 260);
	text2.setFont(font);
	text2.getOutlineColor();
	//////////////////////////////////////////////////////////
	//by 
	by.setString("by");
	by.setFillColor(Color::White);
	by.setCharacterSize(40);
	by.setPosition(300, 350);
	by.setFont(font);
	by.getOutlineColor();
	//////////////////////////////////////////////////////////
	//by 
	credit.setString("Arbaz & Zain");
	credit.setFillColor(Color::White);
	credit.setCharacterSize(50);
	credit.setPosition(340, 380);
	credit.setFont(font);
	credit.getOutlineColor();
	//drawing behind
	window.draw(line);
	window.draw(image);
	window.draw(text1);
	window.draw(text2);
	window.draw(by);
	window.draw(credit);

	//Displaying on screen
	window.display();
}
void menuDisp()
{


	window.clear();
	Texture pic1;
	Sprite ps;
	pic1.loadFromFile("menu.jpg");
	ps.setTexture(pic1);
	ps.setPosition(0, 0);
	window.draw(ps);
	window.display();

}

void addteamwaitDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("teamadding.jpg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void newsDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("breaknews.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void T20Disp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("T20.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void ODIDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("ODI.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void TESTDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("TEST.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void deleteDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("delete.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void recentDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("recentdisp.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void updatedpDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("updatep.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void updatedcapDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("updatedcap.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void schedulemDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("schedule.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void updatedcDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("updatedc.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void conductm1Disp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("conductmatch1.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void conductm2Disp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("conductmatch2.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void conductm3Disp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("conductmatch3.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void conductm4Disp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("conductmatch4.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void successaddteamDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("successadd.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();

}
void upDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("updisp.jpeg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();
}
void removeplayer()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("removep.jpg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();
}
void searchDisp()
{


	window.clear();
	Texture pic2;
	Sprite ps1;
	pic2.loadFromFile("searchp.jpg");
	ps1.setTexture(pic2);
	ps1.setPosition(0, 0);
	window.draw(ps1);
	window.display();
}
int main()
{
	int choice;
	bool checkSAVE, run = 1;
	Team T1;
	Team* T2;
	Team* T3;
	T2 = T1.data();
	T3 = T1.file_read_data();
	
	cout << endl;
	Match obj1;
	Title_Display();
	Sleep(2000);
	LOGIN L1;
	loginDisp();
	L1.login(); system("CLS");

	while (run != false)
	{
		SuccessloginDisp();
		Sleep(2000);
		menuDisp();
		/*SoundBuffer buffer;
		if (!buffer.loadFromFile("theme.wav"))
		{
			cout << "not";

		}
		Sound sound;
		sound.setBuffer(buffer);
		sound.play();*/

		cout << "***********************************WELCOME TO CricBuzz***********************************" << endl;
		cout << "1.  ADD TEAM" << endl;
		cout << "2.  SEARCH PLAYER INFO." << endl;
		cout << "3.  DELETE TEAM" << endl;
		cout << "4.  UPDATE PLAYER INFO." << endl;
		cout << "5.  UPDATE CAPTIAN INFO." << endl;
		cout << "6.  UPDATE COACH INFO." << endl;
		cout << "7.  SEE MATCH INFO." << endl;
		cout << "8.  CONDUCT MATCH." << endl;
		cout << "9.  SCHEDULE MATCH." << endl;
		cout << "10. SEE TEAM DETAILS." << endl;
		cout << "11. DELETE A SPECIFIC PLAYER" << endl;
		cout << "12. ADD A SPECIFIC PLAYER" << endl;
		cout << "13. NEWS." << endl;
		cout << endl;
		cout << "Please enter the choice: ";
		cin >> choice;
		cout << endl;
		
		switch (choice)
		{
		case 1:
			addteamwaitDisp();
			Sleep(1000);
			T1.add_Team();
			//::size++;
			successaddteamDisp();

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 2:
			searchDisp();
			Sleep(1000);
			T1.searchPlayer(T2,T3);
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 3:
			deleteDisp();
			Sleep(1000);
			T1.remove_TEAM(T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 4:
		
			updatedpDisp();
			Sleep(1000);
			T1.updatePlayer(T2,T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 5:
			
			updatedcapDisp();
			Sleep(1000);
			T1.update_cap(T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 6:
			
			updatedcDisp();
			Sleep(1000);
			T1.update_coach(T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 7:
			obj1.matchstatus();
			recentDisp();
			Sleep(3000);
			upDisp();
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 8:
			conductm1Disp();
			Sleep(3000);
			conductm2Disp();
			Sleep(3000);
			conductm3Disp();
			Sleep(3000);
			conductm4Disp();
            obj1.conductmatch();

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
            cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 9:
			schedulemDisp();
			obj1.schdule_match(T3);
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 10:
			T20Disp();
			Sleep(3000);
			TESTDisp();
			Sleep(3000);
			ODIDisp();
			T1.disp(T2,T3);
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 11:
			removeplayer();
			Sleep(1000);
			T1.remove_PLAYER(T2,T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 12:
			addteamwaitDisp();
			Sleep(1000);
			T1.add_specific(T3,T2);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 13:
			newsDisp();
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		default:
			cout << endl << "INVALID CHOICE" << endl;
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;
		}
	}
	system("CLS");
	cout << "\n\n\t\t\t\tGOOD BYE\n\n\t\t\t\t";
	cout << "\n\n\t\t\t\tCREATED BY ARBAZ AMEER & ZAIN-UL-ABIDEEN\n\n\t\t\t\t";
	Sleep(1000);
	return 0;
}
