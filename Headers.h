#ifndef HEADER_H
#define STUDENT_H
#include <sstream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

class LOGIN
{
protected:
	string username;
	string password;

public:
	//to check the password entered is correct or not
	bool check(string U, string P)
	{
		string U1, P1;
		U1 = "admin";
		P1 = "admin";

		if (U == U1 && P == P1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	void login()
	{
		int press;
		char asterik;
		cout << "Username: ";
		cin >> username;
		cout << "Password: ";
		asterik = _getch();

		while (asterik != 13)
		{
			password.push_back(asterik);
			cout << '*';
			asterik = _getch();
		}
		cout << endl;

		//prompt the user with successful sign
		try
		{
			if (check(username, password) == true)
			{
				cout << "You have loged in the application successfully" << endl;
				Sleep(1500);
			}

			//prompt the user with wrong credentials entered, and give him the chance to re-enter the code
			else
			{
				throw exception("You entered the credentials wrong");
			}
		}
		catch (exception ob)
		{
			cout << ob.what() << endl;
			Sleep(2500);
			cout << "Enter '1' to re-enter the password or '0' to exit the program : ";
			cin >> press;
			system("CLS");
			if (press == 1)
			{
				login();
			}
			else
			{
				system("CLS");
				cout << "***GOOD BYE****" << endl;
				Sleep(25000);
			}
		}
	}
};

class Player
{
protected:
	string avg;
	string ICC_ranking[3];
	string matches_played;
	string name;
	string shirt_no;
	string total_runs;
	string total_wickets;

public:
	//constructer
	Player()
	{
		name = "";shirt_no = "";avg = "";ICC_ranking[0] = "";ICC_ranking[1] = "";
		ICC_ranking[2] = "";total_runs = "";matches_played = "";total_wickets = "";
	}
	//getter functions
	string getNAME()
	{
		return name;
	}
	string getShirt_no()
	{
		return shirt_no;
	}
	string getAvg()
	{
		return avg;
	}
	string getICC_ranking(int index)
	{
		//first index is ---> ODI
		//second index is ---> TEST
		//third index is ---> T20
		return ICC_ranking[index];
	}
	string getTotal_runs()
	{
		return total_runs;
	}
	string getMatches_played()
	{
		return matches_played;
	}
	string getTotal_wickets()
	{
		return total_wickets;
	}
	//setter function
	void setNAME(string n)
	{
		name = n;
	}
	void setShirt_no(string s)
	{
		shirt_no = s;
	}
	void setAvg(string a)
	{
		avg = a;
	}
	void setICC_ranking(string i, string i2, string i3)
	{
		//first index is ---> ODI
		//second index is ---> TEST
		//third index is ---> T20
		ICC_ranking[1] = i;
		ICC_ranking[2] = i2;
		ICC_ranking[3] = i3;
	}
	void set1(string i)
	{
		//first index is ---> ODI
		//second index is ---> TEST
		//third index is ---> T20
		ICC_ranking[1] = i;
	}
	void set2(string i)
	{
		ICC_ranking[2] = i;
	}
	void set3(string i)
	{
		ICC_ranking[3] = i;
	}
	void setTotal_runs(string r)
	{
		total_runs = r;
	}
	void setMatches_played(string p)
	{
		matches_played = p;
	}
	void setTotal_wickets(string w)
	{
		total_wickets = w;
	}

	void print_1PLAYER_ONLY()
	{
		cout << "Player Name: " << getNAME() << endl;
		cout << "Player Shirt Number: " << getShirt_no() << endl;
		cout << "Total Runs of Player: " << getTotal_runs() << endl;
		cout << "AVG. Runs of player " << name << ": " << getAvg() << endl;
		cout << "Number of matches played by " << name << ": " << getMatches_played() << endl;
		cout << "Number of wickets taken by " << name << ": " << getTotal_wickets() << endl;
		cout << "ICC ranking of 'ODI matches' of " << name << ": " << getICC_ranking(1) << endl;
		cout << "ICC ranking of 'TEST matches' of " << name << ": " << getICC_ranking(2) << endl;
		cout << "ICC ranking of 'T20 matches' of " << name << ": " << getICC_ranking(3) << endl;
		cout << endl;
	}
	void addPlayer()
	{
		string ICCNAME[3] = { "ODI MATCHES","TEST MATCHES","T20 MATCHES" };
		cout << "Enter Player Name: ";
		cin.ignore();
		getline(cin, name);
		cout << "Enter Player Shirt Number: ";
		cin >> shirt_no;
		cout << "Enter Total Runs of Player: ";
		cin >> total_runs;
		cout << "Enter the number of matches played by player: ";
		cin >> matches_played;
		cout << "Enter the avg. runs: ";
		cin >> avg;
		cout << "Enter the number of wickets taken by player: ";
		cin >> total_wickets;
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter the ICC ranking of " << ICCNAME[i] << " of player: ";
			cin >> ICC_ranking[i];
		}
		cout << endl;
	}


};

class Team :public Player
{
protected:
	string t_name;
	string ranking;
	string num_players;
	string match_win;
	string match_lost;
	string team_capt;
	string team_coach;

public:
	Team()
	{
		t_name = "";
		ranking = "";
		num_players = "";
		match_win = "";
		match_lost = "";
		team_capt = "";
		team_coach = "";
	}
	void  sett_name(string s, string cap, string coa, string r, string nw, string nl)
	{
		t_name = s; ranking = r; match_win = nw; match_lost = nl; team_capt = cap; team_coach = coa;
	}
	Player* obj = new Player[11];
	void add_Team()
	{
		cout << "Enter Team Name: ";
		cin.ignore();
		getline(cin,t_name);
		cout << "Enter Team Captain name: ";
		cin.ignore();
		getline(cin,team_capt);
		cout << "Enter Team Coach Name: ";
		cin.ignore();
		getline(cin,team_coach);
		cout << "Enter team ranking: ";
		cin >> ranking;
		cout << "Enter matches won: ";
		cin >> match_win;
		cout << "Enter matches lost: ";
		cin >> match_lost;
		for (int i = 0; i < 11; i++)
		{
			cout << "\nENTER PLAYER " << i + 1 << " DATA\n";
			obj[i].addPlayer();
			system("CLS");
		}
	}
	//getter functions
	string getT_name()
	{
		return t_name;
	}
	string getranking()
	{
		return ranking;
	}
	string getnum_players()
	{
		return num_players;
	}
	string getmatch_win()
	{
		return match_win;
	}
	string getmatch_lost()
	{
		return match_lost;
	}
	string getteam_capt()
	{
		return team_capt;
	}
	string getteam_coach()
	{
		return team_capt;
	}

