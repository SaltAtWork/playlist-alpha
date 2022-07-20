#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include "Font.h"
class Note1 {
public:
	sf::Texture noteTexture;
	sf::Sprite note1;
	Note1(std::string img) {
		noteTexture.loadFromFile("image/note.png");
		note1.setTexture(noteTexture);note1.setTextureRect(sf::IntRect(0, 0, 150, 20));
		note1.setPosition(50, 100);
	}
	int updateNote1(int a) {
		int c = 3;
		if (a == 0) {
			loc = note1.getPosition().y;
			if (loc <= 600) {
				note1.move(0, 8);
			}
			if (loc > 600 && loc != 2000) {
				note1.setPosition(2000, 2000);
				c = 0;
			}
		}
		return c;
	}
	void drawNote1(sf::RenderWindow &window) {
		window.draw(note1);
	}
	int checkNote(char hit) {
		int point;
		if (hit == 'D') {
			if (note1.getPosition().y <= 600 && note1.getPosition().y >= 550) {
				point = 2;
				note1.setPosition(2000, 2000);
			}
			else if (note1.getPosition().y < 550 && note1.getPosition().y >= 480) {
				point = 1;
				note1.setPosition(2000, 2000);
			}
			else if (note1.getPosition().y > 600) {
				point = 0;
				note1.setPosition(2000, 2000);
			}
			else {
				point = 3;
			}
		}
		return point;
	}
private:
	int loc;
};
class Note2 {
public:
	sf::Texture noteTexture;
	sf::Sprite note2;
	Note2(std::string img) {
		noteTexture.loadFromFile("image/note.png");
		note2.setTexture(noteTexture); note2.setTextureRect(sf::IntRect(0, 20, 150, 20));
		note2.setPosition(200, 100);
	}
	int updateNote2(int a) {
		int c = 3;
		if (a == 0) {
			loc = note2.getPosition().y;
			if (loc <= 600) {
				note2.move(0, 8);
			}
			if (loc > 600 && loc != 2000) {
				note2.setPosition(2000, 2000);
				c = 0;
			}
		}
		return c;
	}
	void drawNote2(sf::RenderWindow &window) {
		window.draw(note2);
	}
	int checkNote(char hit) {
		int point;
		if (hit == 'F') {
			if (note2.getPosition().y <= 600 && note2.getPosition().y >= 550) {
				point = 2;
				note2.setPosition(2000, 2000);
			}
			else if (note2.getPosition().y < 550 && note2.getPosition().y >= 480) {
				point = 1;
				note2.setPosition(2000, 2000);
			}
			else if (note2.getPosition().y > 600) {
				point = 0;
				note2.setPosition(2000, 2000);
			}
			else {
				point = 3;
			}
		}
		return point;
	}
private:
	int loc;
};
class Note3 {
public:
	sf::Texture noteTexture;
	sf::Sprite note3;
	Note3(std::string img) {
		noteTexture.loadFromFile("image/note.png");
		note3.setTexture(noteTexture); note3.setTextureRect(sf::IntRect(0, 40, 150, 20));
		note3.setPosition(350, 100);
	}
	int updateNote3(int a) {
		int c = 3;
		if (a == 0) {
			loc = note3.getPosition().y;
			if (loc <= 600) {
				note3.move(0, 8);
			}
			if (loc > 600 && loc != 2000) {
				note3.setPosition(2000, 2000);
				c = 0;
			}
		}
		return c;
	}
	void drawNote3(sf::RenderWindow &window) {
		window.draw(note3);
	}
	int checkNote(char hit) {
		int point;
		if (hit == 'J') {
			if (note3.getPosition().y <= 600 && note3.getPosition().y >= 550) {
				point = 2;
				note3.setPosition(2000, 2000);
			}
			else if (note3.getPosition().y < 550 && note3.getPosition().y >= 480) {
				point = 1;
				note3.setPosition(2000, 2000);
			}
			else if (note3.getPosition().y > 600) {
				point = 0;
				note3.setPosition(2000, 2000);
			}
			else {
				point = 3;
			}
		}
		return point;
	}
private:
	int loc;
};
class Note4 {
public:
	sf::Texture noteTexture;
	sf::Sprite note4;
	Note4(std::string img) {
		noteTexture.loadFromFile("image/note.png");
		note4.setTexture(noteTexture); note4.setTextureRect(sf::IntRect(0, 60, 150, 20));
		note4.setPosition(500, 100);
	}
	int updateNote4(int a) {
		int c = 3;
		if (a == 0) {
			loc = note4.getPosition().y;
			if (loc <= 600) {
				note4.move(0, 8);
			}
			if (loc > 600 && loc != 2000) {
				note4.setPosition(2000, 2000);
				c = 0;
			}
		}
		return c;
	}
	void drawNote4(sf::RenderWindow &window) {
		window.draw(note4);
	}
	int checkNote(char hit) {
		int point;
		if (hit == 'K') {
			if (note4.getPosition().y <= 600 && note4.getPosition().y >= 550) {
				point = 2;
				note4.setPosition(2000, 2000);
			}
			else if (note4.getPosition().y < 550 && note4.getPosition().y >= 480) {
				point = 1;
				note4.setPosition(2000, 2000);
			}
			else if (note4.getPosition().y > 600) {
				point = 0;
				note4.setPosition(2000, 2000);
			}
			else {
				point = 3;
			}
		}
		return point;
	}
private:
	int loc;
};
class Note5 {
public:
	sf::Texture noteTexture;
	sf::Sprite note5;
	Note5(std::string img) {
		noteTexture.loadFromFile("image/note.png");
		note5.setTexture(noteTexture); note5.setTextureRect(sf::IntRect(150, 0, 600, 20));
		note5.setPosition(50, 100);
	}
	int updateNote5(int a) {
		int c = 3;
		if (a == 0) {
			loc = note5.getPosition().y;
			if (loc <= 600) {
				note5.move(0, 8);
			}
			if (loc > 600 && loc != 2000) {
				loc = 100;
				note5.setPosition(2000, 2000);
				c = 0;
			}
		}
		return c;
	}
	void drawNote5(sf::RenderWindow &window) {
		window.draw(note5);
	}
	int checkNote(char hit) {
		int point;
		if (hit == ' ') {
			if (note5.getPosition().y <= 600 && note5.getPosition().y >= 550) {
				point = 2;
				note5.setPosition(2000, 2000);
			}
			else if (note5.getPosition().y < 550 && note5.getPosition().y >= 480) {
				point = 1;
				note5.setPosition(2000, 2000);
			}
			else if (note5.getPosition().y > 600 && note5.getPosition().y != 2000) {
				point = 0;
				note5.setPosition(2000, 2000);
			}
			else {
				point = 3;
			}
		}
		return point;
	}
private:
	int loc;
};
class Line{
public:
	sf::Texture noteTexture;
	sf::Sprite line;
	Line(std::string img) {
		noteTexture.loadFromFile("image/note.png");
		line.setTexture(noteTexture); line.setTextureRect(sf::IntRect(150, 20, 600, 20));
		line.setPosition(50, 570);
	}
	void drawLine(sf::RenderWindow &window) {
		window.draw(line);
	}
private:
};
class Border {
public:
	sf::RectangleShape head, line1, line2, line3, line4, line5, bottom;
	Border(int a) {
		head.setSize(sf::Vector2f(600, 1));		head.setPosition(50, 100);
		line1.setSize(sf::Vector2f(550, 1));	line1.rotate(90);			line1.setPosition(50, 100);
		line2.setSize(sf::Vector2f(550, 1));	line2.rotate(90);			line2.setPosition(200, 100);
		line3.setSize(sf::Vector2f(550, 1));	line3.rotate(90);			line3.setPosition(350, 100);
		line4.setSize(sf::Vector2f(550, 1));	line4.rotate(90);			line4.setPosition(500, 100);
		line5.setSize(sf::Vector2f(550, 1));	line5.rotate(90);			line5.setPosition(650, 100);
		bottom.setSize(sf::Vector2f(600, 1));	bottom.setPosition(50, 650);
	}
	void drawBorder(sf::RenderWindow &window) {
		window.draw(head);
		window.draw(line1);
		window.draw(line2);
		window.draw(line3);
		window.draw(line4);
		window.draw(line5);
		window.draw(bottom);
	}
};
class Effect {
public:
	sf::Texture effecttexture;
	sf::Sprite effect1, effect2, effect3, effect4;
	Effect(int a) {
		effecttexture.loadFromFile("image/note.png");
		effect1.setTexture(effecttexture); effect1.setTextureRect(sf::IntRect(0, 80, 150, 60)); effect1.setPosition(50, 510);
		effect2.setTexture(effecttexture); effect2.setTextureRect(sf::IntRect(150, 80, 150, 60)); effect2.setPosition(200, 510);
		effect3.setTexture(effecttexture); effect3.setTextureRect(sf::IntRect(300, 80, 150, 60)); effect3.setPosition(350, 510);
		effect4.setTexture(effecttexture); effect4.setTextureRect(sf::IntRect(450, 80, 150, 60)); effect4.setPosition(500, 510);
	}
	void updateEffect(int a, int b, int c, int d, sf::RenderWindow &window) {
		if (a > 0) {
			window.draw(effect1);
		}
		if (b > 0) {
			window.draw(effect2);
		}
		if (c > 0) {
			window.draw(effect3);
		}
		if (d > 0) {
			window.draw(effect4);
		}
	}
};