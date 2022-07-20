#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Note.h"
#include "Font.h"
#include "main.h"
#include "Song.h"
#include "Song2.h"
#include "Song3.h"
int v = 0.3, a, Score = 0, check = 3, HitStat = 3, Hp, b, combo, c, Time ,old , mouselocx , mouselocy , mode = 0;
long int Songtime;
int check1 = 0, check2 = 0, check3 = 0, check4 = 0, check5 = 0, played = 0, lastbeat, hs = 9, songnum = 0;
int lastpress1, lastpress2, lastpress3, lastpress4;
bool Beat;
int main()
{
	srand(time(NULL));
	sf::RenderWindow window(sf::VideoMode(900, 675), "Playlist Alpha");
	Font font(1);
	//Gameplay
	std::vector<Note1> note1;	Note1 n1("a");
	std::vector<Note2> note2;	Note2 n2("a");
	std::vector<Note3> note3;	Note3 n3("a");
	std::vector<Note4> note4;	Note4 n4("a");
	std::vector<Note5> note5;	Note5 n5("a");
	Border border(1);
	Song1 song1("play");
	Song2 song2("play");
	Song3 song3("play");
	Line line("a");
	Effect effect(4);
	sf::String yourname;
	sf::Text player,hs_back;
	sf::Font menufont,scorefont;
	menufont.loadFromFile("font/digital-7.ttf");
	scorefont.loadFromFile("font/DTM-Mono.otf");
	hs_back.setFont(menufont);
	hs_back.setCharacterSize(50);
	hs_back.setFillColor(sf::Color::White);
	hs_back.setPosition(50, 150);
	hs_back.setString("Enter Your Name");
	sf::Clock timer;
	window.setFramerateLimit(60);
	while (window.isOpen())
	{
		sf::Event event;
		if (mode == 0) {
			mouselocx = sf::Mouse::getPosition(window).x;
			mouselocy = sf::Mouse::getPosition(window).y;
			window.clear();
			font.updateMM(window, mouselocx, mouselocy);
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					window.close();
				if (event.type == sf::Event::MouseButtonPressed) {
					if (mouselocx < 530 && mouselocx > 400 && mouselocy > 175 && mouselocy < 220) {
						mode = 1;
						note1.clear();
						note2.clear();
						note3.clear();
						note4.clear();
						font.Score = 0;
						font.HP = 15;
						lastbeat = 0;
					}
					else if (mouselocx > 340 && mouselocx < 625 && mouselocy > 325 && mouselocy < 370) {
						mode = 3;
					}
					else if (mouselocx > 410 && mouselocx < 517 && mouselocy > 475 && mouselocy < 520) {
						window.close();
					}
				}
			}
			printf("%d %d\n", mouselocx, mouselocy);
		}
		else if (mode == 1) {
			mouselocx = sf::Mouse::getPosition(window).x;
			mouselocy = sf::Mouse::getPosition(window).y;
			window.clear();
			font.SongSelection(window, mouselocx, mouselocy);
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					window.close();
				if (event.type == sf::Event::MouseButtonPressed) {
					if (mouselocx > 750 && mouselocx < 900 && mouselocy > 600 && mouselocy < 800) {
						mode = 0;
					}
					else if (mouselocx > 50 && mouselocx < 630 && mouselocy > 200 && mouselocy < 230) {
						mode = 2;
						songnum = 1;
					}
					else if (mouselocx > 50 && mouselocx < 600 && mouselocy > 300 && mouselocy < 330) {
						mode = 2;
						songnum = 2;
					}
					else if (mouselocx > 50 && mouselocx < 375 && mouselocy > 400 && mouselocy < 430) {
						mode = 2;
						songnum = 3;
					}
				}
			}
			printf("%d %d\n", mouselocx, mouselocy);
		}
		else if (mode == 2) {
			if (songnum == 1 && played != 1) {
				song1.PlaySong();
				played = 1;
			}
			else if (songnum == 2 && played != 1) {
				song2.PlaySong();
				played = 1;
			}
			else if (songnum == 3 && played != 1) {
				song3.PlaySong();
				played = 1;
			}
			//Time = timer.getElapsedTime().asMilliseconds() / 500;
			if (songnum == 1) {
				Songtime = song1.song1.getPlayingOffset().asMilliseconds();
				if (Songtime + 870 < 40000) {
					Beat = song1.checkBeat1(Songtime);
				}
				else if (Songtime + 870 >= 40000 && Songtime + 870 < 75000) {
					Beat = song1.checkBeat2(Songtime);
				}
				else if (Songtime + 870 >= 75000 && Songtime + 870 < 104000) {
					Beat = song1.checkBeat3(Songtime);
				}
				else if (Songtime + 870 >= 104000) {
					Beat = song1.checkBeat4(Songtime);
				}
				if (song1.song1.getStatus() == sf::Music::Status::Stopped) {
					played = 0;
					mode = 4;
					yourname = "";
				}
			}
			else if (songnum == 2) {
				Songtime = song2.song2.getPlayingOffset().asMilliseconds();
				if (Songtime + 860 < 45000) {
					Beat = song2.checkBeat1(Songtime);
				}
				else if (Songtime + 860 >= 45000 && Songtime + 860 < 80000) {
					Beat = song2.checkBeat2(Songtime);
				}
				else if (Songtime + 860 >= 80000 && Songtime + 860 < 110000) {
					Beat = song2.checkBeat3(Songtime);
				}
				else if (Songtime + 860 >= 110000) {
					Beat = song2.checkBeat4(Songtime);
				}
				if (song2.song2.getStatus() == sf::Music::Status::Stopped) {
					played = 0;
					mode = 4;
					yourname = "";
				}
			}
			else if (songnum == 3) {
				Songtime = song3.song3.getPlayingOffset().asMilliseconds();
				if (Songtime + 870 < 30100) {
					Beat = song3.checkBeat1(Songtime);
				}
				else if (Songtime + 870 >= 30100 && Songtime + 870 < 60100) {
					Beat = song3.checkBeat2(Songtime);
				}
				else if (Songtime + 870 >= 60100 && Songtime + 870 < 80000) {
					Beat = song3.checkBeat3(Songtime);
				}
				else if (Songtime + 870 >= 80000 && Songtime + 870 < 99900) {
					Beat = song3.checkBeat4(Songtime);
				}
				else {
					Beat = song3.checkBeat5(Songtime);
				}
				if (song3.song3.getStatus() == sf::Music::Status::Stopped) {
					played = 0;
					mode = 4;
					yourname = "";
				}
			}
			if (Beat) {
				b = rand() % 4;
				if (b == 0 && Songtime - lastbeat > 40) {
					note1.push_back(n1);
					lastbeat = Songtime;
					//printf("%d\n", Songtime);
				}
				else if (b == 1 && Songtime - lastbeat > 40) {
					note2.push_back(n2);
					lastbeat = Songtime;
					//printf("%d\n", Songtime);
				}
				else if (b == 2 && Songtime - lastbeat > 40) {
					note3.push_back(n3);
					lastbeat = Songtime;
					//printf("%d\n", Songtime);
				}
				else if (b == 3 && Songtime - lastbeat > 40) {
					note4.push_back(n4);
					lastbeat = Songtime;
					//printf("%d\n", Songtime);
				}
			}
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
				if (event.type == sf::Event::KeyPressed)
				{
					HitStat = 3;
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
						for (int i = 0; i < note1.size(); i++) {
							HitStat = note1[i].checkNote('D');
							if (HitStat != 3) {
								note1.erase(note1.begin() + i);
								break;
							}
						}
						check = font.scoreUpdate(HitStat);
						lastpress1 = 10;
					}
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::F)) {
						for (int i = 0; i < note2.size(); i++) {
							HitStat = note2[i].checkNote('F');
							if (HitStat != 3) {
								note2.erase(note2.begin() + i);
								break;
							}
						}
						check = font.scoreUpdate(HitStat);
						lastpress2 = 10;
					}
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::J)) {
						for (int i = 0; i < note3.size(); i++) {
							HitStat = note3[i].checkNote('J');
							if (HitStat != 3) {
								note3.erase(note3.begin() + i);
								break;
							}
						}
						check = font.scoreUpdate(HitStat);
						lastpress3 = 10;
					}
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::K)) {
						for (int i = 0; i < note4.size(); i++) {
							HitStat = note4[i].checkNote('K');
							if (HitStat != 3) {
								note4.erase(note4.begin() + i);
								break;
							}
						}
						check = font.scoreUpdate(HitStat);
						lastpress4 = 10;
					}
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num1)) {
						mode = 0;
						yourname = "";
						song1.song1.stop();
						song2.song2.stop();
						song3.song3.stop();
						played = 0;
					}
				}
			}
			//printf("%d\n",Songtime);
			window.clear();
			line.drawLine(window);
			for (int i = 0; i < note1.size(); i++) {
				//note1[i].drawNote1(window);
				check1 = font.scoreUpdate(note1[i].updateNote1(0));
				note1[i].drawNote1(window);
				if (check1 == 1) {
					note1.erase(note1.begin() + i);
					check1 = 0;
				}
			}
			for (int i = 0; i < note2.size(); i++) {
				//note2[i].drawNote2(window);
				check2 = font.scoreUpdate(note2[i].updateNote2(0));
				note2[i].drawNote2(window);
				if (check2 == 1) {
					note2.erase(note2.begin() + i);
					check2 = 0;
				}
			}
			for (int i = 0; i < note3.size(); i++) {
				//note3[i].drawNote3(window);
				check3 = font.scoreUpdate(note3[i].updateNote3(0));
				note3[i].drawNote3(window);
				if (check3 == 1) {
					note3.erase(note3.begin() + i);
					check3 = 0;
				}
			}
			for (int i = 0; i < note4.size(); i++) {
				//note4[i].drawNote4(window);
				check4 = font.scoreUpdate(note4[i].updateNote4(0));
				note4[i].drawNote4(window);
				if (check4 == 1) {
					note4.erase(note4.begin() + i);
					check4 = 0;
				}
			}
			font.updateText(window);
			effect.updateEffect(lastpress1, lastpress2, lastpress3, lastpress4, window);
			lastpress1--; lastpress2--; lastpress3--; lastpress4--;
			font.BorderKey(window);
			border.drawBorder(window);
			
		}
		else if (mode == 3) {
			mouselocx = sf::Mouse::getPosition(window).x;
			mouselocy = sf::Mouse::getPosition(window).y;
			window.clear();
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					window.close();
				if (event.type == sf::Event::MouseButtonPressed) {
					if (mouselocx > 750 && mouselocx < 875 && mouselocy > 600 && mouselocy < 700) {
						mode = 0;
					}
					else if (mouselocx > 40 && mouselocx < 70 && mouselocy > 50 && mouselocy < 80) {
						hs--;
					}
					else if (mouselocx > 800 && mouselocx < 830 && mouselocy > 50 && mouselocy < 80) {
						hs++;
					}
				}
			}
			font.HighScore(window, hs);
			font.HighScoreBack(window, mouselocx, mouselocy);
		}
		else if (mode == 4) {
			window.clear();
			player.setString(yourname);
			window.draw(player);
			window.draw(hs_back);
			sf::Event event;
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::TextEntered) {
					if (event.text.unicode == '\b' && yourname.getSize() > 0) {
						yourname.erase(yourname.getSize() - 1, 1);
						player.setFont(scorefont);
						player.setString(yourname);
					}
					else if(event.text.unicode == '\b' != yourname.getSize() >= 0){
						string name;
						yourname += static_cast<char>(event.text.unicode);
						name += static_cast<char>(event.text.unicode);
						if ((event.text.unicode < 128) && (yourname.getSize() < 10)) {
							player.setFont(scorefont);
							player.setString(yourname);
						}
					}
					player.setCharacterSize(60);
					player.setPosition(100.0f, 300.0f);  
				}
				else if (event.type == sf::Event::KeyPressed) {
					if (event.key.code == sf::Keyboard::Return) {
						player.setString(yourname);
						font.SetHighScore(songnum,yourname,font.Score);
						mode = 0;
					}
				}
				if (event.type == sf::Event::Closed)
					window.close();
			}
		}
		window.display();
	}
}