	void setCOA(string n)
	{
		team_coach = n;
	}
	void setCAP(string n)
	{
		team_capt = n;
	}
	void setT_name(string s)
	{
		t_name = s; 
	}
	void set_ranking(string s)
	{
		ranking = s;
	}
	void set_matchP(string s)
	{
		matches_played = s;
	}
	void set_matchW(string s)
	{
		match_win = s;
	}
	void set_matchL(string s)
	{
		match_lost = s;
	}

	void disp(Team* p, Team* p2)
	{
		int choice = 0;
		cout << "\nPLEASE SELECT ONE TEAM FOR PLAYER NAMES" << endl;
		cout << "1." << p2[0].t_name << endl;
		cout << "2." << p2[1].t_name << endl;
		cout << "3." << p2[2].t_name << endl;
		cout << "4." << p2[3].t_name << endl;
		cout << "5." << p2[4].t_name << endl;
		cout << "6." << p2[5].t_name << endl;
		cout << "Enter your choice:";
		cin >> choice;
		cout << "------------(Players in this team are following)----------" << endl;
		switch (choice)
		{
		case 1:
			for (int i = 0; i < 11; i++)
			{
				cout << p[i].getNAME() << endl;
			}
			break;
		case 2:
			for (int i = 11; i < 22; i++)
			{
				cout << p[i].getNAME() << endl;
			}
			break;
		case 3:
			for (int i = 22; i < 33; i++)
			{
				cout << p[i].getNAME() << endl;
			}
			break;
		case 4:
			for (int i = 33; i < 44; i++)
			{
				cout << p[i].getNAME() << endl;
			}
			break;
		case 5:
			for (int i = 44; i < 55; i++)
			{
				cout << p[i].getNAME() << endl;
			}
			break;
		default:
			break;
		}
	}

