#pragma once
#include <SFML\Graphics.hpp>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
class Font {
public:
	sf::Font menufont, scorefont;
	sf::Text menu, score, hp1 , hp2 , mm_title , mm_play , mm_score , mm_exit , mm_credit , a , b , hs_back , hs_song;
	sf::Text hs_left, hs_right;
	sf::Text ss_title, ss_1, ss_2, ss_3, ss_back, ss_diff, ss_diff2;
	sf::Text ap_title, ap_name;
	sf::RectangleShape d, f, j, k;
	sf::Text D, F, J, K;
	sf::String yourname;
	sf::String newhighscore;
	int ap_mode;
	int Score = 0, HP = 15, combo = 0;
	float multiplier = 1;
	Font(int a) {
		menufont.loadFromFile("font/digital-7.ttf");
		scorefont.loadFromFile("font/DTM-Mono.otf");
		D.setFont(scorefont);
		D.setCharacterSize(40);
		D.setFillColor(sf::Color::Black);
		D.setPosition(120, 600);
		D.setString("D");
		F.setFont(scorefont);
		F.setCharacterSize(40);
		F.setFillColor(sf::Color::Black);
		F.setPosition(270, 600);
		F.setString("F");
		J.setFont(scorefont);
		J.setCharacterSize(40);
		J.setFillColor(sf::Color::Black);
		J.setPosition(420, 600);
		J.setString("J");
		K.setFont(scorefont);
		K.setCharacterSize(40);
		K.setFillColor(sf::Color::Black);
		K.setPosition(570, 600);
		K.setString("K	");
		score.setFont(menufont);
		score.setCharacterSize(50);
		score.setFillColor(sf::Color::White);
		score.setPosition(700, 300);
		score.setString("0");
		menu.setFont(scorefont);
		menu.setCharacterSize(50);
		menu.setFillColor(sf::Color::White);
		menu.setPosition(700, 200);
		menu.setString("Score");
		hp1.setFont(menufont);
		hp1.setCharacterSize(50);
		hp1.setFillColor(sf::Color::Cyan);
		hp1.setPosition(50, 25);
		hp1.setString("HP :      / 15");
		hp2.setFont(menufont);
		hp2.setCharacterSize(50);
		hp2.setFillColor(sf::Color::Green);
		hp2.setPosition(150, 25);
		mm_title.setFont(menufont);			mm_play.setFont(menufont);			mm_score.setFont(menufont);			mm_exit.setFont(menufont);
		mm_title.setCharacterSize(70);		mm_play.setCharacterSize(70);		mm_score.setCharacterSize(70);		mm_exit.setCharacterSize(70);
		mm_title.setFillColor(sf::Color::Cyan); mm_play.setFillColor(sf::Color::White); mm_score.setFillColor(sf::Color::White); mm_exit.setFillColor(sf::Color::White);
		mm_title.setPosition(275, 25);		mm_play.setPosition(400, 150);		mm_score.setPosition(340, 300);		mm_exit.setPosition(410, 450);
		mm_title.setString("Playlist Alpha"); mm_play.setString("Play");		mm_score.setString("High Score");	mm_exit.setString("Quit");
		mm_credit.setFont(scorefont);
		mm_credit.setCharacterSize(20);
		mm_credit.setFillColor(sf::Color::White);
		mm_credit.setPosition(10, 650);
		mm_credit.setString("Created by Nontapat \"SaltAtWork\" Sirichuensuwan 61010534");
		hs_back.setFont(menufont);
		hs_back.setCharacterSize(70);
		hs_back.setFillColor(sf::Color::White);
		hs_back.setPosition(750,600);
		hs_back.setString("Back");
		hs_song.setFont(scorefont);					hs_left.setFont(menufont);					hs_right.setFont(menufont);
		hs_song.setCharacterSize(30);				hs_left.setCharacterSize(30);				hs_right.setCharacterSize(30);
		hs_song.setFillColor(sf::Color::Blue);		hs_left.setFillColor(sf::Color::White);		hs_right.setFillColor(sf::Color::White);
		hs_song.setPosition(50, 50);				hs_left.setPosition(40, 50);				hs_right.setPosition(800, 50);
		hs_song.setString("");						hs_left.setString("<-");					hs_right.setString("->");
		ss_title.setFont(menufont);
		ss_title.setCharacterSize(100);
		ss_title.setFillColor(sf::Color::Cyan);
		ss_title.setPosition(50, 50);
		ss_title.setString("Song Selection");
		ss_1.setFont(scorefont);
		ss_1.setCharacterSize(30);
		ss_1.setFillColor(sf::Color::White);
		ss_1.setPosition(50, 200);
		ss_1.setString("Determination Symphony - Roselia");
		ss_2.setFont(scorefont);
		ss_2.setCharacterSize(30);
		ss_2.setFillColor(sf::Color::White);
		ss_2.setPosition(50, 300);
		ss_2.setString("We All Lift Together - Warframe");
		ss_3.setFont(scorefont);
		ss_3.setCharacterSize(30);
		ss_3.setFillColor(sf::Color::White);
		ss_3.setPosition(50, 400);
		ss_3.setString("Brain Power - NOMA");
		ss_diff.setFont(scorefont);
		ss_diff.setCharacterSize(30);
		ss_diff.setFillColor(sf::Color::White);
		ss_diff.setPosition(200, 600);
		ss_diff.setString("Difficulty : ");
		ss_diff2.setFont(scorefont);
		ss_diff2.setCharacterSize(30);
		ss_diff2.setFillColor(sf::Color::White);
		ss_diff2.setPosition(450, 600);
		ss_back.setFont(menufont);
		ss_back.setCharacterSize(70);
		ss_back.setFillColor(sf::Color::White);
		ss_back.setPosition(750, 600);
		ss_back.setString("Back");
		d.setSize(sf::Vector2f(150, 60));	d.setPosition(50, 590);			d.setFillColor(sf::Color::Red);
		f.setSize(sf::Vector2f(150, 60));	f.setPosition(200, 590);		f.setFillColor(sf::Color::Yellow);
		j.setSize(sf::Vector2f(150, 60));	j.setPosition(350, 590);		j.setFillColor(sf::Color::Green);
		k.setSize(sf::Vector2f(150, 60));	k.setPosition(500, 590);		k.setFillColor(sf::Color::Blue);
		ap_title.setFont(menufont);
		ap_title.setCharacterSize(70);
		ap_title.setFillColor(sf::Color::White);
		ap_title.setPosition(50, 150);
		ap_title.setString("Enter Your Name");
		ap_name.setFont(menufont);
		ap_name.setCharacterSize(70);
		ap_name.setFillColor(sf::Color::White);
		ap_name.setPosition(50, 150);
		ap_name.setString("");
	}
	void updateText(sf::RenderWindow &window) {
		std::ostringstream sc;
		sc << Score;
		score.setString(sc.str());
		if (HP >= 15) {
			hp2.setFillColor(sf::Color::Cyan);
			HP = 15;
			multiplier = 1;
		}
		if (HP < 15 && HP > 10) {
			hp2.setFillColor(sf::Color::Green);
			multiplier = 1;
		}
		if (HP <= 10 && HP > 5) {
			hp2.setFillColor(sf::Color::Yellow);
			multiplier = 0.5;
		}
		if (HP <= 5 && HP > 0) {
			hp2.setFillColor(sf::Color::Red);
			multiplier = 0.25;
		}
		if (HP <= 0) {
			hp2.setFillColor(sf::Color::Red);
			HP = 0;
			multiplier = 0.1;
		}
		std::ostringstream hp;
		hp << HP;
		hp2.setString(hp.str());
		window.draw(score);
		window.draw(menu);
		window.draw(hp1);
		window.draw(hp2);
	}
	int scoreUpdate(int check) {
		int c;
		if (check == 2) {
			Score = Score + 200 * multiplier;
			c = 1;
			combo++;
		}
		else if (check == 1) {
			Score = Score + 100 * multiplier;
			c = 1;
			combo++;
		}
		else if (check == 0){
			Score = Score;
			combo = 0;
			c = 1;
			HP--;
		}
		else {
			c = 0;
		}
		if (combo == 5) {
			HP++;
			combo = 0;
			if (HP > 15) {
				HP = 15;
			}
		}
		return c;
	}
	void updateMM(sf::RenderWindow &window, int x, int y) {
		if (x < 530 && x > 400 && y > 175 && y < 220) {
			mm_play.setFillColor(sf::Color::Yellow);
			mm_score.setFillColor(sf::Color::White);
			mm_exit.setFillColor(sf::Color::White);
		}
		else if(x > 340 && x < 625 && y > 325 && y < 370){
			mm_play.setFillColor(sf::Color::White);
			mm_score.setFillColor(sf::Color::Yellow);
			mm_exit.setFillColor(sf::Color::White);
		}
		else if (x > 410 && x < 517 && y > 475 && y < 520) {
			mm_play.setFillColor(sf::Color::White);
			mm_score.setFillColor(sf::Color::White);
			mm_exit.setFillColor(sf::Color::Yellow);
		}
		else {
			mm_play.setFillColor(sf::Color::White);
			mm_score.setFillColor(sf::Color::White);
			mm_exit.setFillColor(sf::Color::White);
		}
		window.draw(mm_exit);
		window.draw(mm_title);
		window.draw(mm_play);
		window.draw(mm_score);
		window.draw(mm_credit);
	}
	void HighScore(sf::RenderWindow &window,int x) {
		std::vector<std::pair<int, std::string>> scoreboard;
		std::ofstream myFile;
		std::ifstream loadFile;
		if (x % 3 == 1) {
			loadFile.open("highscore/highscore01.txt");
			hs_song.setString("Determination Symphony - Roselia");
			hs_song.setFillColor(sf::Color::Blue);
			hs_song.setPosition(150, 50);
			scoreboard.clear();
		}
		else if (x % 3 == 2) {
			loadFile.open("highscore/highscore02.txt");
			hs_song.setString("We All Lift Together - Warframe");
			hs_song.setFillColor(sf::Color::Magenta);
			hs_song.setPosition(150, 50);
			scoreboard.clear();
		}
		else if (x % 3 == 0) {
			loadFile.open("highscore/highscore03.txt");
			hs_song.setString("Brain Power - NOMA");
			hs_song.setFillColor(sf::Color::Red);
			hs_song.setPosition(150, 50);
			scoreboard.clear();
		}
		while (!loadFile.eof()) {
			std::string tempName;
			int tempScore;
			loadFile >> tempScore >> tempName;
			scoreboard.push_back({ tempScore,tempName });
		}
		loadFile.close();
		sort(scoreboard.begin(), scoreboard.end());
		//myFile.open("highscore01.txt");
		/*for (int i = 4; i >= 0 ; i--) {
			myFile << "\n" << scoreboard[i].first << " " << scoreboard[i].second;
			cout << scoreboard[i].first << " " << scoreboard[i].second << "\n";
		}
		myFile.close();*/
		for (int i = 5; i > 0 ; i--) {
			a.setString(to_string(scoreboard[i-1].first));
			a.setFont(menufont);
			a.setCharacterSize(40);
			a.setPosition(600, 570 - (80 * i));     
			window.draw(a);                          
			b.setString(scoreboard[i-1].second);
			b.setFont(scorefont);                        
			b.setCharacterSize(40);                   
			b.setPosition(150, 570 - (80 * i));      
			window.draw(b);                           
		}
		window.draw(hs_song);
	}
	int SetHighScore(int x,string name,int score) {
		std::vector<std::pair<int, std::string>> scoreboard;
		std::ofstream myFile;
		std::ifstream loadFile;
		if (x == 1) {
			myFile.open("highscore/highscore01.txt", ios::out | ios::app);
		}
		else if (x == 2) {
			myFile.open("highscore/highscore02.txt", ios::out | ios::app);
		}
		else if (x == 3) {
			myFile.open("highscore/highscore03.txt", ios::out | ios::app);
		}
		myFile << "\n" << score << " " << name;
		myFile.close();
		if (x == 1) {
			loadFile.open("highscore/highscore01.txt", ios::out);
		}
		else if (x == 2) {
			loadFile.open("highscore/highscore02.txt", ios::out);
		}
		else if (x == 3) {
			loadFile.open("highscore/highscore03.txt", ios::out);
		}
		while (!loadFile.eof()) {
			string tempName;
			int tempScore;
			loadFile >> tempScore >> tempName;
			scoreboard.push_back({ tempScore,tempName });
		}
		sort(scoreboard.begin(), scoreboard.end());
		loadFile.close();
		if (x == 1) {
			myFile.open("highscore/highscore01.txt", ios::out);
		}
		else if (x == 2) {
			myFile.open("highscore/highscore02.txt", ios::out);
		}
		else if (x == 3) {
			myFile.open("highscore/highscore03.txt", ios::out);
		}
		int count = 5;
		for (int i = scoreboard.size() - 1; count > 0; i--) {
			myFile << scoreboard[i].first << " " << scoreboard[i].second;
			if (count > 1) {
				myFile << "\n";
			}
			count--;
		}
		myFile.close();
		return 0;
	}
	void HighScoreBack(sf::RenderWindow &window, int x, int y) {
		if (x > 750 && x < 875 && y > 600 && y < 700) {
			hs_back.setFillColor(sf::Color::Yellow);
			hs_left.setFillColor(sf::Color::White);
			hs_right.setFillColor(sf::Color::White);
		}
		else if (x > 40 && x < 70 && y > 50 && y < 80) {
			hs_back.setFillColor(sf::Color::White);
			hs_left.setFillColor(sf::Color::Yellow);
			hs_right.setFillColor(sf::Color::White);
		}
		else if (x > 800 && x < 830 && y > 50 && y < 80) {
			hs_back.setFillColor(sf::Color::White);
			hs_left.setFillColor(sf::Color::White);
			hs_right.setFillColor(sf::Color::Yellow);
		}
		else {
			hs_back.setFillColor(sf::Color::White);
			hs_left.setFillColor(sf::Color::White);
			hs_right.setFillColor(sf::Color::White);
		}
		window.draw(hs_back);
		window.draw(hs_left);
		window.draw(hs_right);
	}
	void SongSelection(sf::RenderWindow &window,int x, int y) {
		if (x > 750 && x < 875 && y > 600 && y < 700) {
			ss_back.setFillColor(sf::Color::Yellow);
			ss_1.setFillColor(sf::Color::White);
			ss_2.setFillColor(sf::Color::White);
			ss_3.setFillColor(sf::Color::White);
			ss_diff2.setFillColor(sf::Color::White);
			ss_diff2.setString("");
		}
		else if (x > 50 && x < 630 && y > 200 && y < 230) {
			ss_back.setFillColor(sf::Color::White);
			ss_1.setFillColor(sf::Color::Blue);
			ss_2.setFillColor(sf::Color::White);
			ss_3.setFillColor(sf::Color::White);
			ss_3.setFillColor(sf::Color::White);
			ss_diff2.setFillColor(sf::Color::Yellow);
			ss_diff2.setString("Medium");
		}
		else if (x > 50 && x < 600 && y > 300 && y < 330) {
			ss_back.setFillColor(sf::Color::White);
			ss_1.setFillColor(sf::Color::White);
			ss_2.setFillColor(sf::Color::Magenta);
			ss_3.setFillColor(sf::Color::White);
			ss_diff2.setFillColor(sf::Color::Green);
			ss_diff2.setString("Easy");
		}
		else if (x > 50 && x < 375 && y > 400 && y < 430) {
			ss_back.setFillColor(sf::Color::White);
			ss_1.setFillColor(sf::Color::White);
			ss_2.setFillColor(sf::Color::White);
			ss_3.setFillColor(sf::Color::Red);
			ss_diff2.setFillColor(sf::Color::Red);
			ss_diff2.setString("Hard");
		}
		else {
			ss_back.setFillColor(sf::Color::White);
			ss_1.setFillColor(sf::Color::White);
			ss_2.setFillColor(sf::Color::White);
			ss_3.setFillColor(sf::Color::White);
			ss_diff2.setFillColor(sf::Color::White);
			ss_diff2.setString("");
		}
		window.draw(ss_title);
		window.draw(ss_1);
		window.draw(ss_2);
		window.draw(ss_3);
		window.draw(ss_diff);
		window.draw(ss_diff2);
		window.draw(ss_back);
	}
	void BorderKey(sf::RenderWindow &window) {
		window.draw(d);
		window.draw(D);
		window.draw(f);
		window.draw(F);
		window.draw(j);
		window.draw(J);
		window.draw(k);
		window.draw(K);
	}
private:
	
};