	void searchPlayer(Team* ptr, Team* oxj)
	{
		bool check = false;
		cout << "\n--------------ENTER THE FOLLOWING DETAILS TO SEARCH PLAYER--------------\n";
		string n = ""; string s = "";
		cin.ignore();
		cout << "Enter Team name: ";
		getline(cin, n);
		cout << "Enter Shirt #No.";
		cin >> s;
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 56; j++)
			{
				if (s == ptr[i].shirt_no && n == oxj[j].t_name)
				{
					cout << endl;
					ptr[j].print_1PLAYER_ONLY();
					cout << endl;
					check = true;
				}
			}
		}
		try
		{
			if (check == false)
			{
				throw exception("PLAYER NOT FOUND");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
		}
	}

	Team* remove_TEAM(Team* ptr)
	{
		bool check = false;
		string n = "";
		int size = 6;
		cin.ignore();
		//by deleting this it will be initilized as default construtor
		cout << "Enter the Team name to delete their records: ";
		getline(cin, n);
		cout << endl;
		for (int i = 0; i < size; i++)
		{
			for (int i = 0; i <= (size - 1); i++)
			{
				if (ptr[i].t_name == n)
				{
					ptr[i] = ptr[i + 1];
					check = true;
				}
			}
		}
		try
		{
			if (check == true)
			{
				cout << endl << "DELETED SUCCESSFULY" << endl;
				ptr[size - 1] = {};
			}
			else
			{
				throw exception("TEAM NOT FOUND");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
		}
		return ptr;
	}

	Team* updatePlayer(Team* ptr, Team* oxj)
	{
		bool check = false;
		cout << "\n--------------ENTER THE FOLLOWING DETAILS FOR UPDATE PLAYER--------------\n";
		string n = ""; string s = "";
		cin.ignore();
		cout << "Enter Team name: ";
		getline(cin, n);
		cout << "Enter Shirt #No.";
		cin >> s;

		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 60; j++)
			{
				if (s == ptr[j].shirt_no && n == oxj[j].t_name)
				{
					cout << endl;
					ptr[j].addPlayer();
					cout << endl;
					check = true;
				}
			}
		}
		try
		{
			if (check == true)
			{
				cout << "\nPLAYER UPDATED\n";
			}
			else
			{
				throw exception("PLAYER NOT FOUND");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
		}
		return ptr;
	}

	Team* add_specific(Team* ptr, Team* oxj)
	{
		int choice;
		cout << "\nTHESE ARE THE TEAMS, PLEASE SELECT IN WHICH TEAM DO YOU WANT ADD A NEW PLAYER\n";
		for (int i = 0; i < 6; i++)
		{
			cout << i + 1 << ". " << ptr[i].t_name << ". \n";
		}
		cout << "\nENTER YOUR CHOICE:";
		cin >> choice;
		try
		{
			if (choice < 1 || choice>7)
			{
				throw exception("CHOICE ENTERED WRONG");
			}
		}
		catch (exception obj)
		{
			cout << endl << obj.what() << endl;
		}
		int ab;
		ab = (choice - 1);
		oxj[11].addPlayer();
		return oxj;
	}

	Team* update_cap(Team* obj)
	{
		bool check = false;
		LOGIN L;
		L.login();
		string name = "";
		cin.ignore();
		cout << "Enter Team name to update their captain details: ";
		getline(cin, name);
		for (int i = 0; i < 7; i++)
		{
			if (name == obj[i].t_name)
			{
				check = true;
				string k;
				cout << "Enter the new captain name: ";
				getline(cin, k);
				obj[i].setCAP(k);
				cout << endl;
			}
		}
		try
		{
			if (check == true)
			{
				cout << "\nCAPTAIN UPDATED\n";
			}
			else
			{
				throw exception("CAPTAIN NOT FOUND");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
		}
		return obj;
	}
	Team* update_coach(Team* obj)
	{
		bool check = false;
		LOGIN L;
		L.login();
		string name = "";
		cin.ignore();
		cout << "Enter Team name to update coach details: ";
		getline(cin, name);
		for (int i = 0; i < 7; i++)
		{
			if (name == obj[i].t_name)
			{
				check = true;
				string k;
				cout << "Enter the new coach name: ";
				cin.ignore();
				getline(cin, k);
				obj[i].setCOA(k);
				cout << endl;
			}
		}
		try
		{
			if (check == true)
			{
				cout << "\nCOACH UPDATED\n";
			}
			else
			{
				throw exception("COACH NOT FOUND");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
		}
		return obj;
	}

	Team* remove_PLAYER(Team* ptr, Team* obj)
	{
		bool check = false;
		cout << "\n--------------ENTER THE FOLLOWING DETAILS FOR REMOVAL OF PLAYER--------------\n";
		string n = ""; string s = "";
		cin.ignore();
		cout << "Enter Team name: ";
		getline(cin, n);
		cout << "Enter Shirt #No.";
		cin >> s;
		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 60; j++)
			{
				if (s == ptr[j].shirt_no && n == obj[j].t_name)
				{
					check = true;
					cout << "\n--------------PLAYER INFO----------\n";
					cout << endl;
					ptr[j].print_1PLAYER_ONLY();
					cout << endl;
					ptr[j].setAvg(" ");
					ptr[j].set1(" ");
					ptr[j].set2(" ");
					ptr[j].set3(" ");
					ptr[j].setMatches_played(" ");
					ptr[j].setNAME("PLAYER REMOVED");
					ptr[j].setShirt_no(" ");
					ptr[j].setTotal_runs(" ");
					ptr[j].setTotal_wickets(" ");
				}
			}
		}
		try
		{
			if (check == true)
			{
				cout << "\nPLAYER REMOVED\n";
			}
			else
			{
				throw exception("PLAYER NOT FOUND");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
		}
		return ptr;
	}

	Team* file_read_data()
	{
		int i = 0;
		//char ss[20];
		string s1, s2, s3, s4, s5, s6, s7;
		Team* ptr = new Team[6];
		ifstream write;
		write.open("Team.txt");
		string line;
		if (!write.is_open())
		{
			cout << "\nTEAM FILE NOT FOUND\n";
		}
		//if (write.is_open())
		{
			while (getline(write, line))
			{
				stringstream ss(line);
				getline(ss, s1, ',');
				ptr[i].t_name = s1;
				getline(ss, s2, ',');
				ptr[i].team_capt = s2;
				getline(ss, s3, ',');
				ptr[i].team_coach = s3;
				getline(ss, s4, ',');
				ptr[i].ranking = s4;
				getline(ss, s5, ',');
				ptr[i].matches_played = s5;
				getline(ss, s6, ',');
				ptr[i].match_win = s6;
				getline(ss, s7, ',');
				ptr[i].match_lost = s7;
				i++;
			}
		}
		write.close();
		return ptr;
	}

	Team* data()
	{
		ifstream write2; int ii = 0;
		Team* T = new Team[60];
		write2.open("Players.txt");
		string line2;
		char ss2[40];
		string s1, s2, s3, s4, s5, s6, s7, s8, s9;
		if (!write2.is_open())
		{
			cout << "\nPLAYER FILE NOT FOUND\n";
		}
		
		{
			while (getline(write2,line2))
			{
				//for (int j = 0; j < 11; j++)
				{
					stringstream ss2(line2);
					getline(ss2, s1, ',');
					T[ii].name = s1;
					getline(ss2, s2, ',');
					T[ii].shirt_no = s2;
					getline(ss2, s3, ',');
					T[ii].matches_played = s3;
					getline(ss2, s4, ',');
					T[ii].total_wickets = s4;
					getline(ss2, s5, ',');
					T[ii].total_runs = s5;
					getline(ss2, s6, ',');
					T[ii].avg = s6;
					getline(ss2, s7, ',');
					T[ii].ICC_ranking[1] = s7;
					getline(ss2, s8, ',');
					T[ii].ICC_ranking[2] = s8;
					getline(ss2, s9, ',');
					T[ii].ICC_ranking[3] = s9;
				}
				ii++;
			}
		}
		write2.close();
		return T;
	}
};

int checkWhichTeam(Team* ptr, int size, string name)
{
	int index = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (ptr[i].getT_name() == name)
		{
			index++;
		}
	}
	return index;
}
int checkWhichTeam2(Team* ptr, int size, string name)
{
	int index = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (ptr[i].getT_name() == name)
		{
			index++;
		}
	}
	return index;
}

class Match : public Team,public Player
{
protected:
	string team1;
	string team2;
	int day, month, year;
	int dayS, monthS, yearS;
	string venue;
	string matchType;
	string tournament_name;
	string commentators[2];
	string umpires[2];
public:
	int team1_score = 0, team2_score = 0, wickets_team1 = 0, wickets_team2 = 0;;
	bool isConducted = false, win;

	void setT()
	{
		cout << "Enter Team 1 name: ";
		cin >> team1;
		cout << "Enter Team 2 name: ";
		cin >> team2;
	}

	string getT1()
	{
		return team1;
	}

	string getT2()
	{
		return team2;
	}

	Match()
	{
		team1 = "Pakistan";
		team2 = "Australia";
		dayS = 12; monthS = 12; yearS = 2021;
	}

	Match(string obj, string obj2)
	{
		team1 = obj;
		team2 = obj2;
	}

	void matchstatus()
	{
		day = 11; month = 7; year = 2021;
		srand(time(0));
		team1_score = rand() % 300;
		wickets_team1 = rand() % 10;
		team2_score = rand() % 300;
		wickets_team2 = rand() % 10;
		cout << "\nRecent matches : ";
		cout << "\n" << "Australia" << " v/s " << "India";
		cout << "\nMatch played on : " << day << "/" << month << "/" << year << endl;
		if (team1_score > team2_score)
		{
			cout << "\nTeam: " << " Australia " << " won by " << wickets_team2 - wickets_team1 << " wickets" << endl;
		}
		else
		{
			cout << "\nTeam: " << " India " << " won by " << wickets_team1 - wickets_team2 << " wickets" << endl;
		}

		cout << "\nUpcoming matches : ";
		cout << "\n" << team1 << " v/s " << team2;
		cout << "\nMatch will be played on  : " << dayS << "/" << monthS << "/" << yearS;
		cout << endl;
	}

	void checkS()
	{
		if (dayS == day && monthS == month && yearS == year)
		{
			cout << "Match already scheduled on that date, kindly enter another date:" << endl;
			cout << "\nSet date of the match\n";
			cout << "Enter Day:";
			cin >> dayS;
			cout << "Enter Month:";
			cin >> monthS;
			cout << "Enter Year:";
			cin >> yearS;
		}
		else
		{
			cout << "\nSet date of the match\n";
			cout << "Enter Day:";
			cin >> dayS;
			cout << "Enter Month:";
			cin >> monthS;
			cout << "Enter Year:";
			cin >> yearS;
		}
		try
		{
			if (dayS < 0 || dayS>30)
			{
				throw exception("DAY ENTRY WRONG PLEASE TRY AGAIN");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
			cout << "Enter Day:";
			cin >> dayS;
		}
		try
		{
			if (monthS < 0 || monthS>12)
			{
				throw exception("MONTH ENTRY WRONG PLEASE TRY AGAIN");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
			cout << "Enter Month:";
			cin >> monthS;
		}
		try
		{
			if (yearS < 0)
			{
				throw exception("YEAR ENTRY WRONG PLEASE TRY AGAIN");
			}
		}
		catch (exception ob)
		{
			cout << endl << ob.what() << endl;
			cout << "Enter Year:";
			cin >> yearS;
		}
	}

	void schdule_match(Team* ptr)
	{
		int a1, a2;
		cout << "\nList of Available Teams: " << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << i <<"." << ptr[i].getT_name() << endl;
		}
		cout << "\nEnter your choice for team 1:";
		cin >> a1;
		team1 = ptr[a1].getT_name();
		cout << "\nEnter your choice for team 2:";
		cin >> a2;
		team2 = ptr[a2].getT_name();
		checkS();
		day = dayS; month = monthS; year = yearS;
	}

	int coinToss(void)
	{
		int randomNumber;
		randomNumber = 1 + rand() % 2;
		return randomNumber;
	}

	void conductmatch()
	{
		int randNum;
		string venue_random[4] = { "Sharjah","kolkata","Karachi","Lahore" };
		string commentator_random[4] = { "Rameez","Duminy","Gawaskar","Arnald" };
		string umpire_random[4] = { "Aleem","Bowden","Shozab","Simon" };
		srand(time(NULL));
		randNum = rand() % 5;
		venue = venue_random[2];
		commentators[0] = venue_random[1];
		umpires[0] = umpire_random[3];
		commentators[1] = venue_random[3];
		umpires[1] = umpire_random[0];

		cout << "Enter Match type: ";
		cin >> matchType;
		cout << "Enter Tournament name: ";
		cin >> tournament_name;
		cout << endl;
		system("CLS");
		cout << "\nGet ready for the Match !!";
		Sleep(2000); system("CLS");
		cout << "\nIts time for the toss ";
		int howManyTimes = 1, randomNumber = 0;
		string headTail = "";
		string choice;
		cout << "\nEnter your choice heads or tails: ";
		(cin >> choice);

		srand((time(0)));
		for (int i = 1; i <= howManyTimes; i++)
		{
			randomNumber = coinToss();
			if (randomNumber == 1)
				headTail = "head";
			else
				headTail = "tail";
			cout << headTail << endl;
		}
		if (team1 == choice)
		{
			cout << team1 << " has won the toss." << endl;
		}
		else
		{
			cout << team2 << " has won the toss." << endl;
		}
		int toss_choice = 0;
		cout << "\nPress 1 to Bat 1st or Press 2 to bowl First: ";
		cin >> toss_choice;

		if (toss_choice == 1)
		{
			srand(time(0));
			team1_score = rand() % 300;
			wickets_team1 = rand() % 10;
			team2_score = rand() % 300;
			wickets_team2 = rand() % 10;
		}
		if (toss_choice == 2)
		{
			srand(time(0));
			team1_score = rand() % 300;
			wickets_team1 = rand() % 10;
			team2_score = rand() % 300;
			wickets_team2 = rand() % 10;
		}
		cout << endl;
		try
		{
			if (toss_choice>1 && toss_choice<2)
			{
				throw exception("TOSS CHOICE WRONG");
			}
		}
		catch (exception obj)
		{
			cout << endl << obj.what() << endl;
		}

		//check for win or loss 
		if (team1_score > team2_score)
		{
			cout << "Details of match:" << endl;
			cout << "Umpires: " << umpires[0] << " and " << umpires[1] << endl;
			cout << "Comentators: " << commentators[0] << " and " << commentators[1] << endl;
			cout << "Venue: " << venue << endl;
			cout << "Date: " << day << "/" << month << "/" << year << endl;
			cout << "Match Type: " << matchType << endl;
			cout << team1 << " has scored the match by " << team1_score - team2_score << " and " << wickets_team1 - wickets_team2 << " wickets" << endl;
			cout << endl << "CONGRATULATION ON WINING " << team1 << endl;
			win = true;
		}
		if (team2_score > team1_score)
		{
			cout << "Details of match:" << endl;
			cout << "Umpires: " << umpires[0] << " and " << umpires[1] << endl;
			cout << "Venue: " << venue << endl;
			cout << "Date: " << day << "/" << month << "/" << year << endl;
			cout << "Match Type: " << matchType << endl;
			cout << team1 << " has scored the match by " << team2_score - team1_score << " and " << wickets_team2 - wickets_team1 << " wickets" << endl;
			cout << endl << "CONGRATULATION ON WINNING " << team2 << endl;
			win = false;
		}
	}
};



Team* ini(Team* obj)
{
	Team* oxj = new Team[50];
	oxj[0].sett_name("Pakistan", "Imran Khan", "Ahmad Butt", "9", "78", "41");
	oxj[0].obj[0].setAvg("78.3"); oxj[0].obj[0].setICC_ranking("2", "5", "6"); oxj[0].obj[0].setMatches_played("96"); oxj[0].obj[0].setNAME("Arbaz Ameer"); oxj[0].obj[0].setShirt_no("69"); oxj[0].obj[0].setTotal_runs("1"); oxj[0].obj[0].setTotal_wickets("64");
	oxj[0].obj[1].setAvg("86.3"); oxj[0].obj[1].setICC_ranking("5", "2", "7"); oxj[0].obj[1].setMatches_played("61"); oxj[0].obj[1].setNAME("Zain-ul-Abideen"); oxj[0].obj[1].setShirt_no("96"); oxj[0].obj[1].setTotal_runs("2"); oxj[0].obj[1].setTotal_wickets("94");
	oxj[0].obj[2].setAvg("81.3"); oxj[0].obj[2].setICC_ranking("1", "2", "3"); oxj[0].obj[2].setMatches_played("63"); oxj[0].obj[2].setNAME("Shaid Afridi"); oxj[0].obj[2].setShirt_no("71"); oxj[0].obj[1].setTotal_runs("63"); oxj[0].obj[2].setTotal_wickets("86");
	oxj[0].obj[3].setAvg("78.3"); oxj[0].obj[3].setICC_ranking("2", "5", "6"); oxj[0].obj[3].setMatches_played("96"); oxj[0].obj[3].setNAME("Hafeez Khan"); oxj[0].obj[3].setShirt_no("63"); oxj[0].obj[3].setTotal_runs("446"); oxj[0].obj[3].setTotal_wickets("64");
	oxj[0].obj[4].setAvg("78.3"); oxj[0].obj[4].setICC_ranking("2", "5", "6"); oxj[0].obj[4].setMatches_played("96"); oxj[0].obj[4].setNAME("Malinga    "); oxj[0].obj[4].setShirt_no("61"); oxj[0].obj[4].setTotal_runs("446"); oxj[0].obj[4].setTotal_wickets("64");
	oxj[0].obj[5].setAvg("78.3"); oxj[0].obj[5].setICC_ranking("2", "5", "6"); oxj[0].obj[5].setMatches_played("96"); oxj[0].obj[5].setNAME("Sarfaraz Khan"); oxj[0].obj[5].setShirt_no("62"); oxj[0].obj[5].setTotal_runs("446"); oxj[0].obj[5].setTotal_wickets("64");
	oxj[0].obj[6].setAvg("78.3"); oxj[0].obj[6].setICC_ranking("2", "5", "6"); oxj[0].obj[6].setMatches_played("96"); oxj[0].obj[6].setNAME("Ali Haider"); oxj[0].obj[6].setShirt_no("64"); oxj[0].obj[6].setTotal_runs("446"); oxj[0].obj[6].setTotal_wickets("64");
	oxj[0].obj[7].setAvg("78.3"); oxj[0].obj[7].setICC_ranking("2", "5", "6"); oxj[0].obj[7].setMatches_played("96"); oxj[0].obj[7].setNAME("Yousaf Pathan"); oxj[0].obj[7].setShirt_no("65"); oxj[0].obj[7].setTotal_runs("446"); oxj[0].obj[7].setTotal_wickets("64");
	oxj[0].obj[8].setAvg("78.3"); oxj[0].obj[8].setICC_ranking("2", "5", "6"); oxj[0].obj[8].setMatches_played("96"); oxj[0].obj[8].setNAME("Umer Akmal"); oxj[0].obj[8].setShirt_no("66"); oxj[0].obj[8].setTotal_runs("446"); oxj[0].obj[8].setTotal_wickets("64");
	oxj[0].obj[9].setAvg("78.3"); oxj[0].obj[9].setICC_ranking("2", "5", "6"); oxj[0].obj[9].setMatches_played("96"); oxj[0].obj[9].setNAME("Taji Khokar"); oxj[0].obj[9].setShirt_no("67"); oxj[0].obj[9].setTotal_runs("446"); oxj[0].obj[9].setTotal_wickets("64");
	oxj[0].obj[10].setAvg("78.3"); oxj[0].obj[10].setICC_ranking("2", "5", "6"); oxj[0].obj[10].setMatches_played("96"); oxj[0].obj[10].setNAME("Usama Tariq"); oxj[0].obj[10].setShirt_no("68"); oxj[0].obj[10].setTotal_runs("446"); oxj[0].obj[10].setTotal_wickets("64");

	oxj[1].sett_name("India", "Narindar Modi", "David Wesly", "2", "178", "56");
	oxj[1].obj[0].setAvg("78.3"); oxj[1].obj[0].setICC_ranking("2", "5", "6"); oxj[1].obj[0].setMatches_played("96"); oxj[1].obj[0].setNAME("Virat Kholi"); oxj[1].obj[0].setShirt_no("69"); oxj[1].obj[0].setTotal_runs("446"); oxj[1].obj[0].setTotal_wickets("64");
	oxj[1].obj[1].setAvg("86.3"); oxj[1].obj[1].setICC_ranking("5", "2", "7"); oxj[1].obj[1].setMatches_played("61"); oxj[1].obj[1].setNAME("Rohit Sharma"); oxj[1].obj[1].setShirt_no("47"); oxj[1].obj[1].setTotal_runs("46"); oxj[1].obj[1].setTotal_wickets("94");
	oxj[1].obj[2].setAvg("81.3"); oxj[1].obj[2].setICC_ranking("1", "2", "3"); oxj[1].obj[2].setMatches_played("63"); oxj[1].obj[2].setNAME("MS Dhoni"); oxj[1].obj[2].setShirt_no("41"); oxj[1].obj[1].setTotal_runs("63"); oxj[1].obj[2].setTotal_wickets("86");
	oxj[1].obj[3].setAvg("78.3"); oxj[1].obj[3].setICC_ranking("2", "5", "6"); oxj[1].obj[3].setMatches_played("96"); oxj[1].obj[3].setNAME("Rishabh Pandey"); oxj[1].obj[3].setShirt_no("42"); oxj[1].obj[3].setTotal_runs("446"); oxj[1].obj[3].setTotal_wickets("64");
	oxj[1].obj[4].setAvg("78.3"); oxj[1].obj[4].setICC_ranking("2", "5", "6"); oxj[1].obj[4].setMatches_played("96"); oxj[1].obj[4].setNAME("KL Rahul"); oxj[1].obj[4].setShirt_no("43"); oxj[1].obj[4].setTotal_runs("446"); oxj[1].obj[4].setTotal_wickets("64");
	oxj[1].obj[5].setAvg("78.3"); oxj[1].obj[5].setICC_ranking("2", "5", "6"); oxj[1].obj[5].setMatches_played("96"); oxj[1].obj[5].setNAME("Hardik Pandya"); oxj[1].obj[5].setShirt_no("44"); oxj[1].obj[5].setTotal_runs("446"); oxj[1].obj[5].setTotal_wickets("64");
	oxj[1].obj[6].setAvg("78.3"); oxj[1].obj[6].setICC_ranking("2", "5", "6"); oxj[1].obj[6].setMatches_played("96"); oxj[1].obj[6].setNAME("Jasprit Bumrah"); oxj[1].obj[6].setShirt_no("45"); oxj[1].obj[6].setTotal_runs("446"); oxj[1].obj[6].setTotal_wickets("64");
	oxj[1].obj[7].setAvg("78.3"); oxj[1].obj[7].setICC_ranking("2", "5", "6"); oxj[1].obj[7].setMatches_played("96"); oxj[1].obj[7].setNAME("Dinesh Kartik"); oxj[1].obj[7].setShirt_no("46"); oxj[1].obj[7].setTotal_runs("446"); oxj[1].obj[7].setTotal_wickets("46");
	oxj[1].obj[8].setAvg("78.3"); oxj[1].obj[8].setICC_ranking("2", "5", "6"); oxj[1].obj[8].setMatches_played("96"); oxj[1].obj[8].setNAME("Kedar Jadhav"); oxj[1].obj[8].setShirt_no("47"); oxj[1].obj[8].setTotal_runs("446"); oxj[1].obj[8].setTotal_wickets("46");
	oxj[1].obj[9].setAvg("78.3"); oxj[1].obj[9].setICC_ranking("2", "5", "6"); oxj[1].obj[9].setMatches_played("96"); oxj[1].obj[9].setNAME("Robin Uthappa"); oxj[1].obj[9].setShirt_no("48"); oxj[1].obj[9].setTotal_runs("446"); oxj[1].obj[9].setTotal_wickets("46");
	oxj[1].obj[10].setAvg("78.3"); oxj[1].obj[10].setICC_ranking("2", "5", "6"); oxj[1].obj[10].setMatches_played("96"); oxj[1].obj[10].setNAME("Muhammad Shami"); oxj[1].obj[10].setShirt_no("99"); oxj[1].obj[10].setTotal_runs("446"); oxj[1].obj[10].setTotal_wickets("46");
	obj = oxj;
	return obj;
}
#endif // !HEADER.h

