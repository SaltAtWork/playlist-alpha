#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Font.h"
class Song1 {
public:
	
	sf::Music song1;
	Song1(std::string play) {
		song1.openFromFile("audio/Determination_Symphony.ogg");
		song1.setVolume(80);
	}
	void PlaySong(void) {
		song1.play();
		gone = 0;
	}
	bool checkBeat1(long int time) {
		int check = 0;
		time = time + 870;
		if (time >= 2520 && time <= 2540 && gone <= 0) {
			check = 1;
			gone += 1;
		}
		else if (time >= 2840 && time <= 2860 && gone <= 1) {
			check = 1;
			gone += 1;
		}
		else if (time >= 3160 && time <= 3180 && gone <= 2) {
			check = 1;
			gone += 1;
		}
		else if (time >= 3460 && time <= 3480 && gone <= 3) {
			check = 1;
			gone += 1;
		}
		else if (time >= 3780 && time <= 3800 && gone <= 4) {
			check = 1;
			gone += 1;
		}
		else if (time >= 4100 && time <= 4120 && gone <= 5) {
			check = 1;
			gone += 1;
		}
		else if (time >= 4410 && time <= 4430 && gone <= 6) {
			check = 1;
			gone += 1;
		}
		else if (time >= 5050 && time <= 5070 && gone <= 7) {
			check = 1;
			gone += 1;
		}
		else if (time >= 5370 && time <= 5390 && gone <= 8) {
			check = 1;
			gone += 1;
		}
		else if (time >= 5690 && time <= 5710 && gone <= 9) {
			check = 1;
			gone += 1;
		}
		else if (time >= 6000 && time <= 6020 && gone <= 10) {
			check = 1;
			gone += 1;
		}
		else if (time >= 7410 && time <= 7430 && gone <= 11) {
			check = 1;
			gone += 1;
		}
		else if (time >= 7880 && time <= 7900 && gone <= 12) {
			check = 1;
			gone += 1;
		}
		else if (time >= 8520 && time <= 8540 && gone <= 13) {
			check = 1;
			gone += 1;
		}
		else if (time >= 9150 && time <= 9170 && gone <= 14) {
			check = 1;
			gone += 1;
		}
		else if (time >= 9460 && time <= 9480 && gone <= 15) {
			check = 1;
			gone += 1;
		}
		else if (time >= 9790 && time <= 9810 && gone <= 16) {
			check = 1;
			gone += 1;
		}
		else if (time >= 9940 && time <= 9960 && gone <= 17) {
			check = 1;
			gone += 1;
		}
		else if (time >= 10420 && time <= 10440 && gone <= 18) {
			check = 1;
			gone += 1;
		}
		else if (time >= 11050 && time <= 11070 && gone <= 19) {
			check = 1;
			gone += 1;
		}
		else if (time >= 11680 && time <= 11700 && gone <= 20) {
			check = 1;
			gone += 1;
		}
		else if (time >= 12000 && time <= 12020 && gone <= 21) {
			check = 1;
			gone += 1;
		}
		else if (time >= 12950 && time <= 12970 && gone <= 22) {
			check = 1;
			gone += 1;
		}
		else if (time >= 13570 && time <= 13590 && gone <= 23) {
			check = 1;
			gone += 1;
		}
		else if (time >= 14190 && time <= 14210 && gone <= 24) {
			check = 1;
			gone += 1;
		}
		else if (time >= 14840 && time <= 14860 && gone <= 25) {
			check = 1;
			gone += 1;
		}
		else if (time >= 15010 && time <= 15030 && gone <= 26) {
			check = 1;
			gone += 1;
		}
		else if (time >= 15470 && time <= 15490 && gone <= 27) {
			check = 1;
			gone += 1;
		}
		else if (time >= 16100 && time <= 16120 && gone <= 28) {
			check = 1;
			gone += 1;
		}
		else if (time >= 16740 && time <= 16760 && gone <= 29) {
			check = 1;
			gone += 1;
		}
		else if (time >= 17050 && time <= 17070 && gone <= 30) {
			check = 1;
			gone += 1;
		}
		else if (time >= 17360 && time <= 17380 && gone <= 31) {
			check = 1;
			gone += 1;
		}
		else if (time >= 17530 && time <= 17550 && gone <= 32) {
			check = 1;
			gone += 1;
		}
		else if (time >= 17990 && time <= 18010 && gone <= 33) {
			check = 1;
			gone += 1;
		}
		else if (time >= 18630 && time <= 18650 && gone <= 34) {
			check = 1;
			gone += 1;
		}
		else if (time >= 19260 && time <= 19280 && gone <= 35) {
			check = 1;
			gone += 1;
		}
		else if (time >= 19890 && time <= 19910 && gone <= 36) {
			check = 1;
			gone += 1;
		}
		else if (time >= 20050 && time <= 20070 && gone <= 37) {
			check = 1;
			gone += 1;
		}
		else if (time >= 20370 && time <= 20390 && gone <= 38) {
			check = 1;
			gone += 1;
		}
		else if (time >= 20520 && time <= 20540 && gone <= 39) {
			check = 1;
			gone += 1;
		}
		else if (time >= 21150 && time <= 21170 && gone <= 40) {
			check = 1;
			gone += 1;
		}
		else if (time >= 21790 && time <= 21810 && gone <= 41) {
			check = 1;
			gone += 1;
		}
		else if (time >= 22110 && time <= 22130 && gone <= 42) {
			check = 1;
			gone += 1;
		}
		else if (time >= 22420 && time <= 22440 && gone <= 43) {
			check = 1;
			gone += 1;
		}
		else if (time >= 23050 && time <= 23070 && gone <= 44) {
			check = 1;
			gone += 1;
		}
		else if (time >= 23370 && time <= 23390 && gone <= 45) {
			check = 1;
			gone += 1;
		}
		else if (time >= 23680 && time <= 23700 && gone <= 46) {
			check = 1;
			gone += 1;
		}
		else if (time >= 24010 && time <= 24030 && gone <= 47) {
			check = 1;
			gone += 1;
		}
		else if (time >= 24310 && time <= 24330 && gone <= 48) {
			check = 1;
			gone += 1;
		}
		else if (time >= 24630 && time <= 24650 && gone <= 49) {
			check = 1;
			gone += 1;
		}
		else if (time >= 24950 && time <= 24970 && gone <= 50) {
			check = 1;
			gone += 1;
		}
		else if (time >= 25100 && time <= 25120 && gone <= 51) {
			check = 1;
			gone += 01;
		}
		else if (time >= 25570 && time <= 25590 && gone <= 52) {
			check = 1;
			gone += 1;
		}
		else if (time >= 25890 && time <= 25910 && gone <= 53) {
			check = 1;
			gone += 1;
		}
		else if (time >= 26210 && time <= 26230 && gone <= 54) {
			check = 1;
			gone += 1;
		}
		else if (time >= 26520 && time <= 26540 && gone <= 55) {
			check = 1;
			gone += 1;
		}
		else if (time >= 26840 && time <= 26860 && gone <= 56) {
			check = 1;
			gone += 01;
		}
		else if (time >= 27150 && time <= 27170 && gone <= 57) {
			check = 1;
			gone += 01;
		}
		else if (time >= 27310 && time <= 27330 && gone <= 58) {
			check = 1;
			gone += 1;
		}
		else if (time >= 27620 && time <= 27640 && gone <= 59) {
			check = 1;
			gone += 1;
		}
		else if (time >= 28100 && time <= 28120 && gone <= 60) {
			check = 1;
			gone += 1;
		}
		else if (time >= 28260 && time <= 28280 && gone <= 61) {
			check = 1;
			gone += 1;
		}
		else if (time >= 28580 && time <= 28600 && gone <= 62) {
			check = 1;
			gone += 1;
		}
		else if (time >= 28730 && time <= 28750 && gone <= 63) {
			check = 1;
			gone += 1;
		}
		else if (time >= 29050 && time <= 29070 && gone <= 64) {
			check = 1;
			gone += 1;
		}
		else if (time >= 29200 && time <= 29220 && gone <= 65) {
			check = 1;
			gone += 1;
		}
		else if (time >= 29520 && time <= 29540 && gone <= 66) {
			check = 1;
			gone += 1;
		}
		else if (time >= 29840 && time <= 29860 && gone <= 67) {
			check = 1;
			gone += 1;
		}
		else if (time >= 30310 && time <= 30330 && gone <= 68) {
			check = 1;
			gone += 1;
		}
		else if (time >= 30620 && time <= 30640 && gone <= 69) {
			check = 1;
			gone += 1;
		}
		else if (time >= 31260 && time <= 31280 && gone <= 70) {
			check = 1;
			gone += 1;
		}
		else if (time >= 31890 && time <= 31910 && gone <= 71) {
			check = 1;
			gone += 1;
		}
		else if (time >= 32530 && time <= 32550 && gone <= 72) {
			check = 1;
			gone += 1;
		}
		else if (time >= 32840 && time <= 32840 && gone <= 73) {
			check = 1;
			gone += 1;
		}
		else if (time >= 33000 && time <= 33020 && gone <= 74) {
			check = 1;
			gone += 1;
		}
		else if (time >= 33160 && time <= 33180 && gone <= 75) {
			check = 1;
			gone += 1;
		}
		else if (time >= 33790 && time <= 33810 && gone <= 76) {
			check = 1;
			gone += 1;
		}
		else if (time >= 34420 && time <= 34440 && gone <= 77) {
			check = 1;
			gone += 1;
		}
		else if (time >= 35050 && time <= 35070 && gone <= 78) {
			check = 1;
			gone += 1;
		}
		else if (time >= 35370 && time <= 35390 && gone <= 79) {
			check = 1;
			gone += 1;
		}
		else if (time >= 35530 && time <= 35550 && gone <= 80) {
			check = 1;
			gone += 1;
		}
		else if (time >= 35680 && time <= 35700 && gone <= 81) {
			check = 1;
			gone += 1;
		}
		else if (time >= 36310 && time <= 36330 && gone <= 82) {
			check = 1;
			gone += 1;
		}
		else if (time >= 36940 && time <= 36960 && gone <= 83) {
			check = 1;
			gone += 1;
		}
		else if (time >= 37580 && time <= 37600 && gone <= 84) {
			check = 1;
			gone += 1;
		}
		else if (time >= 37900 && time <= 37920 && gone <= 85) {
			check = 1;
			gone += 1;
		}
		else if (time >= 38060 && time <= 38080 && gone <= 86) {
			check = 1;
			gone += 1;
		}
		else if (time >= 38210 && time <= 38230 && gone <= 87) {
			check = 1;
			gone += 1;
		}
		else if (time >= 38840 && time <= 38860 && gone <= 88) {
			check = 1;
			gone += 1;
		}
		else if (time >= 39000 && time <= 39020 && gone <= 89) {
			check = 1;
			gone += 1;
		}
		else if (time >= 39150 && time <= 39170 && gone <= 90) {
			check = 1;
			gone += 1;
		}
		if (check == 1) {
			printf("%d\n", gone);
			return true;
		}
		return false;
	}
	bool checkBeat2(long int time) {
		int check = 0;
		time = time + 870;
		if (time >= 40100 && time <= 40120 && gone <= 91) {
			check = 1;
			gone += 1;
		}
		else if (time >= 40180 && time <= 40200 && gone <= 92) {
			check = 1;
			gone += 1;
		}
		else if (time >= 40260 && time <= 40280 && gone <= 93) {
			check = 1;
			gone += 1;
		}
		else if (time >= 40330 && time <= 40350 && gone <= 94) {
			check = 1;
			gone += 1;
		}
		else if (time >= 40730 && time <= 40750 && gone <= 95) {
			check = 1;
			gone += 1;
		}
		else if (time >= 41050 && time <= 41070 && gone <= 96) {
			check = 1;
			gone += 1;
		}
		else if (time >= 41370 && time <= 41390 && gone <= 97) {
			check = 1;
			gone += 1;
		}
		else if (time >= 41680 && time <= 41700 && gone <= 98) {
			check = 1;
			gone += 1;
		}
		else if (time >= 41990 && time <= 42010 && gone <= 99) {
			check = 1;
			gone += 1;
		}
		else if (time >= 42320 && time <= 42340 && gone <= 100) {
			check = 1;
			gone += 1;
		}
		else if (time >= 42630 && time <= 42650 && gone <= 101) {
			check = 1;
			gone += 1;
		}
		else if (time >= 42940 && time <= 42960 && gone <= 102) {
			check = 1;
			gone += 1;
		}
		else if (time >= 43260 && time <= 43280 && gone <= 103) {
			check = 1;
			gone += 1;
		}
		else if (time >= 43580 && time <= 43600 && gone <= 104) {
			check = 1;
			gone += 1;
		}
		else if (time >= 43890 && time <= 43910 && gone <= 105) {
			check = 1;
			gone += 1;
		}
		else if (time >= 44210 && time <= 44230 && gone <= 106) {
			check = 1;
			gone += 1;
		}
		else if (time >= 44530 && time <= 44550 && gone <= 107) {
			check = 1;
			gone += 1;
		}
		else if (time >= 44840 && time <= 44860 && gone <= 108) {
			check = 1;
			gone += 1;
		}
		else if (time >= 45260 && time <= 45280 && gone <= 109) {
			check = 1;
			gone += 1;
		}
		else if (time >= 45780 && time <= 45800 && gone <= 110) {
			check = 1;
			gone += 1;
		}
		else if (time >= 46090 && time <= 46110 && gone <= 111) {
			check = 1;
			gone += 1;
		}
		else if (time >= 46420 && time <= 46440 && gone <= 112) {
			check = 1;
			gone += 1;
		}
		else if (time >= 46730 && time <= 46750 && gone <= 113) {
			check = 1;
			gone += 1;
		}
		else if (time >= 47680 && time <= 47700 && gone <= 114) {
			check = 1;
			gone += 1;
		}
		else if (time >= 48000 && time <= 48020 && gone <= 115) {
			check = 1;
			gone += 1;
		}
		else if (time >= 48310 && time <= 48320 && gone <= 116) {
			check = 1;
			gone += 1;
		}
		else if (time >= 48630 && time <= 48650 && gone <= 117) {
			check = 1;
			gone += 1;
		}
		else if (time >= 48940 && time <= 48960 && gone <= 118) {
			check = 1;
			gone += 1;
		}
		else if (time >= 49260 && time <= 49280 && gone <= 119) {
			check = 1;
			gone += 1;
		}
		else if (time >= 49420 && time <= 49440 && gone <= 120) {
			check = 1;
			gone += 1;
		}
		else if (time >= 49810 && time <= 49830 && gone <= 121) {
			check = 1;
			gone += 1;
		}
		else if (time >= 50050 && time <= 50070 && gone <= 122) {
			check = 1;
			gone += 1;
		}
		else if (time >= 50210 && time <= 50230 && gone <= 123) {
			check = 1;
			gone += 1;
		}
		else if (time >= 50520 && time <= 50540 && gone <= 124) {
			check = 1;
			gone += 1;
		}
		else if (time >= 50840 && time <= 50860 && gone <= 125) {
			check = 1;
			gone += 1;
		}
		else if (time >= 51000 && time <= 51020 && gone <= 126) {
			check = 1;
			gone += 1;
		}
		else if (time >= 51320 && time <= 51340 && gone <= 127) {
			check = 1;
			gone += 1;
		}
		else if (time >= 51700 && time <= 51720 && gone <= 128) {
			check = 1;
			gone += 1;
		}
		else if (time >= 52280 && time <= 52300 && gone <= 129) {
			check = 1;
			gone += 1;
		}
		else if (time >= 53060 && time <= 53080 && gone <= 130) {
			check = 1;
			gone += 1;
		}
		else if (time >= 53370 && time <= 53390 && gone <= 131) {
			check = 1;
			gone += 1;
		}
		else if (time >= 54000 && time <= 54020 && gone <= 132) {
			check = 1;
			gone += 1;
		}
		else if (time >= 54540 && time <= 54560 && gone <= 133) {
			check = 1;
			gone += 1;
		}
		else if (time >= 54740 && time <= 54760 && gone <= 134) {
			check = 1;
			gone += 1;
		}
		else if (time >= 54940 && time <= 54960 && gone <= 135) {
			check = 1;
			gone += 1;
		}
		else if (time >= 55150 && time <= 55170 && gone <= 136) {
			check = 1;
			gone += 1;
		}
		else if (time >= 55370 && time <= 55390 && gone <= 137) {
			check = 1;
			gone += 1;
		}
		else if (time >= 55570 && time <= 55590 && gone <= 138) {
			check = 1;
			gone += 1;
		}
		else if (time >= 55730 && time <= 55750 && gone <= 139) {
			check = 1;
			gone += 1;
		}
		else if (time >= 56050 && time <= 56070 && gone <= 140) {
			check = 1;
			gone += 1;
		}
		else if (time >= 56210 && time <= 56230 && gone <= 141) {
			check = 1;
			gone += 1;
		}
		else if (time >= 56530 && time <= 56550 && gone <= 142) {
			check = 1;
			gone += 1;
		}
		else if (time >= 56850 && time <= 56870 && gone <= 143) {
			check = 1;
			gone += 1;
		}
		else if (time >= 57000 && time <= 57020 && gone <= 144) {
			check = 1;
			gone += 1;
		}
		else if (time >= 57310 && time <= 57330 && gone <= 145) {
			check = 1;
			gone += 1;
		}
		else if (time >= 58110 && time <= 58130 && gone <= 146) {
			check = 1;
			gone += 1;
		}
		else if (time >= 58570 && time <= 58590 && gone <= 147) {
			check = 1;
			gone += 1;
		}
		else if (time >= 58730 && time <= 58750 && gone <= 148) {
			check = 1;
			gone += 1;
		}
		else if (time >= 59200 && time <= 59220 && gone <= 149) {
			check = 1;
			gone += 1;
		}
		else if (time >= 59520 && time <= 59540 && gone <= 150) {
			check = 1;
			gone += 1;
		}
		else if (time >= 59830 && time <= 59850 && gone <= 151) {
			check = 1;
			gone += 1;
		}
		else if (time >= 60000 && time <= 60020 && gone <= 152) {
			check = 1;
			gone += 1;
		}
		else if (time >= 60630 && time <= 60650 && gone <= 153) {
			check = 1;
			gone += 1;
		}
		else if (time >= 60940 && time <= 60960 && gone <= 154) {
			check = 1;
			gone += 1;
		}
		else if (time >= 61260 && time <= 61280 && gone <= 155) {
			check = 1;
			gone += 1;
		}
		else if (time >= 61570 && time <= 61590 && gone <= 156) {
			check = 1;
			gone += 1;
		}
		else if (time >= 61890 && time <= 61910 && gone <= 157) {
			check = 1;
			gone += 1;
		}
		else if (time >= 62200 && time <= 62220 && gone <= 158) {
			check = 1;
			gone += 1;
		}
		else if (time >= 62530 && time <= 62550 && gone <= 159) {
			check = 1;
			gone += 1;
		}
		else if (time >= 62840 && time <= 62860 && gone <= 160) {
			check = 1;
			gone += 1;
		}
		else if (time >= 63070 && time <= 63090 && gone <= 161) {
			check = 1;
			gone += 1;
		}
		else if (time >= 63460 && time <= 63480 && gone <= 162) {
			check = 1;
			gone += 1;
		}
		else if (time >= 63950 && time <= 63970 && gone <= 163) {
			check = 1;
			gone += 1;
		}
		else if (time >= 64100 && time <= 64120 && gone <= 164) {
			check = 1;
			gone += 1;
		}
		else if (time >= 64410 && time <= 64430 && gone <= 165) {
			check = 1;
			gone += 1;
		}
		else if (time >= 64730 && time <= 64750 && gone <= 166) {
			check = 1;
			gone += 1;
		}
		else if (time >= 65120 && time <= 65140 && gone <= 167) {
			check = 1;
			gone += 1;
		}
		else if (time >= 65360 && time <= 65380 && gone <= 168) {
			check = 1;
			gone += 1;
		}
		else if (time >= 65680 && time <= 65700 && gone <= 169) {
			check = 1;
			gone += 1;
		}
		else if (time >= 66150 && time <= 66170 && gone <= 170) {
			check = 1;
			gone += 1;
		}
		else if (time >= 66630 && time <= 66650 && gone <= 171) {
			check = 1;
			gone += 1;
		}
		else if (time >= 67100 && time <= 67120 && gone <= 172) {
			check = 1;
			gone += 1;
		}
		else if (time >= 67570 && time <= 67590 && gone <= 173) {
			check = 1;
			gone += 1;
		}
		else if (time >= 67890 && time <= 67910 && gone <= 174) {
			check = 1;
			gone += 1;
		}
		else if (time >= 68210 && time <= 68230 && gone <= 175) {
			check = 1;
			gone += 1;
		}
		else if (time >= 69150 && time <= 69170 && gone <= 176) {
			check = 1;
			gone += 1;
		}
		else if (time >= 69310 && time <= 69330 && gone <= 177) {
			check = 1;
			gone += 1;
		}
		else if (time >= 70090 && time <= 70110 && gone <= 178) {
			check = 1;
			gone += 1;
		}
		else if (time >= 71340 && time <= 71360 && gone <= 179) {
			check = 1;
			gone += 1;
		}
		else if (time >= 71660 && time <= 71680 && gone <= 180) {
			check = 1;
			gone += 1;
		}
		else if (time >= 72140 && time <= 72160 && gone <= 181) {
			check = 1;
			gone += 1;
		}
		else if (time >= 72440 && time <= 72460 && gone <= 182) {
			check = 1;
			gone += 1;
		}
		else if (time >= 72760 && time <= 72780 && gone <= 183) {
			check = 1;
			gone += 1;
		}
		else if (time >= 73100 && time <= 73120 && gone <= 184) {
			check = 1;
			gone += 1;
		}
		else if (time >= 73490 && time <= 73510 && gone <= 185) {
			check = 1;
			gone += 1;
		}
		else if (time >= 73850 && time <= 73870 && gone <= 186) {
			check = 1;
			gone += 1;
		}
		else if (time >= 74190 && time <= 74210 && gone <= 187) {
			check = 1;
			gone += 1;
		}
		if (check == 1) {
			return true;
		}
		return false;
	}
	bool checkBeat3(long int time) {
		int check = 0;
		time = time + 870;
		if (time >= 75620 && time <= 75640 && gone <= 188) {
			check = 1;
			gone += 1;
		}
		else if (time >= 76090 && time <= 76110 && gone <= 189) {
			check = 1;
			gone += 1;
		}
		else if (time >= 76420 && time <= 76440 && gone <= 190) {
			check = 1;
			gone += 1;
		}
		else if (time >= 76900 && time <= 76920 && gone <= 191) {
			check = 1;
			gone += 1;
		}
		else if (time >= 77200 && time <= 77220 && gone <= 192) {
			check = 1;
			gone += 1;
		}
		else if (time >= 77370 && time <= 77390 && gone <= 193) {
			check = 1;
			gone += 1;
		}
		else if (time >= 77650 && time <= 77670 && gone <= 194) {
			check = 1;
			gone += 1;
		}
		else if (time >= 78000 && time <= 78020 && gone <= 195) {
			check = 1;
			gone += 1;
		}
		else if (time >= 78310 && time <= 78330 && gone <= 196) {
			check = 1;
			gone += 1;
		}
		else if (time >= 78630 && time <= 78650 && gone <= 197) {
			check = 1;
			gone += 1;
		}
		else if (time >= 79100 && time <= 79120 && gone <= 198) {
			check = 1;
			gone += 1;
		}
		else if (time >= 79260 && time <= 79280 && gone <= 199) {
			check = 1;
			gone += 1;
		}
		else if (time >= 79420 && time <= 79440 && gone <= 200) {
			check = 1;
			gone += 1;
		}
		else if (time >= 79890 && time <= 79910 && gone <= 201) {
			check = 1;
			gone += 1;
		}
		else if (time >= 80210 && time <= 80230 && gone <= 202) {
			check = 1;
			gone += 1;
		}
		else if (time >= 80520 && time <= 80540 && gone <= 203) {
			check = 1;
			gone += 1;
		}
		else if (time >= 81150 && time <= 81170 && gone <= 204) {
			check = 1;
			gone += 1;
		}
		else if (time >= 81480 && time <= 81500 && gone <= 205) {
			check = 1;
			gone += 1;
		}
		else if (time >= 81780 && time <= 81800 && gone <= 206) {
			check = 1;
			gone += 1;
		}
		else if (time >= 82110 && time <= 82130 && gone <= 207) {
			check = 1;
			gone += 1;
		}
		else if (time >= 82410 && time <= 82430 && gone <= 208) {
			check = 1;
			gone += 1;
		}
		else if (time >= 82730 && time <= 82750 && gone <= 209) {
			check = 1;
			gone += 1;
		}
		else if (time >= 83050 && time <= 83070 && gone <= 210) {
			check = 1;
			gone += 1;
		}
		else if (time >= 83360 && time <= 83380 && gone <= 211) {
			check = 1;
			gone += 1;
		}
		else if (time >= 83680 && time <= 83700 && gone <= 212) {
			check = 1;
			gone += 1;
		}
		else if (time >= 84000 && time <= 84020 && gone <= 213) {
			check = 1;
			gone += 1;
		}
		else if (time >= 84320 && time <= 84340 && gone <= 214) {
			check = 1;
			gone += 1;
		}
		else if (time >= 84950 && time <= 84970 && gone <= 215) {
			check = 1;
			gone += 1;
		}
		else if (time >= 85260 && time <= 85280 && gone <= 216) {
			check = 1;
			gone += 1;
		}
		else if (time >= 85570 && time <= 85590 && gone <= 217) {
			check = 1;
			gone += 1;
		}
		else if (time >= 85890 && time <= 85910 && gone <= 218) {
			check = 1;
			gone += 1;
		}
		else if (time >= 86200 && time <= 86220 && gone <= 219) {
			check = 1;
			gone += 1;
		}
		else if (time >= 86520 && time <= 86540 && gone <= 220) {
			check = 1;
			gone += 1;
		}
		else if (time >= 87000 && time <= 87020 && gone <= 221) {
			check = 1;
			gone += 1;
		}
		else if (time >= 87310 && time <= 87330 && gone <= 222) {
			check = 1;
			gone += 1;
		}
		else if (time >= 87470 && time <= 87490 && gone <= 223) {
			check = 1;
			gone += 1;
		}
		else if (time >= 87780 && time <= 87800 && gone <= 224) {
			check = 1;
			gone += 1;
		}
		else if (time >= 87940 && time <= 87960 && gone <= 225) {
			check = 1;
			gone += 1;
		}
		else if (time >= 88100 && time <= 88120 && gone <= 226) {
			check = 1;
			gone += 1;
		}
		else if (time >= 88420 && time <= 88440 && gone <= 227) {
			check = 1;
			gone += 1;
		}
		else if (time >= 88740 && time <= 88760 && gone <= 228) {
			check = 1;
			gone += 1;
		}
		else if (time >= 89050 && time <= 89070 && gone <= 229) {
			check = 1;
			gone += 1;
		}
		else if (time >= 89210 && time <= 89230 && gone <= 230) {
			check = 1;
			gone += 1;
		}
		else if (time >= 89360 && time <= 89380 && gone <= 231) {
			check = 1;
			gone += 1;
		}
		else if (time >= 89970 && time <= 89990 && gone <= 232) {
			check = 1;
			gone += 1;
		}
		else if (time >= 90310 && time <= 90330 && gone <= 233) {
			check = 1;
			gone += 1;
		}
		else if (time >= 91890 && time <= 91910 && gone <= 234) {
			check = 1;
			gone += 1;
		}
		else if (time >= 92210 && time <= 92230 && gone <= 235) {
			check = 1;
			gone += 1;
		}
		else if (time >= 92520 && time <= 92540 && gone <= 236) {
			check = 1;
			gone += 1;
		}
		else if (time >= 92840 && time <= 92860 && gone <= 237) {
			check = 1;
			gone += 1;
		}
		else if (time >= 93150 && time <= 93170 && gone <= 238) {
			check = 1;
			gone += 1;
		}
		else if (time >= 93470 && time <= 93490 && gone <= 239) {
			check = 1;
			gone += 1;
		}
		else if (time >= 93780 && time <= 93800 && gone <= 240) {
			check = 1;
			gone += 1;
		}
		else if (time >= 94110 && time <= 94130 && gone <= 241) {
			check = 1;
			gone += 1;
		}
		else if (time >= 94410 && time <= 94430 && gone <= 242) {
			check = 1;
			gone += 1;
		}
		else if (time >= 94720 && time <= 94740 && gone <= 243) {
			check = 1;
			gone += 1;
		}
		else if (time >= 94890 && time <= 94910 && gone <= 244) {
			check = 1;
			gone += 1;
		}
		else if (time >= 95050 && time <= 95070 && gone <= 245) {
			check = 1;
			gone += 1;
		}
		else if (time >= 95360 && time <= 95380 && gone <= 246) {
			check = 1;
			gone += 1;
		}
		else if (time >= 95680 && time <= 95700 && gone <= 247) {
			check = 1;
			gone += 1;
		}
		else if (time >= 95840 && time <= 95860 && gone <= 248) {
			check = 1;
			gone += 1;
		}
		else if (time >= 96310 && time <= 96330 && gone <= 249) {
			check = 1;
			gone += 1;
		}
		else if (time >= 97260 && time <= 97280 && gone <= 250) {
			check = 1;
			gone += 1;
		}
		else if (time >= 97570 && time <= 97590 && gone <= 251) {
			check = 1;
			gone += 1;
		}
		else if (time >= 97890 && time <= 97910 && gone <= 252) {
			check = 1;
			gone += 1;
		}
		else if (time >= 98210 && time <= 98230 && gone <= 253) {
			check = 1;
			gone += 1;
		}
		else if (time >= 98360 && time <= 98380 && gone <= 254) {
			check = 1;
			gone += 1;
		}
		else if (time >= 98680 && time <= 98700 && gone <= 255) {
			check = 1;
			gone += 1;
		}
		else if (time >= 98840 && time <= 98860 && gone <= 256) {
			check = 1;
			gone += 1;
		}
		else if (time >= 99160 && time <= 99180 && gone <= 257) {
			check = 1;
			gone += 1;
		}
		else if (time >= 99470 && time <= 99490 && gone <= 258) {
			check = 1;
			gone += 1;
		}
		else if (time >= 100100 && time <= 100120 && gone <= 259) {
			check = 1;
			gone += 1;
		}
		else if (time >= 100330 && time <= 100350 && gone <= 260) {
			check = 1;
			gone += 1;
		}
		else if (time >= 100580 && time <= 100600 && gone <= 261) {
			check = 1;
			gone += 1;
		}
		else if (time >= 100730 && time <= 100750 && gone <= 262) {
			check = 1;
			gone += 1;
		}
		else if (time >= 102150 && time <= 102170 && gone <= 263) {
			check = 1;
			gone += 1;
		}
		else if (time >= 103410 && time <= 103430 && gone <= 264) {
			check = 1;
			gone += 1;
		}
		else if (time >= 103720 && time <= 103740 && gone <= 265) {
			check = 1;
			gone += 1;
		}
		else if (time >= 103890 && time <= 103910 && gone <= 266) {
			check = 1;
			gone += 1;
		}
		if (check == 1) {
			printf("%d\n", gone);
			return true;
		}
		return false;
	}
	bool checkBeat4(long int time) {
		int check = 0;
		time = time + 870;
		if (time >= 104210 && time <= 104230 && gone <= 267) {
			check = 1;
			gone += 1;
		}
		else if (time >= 104370 && time <= 104390 && gone <= 268) {
			check = 1;
			gone += 1;
		}
		else if (time >= 104520 && time <= 104540 && gone <= 269) {
			check = 1;
			gone += 1;
		}
		else if (time >= 104680 && time <= 104700 && gone <= 270) {
			check = 1;
			gone += 1;
		}
		else if (time >= 104990 && time <= 105010 && gone <= 271) {
			check = 1;
			gone += 1;
		}
		else if (time >= 105160 && time <= 105180 && gone <= 272) {
			check = 1;
			gone += 1;
		}
		else if (time >= 105470 && time <= 105490 && gone <= 273) {
			check = 1;
			gone += 1;
		}
		else if (time >= 105630 && time <= 105650 && gone <= 274) {
			check = 1;
			gone += 1;
		}
		else if (time >= 105780 && time <= 105800 && gone <= 275) {
			check = 1;
			gone += 1;
		}
		else if (time >= 105940 && time <= 105960 && gone <= 276) {
			check = 1;
			gone += 1;
		}
		else if (time >= 106260 && time <= 106280 && gone <= 277) {
			check = 1;
			gone += 1;
		}
		else if (time >= 106420 && time <= 106440 && gone <= 278) {
			check = 1;
			gone += 1;
		}
		else if (time >= 106740 && time <= 106760 && gone <= 279) {
			check = 1;
			gone += 1;
		}
		else if (time >= 106890 && time <= 106910 && gone <= 280) {
			check = 1;
			gone += 1;
		}
		else if (time >= 107050 && time <= 107070 && gone <= 281) {
			check = 1;
			gone += 1;
		}
		else if (time >= 107210 && time <= 107530 && gone <= 282) {
			check = 1;
			gone += 1;
		}
		else if (time >= 107530 && time <= 107550 && gone <= 283) {
			check = 1;
			gone += 1;
		}
		else if (time >= 107680 && time <= 107700 && gone <= 284) {
			check = 1;
			gone += 1;
		}
		else if (time >= 108000 && time <= 108020 && gone <= 285) {
			check = 1;
			gone += 1;
		}
		else if (time >= 108470 && time <= 108490 && gone <= 286) {
			check = 1;
			gone += 1;
		}
		else if (time >= 108790 && time <= 108810 && gone <= 287) {
			check = 1;
			gone += 1;
		}
		else if (time >= 108940 && time <= 108960 && gone <= 288) {
			check = 1;
			gone += 1;
		}
		else if (time >= 109260 && time <= 109280 && gone <= 289) {
			check = 1;
			gone += 1;
		}
		else if (time >= 109580 && time <= 109600 && gone <= 290) {
			check = 1;
			gone += 1;
		}
		else if (time >= 109890 && time <= 109910 && gone <= 291) {
			check = 1;
			gone += 1;
		}
		else if (time >= 110210 && time <= 110230 && gone <= 292) {
			check = 1;
			gone += 1;
		}
		else if (time >= 110530 && time <= 110550 && gone <= 293) {
			check = 1;
			gone += 1;
		}
		else if (time >= 110680 && time <= 110700 && gone <= 294) {
			check = 1;
			gone += 1;
		}
		else if (time >= 110840 && time <= 110860 && gone <= 295) {
			check = 1;
			gone += 1;
		}
		else if (time >= 111000 && time <= 111020 && gone <= 296) {
			check = 1;
			gone += 1;
		}
		else if (time >= 111470 && time <= 111490 && gone <= 297) {
			check = 1;
			gone += 1;
		}
		else if (time >= 112100 && time <= 112120 && gone <= 298) {
			check = 1;
			gone += 1;
		}
		else if (time >= 112420 && time <= 112440 && gone <= 299) {
			check = 1;
			gone += 1;
		}
		else if (time >= 112730 && time <= 112750 && gone <= 300) {
			check = 1;
			gone += 1;
		}
		else if (time >= 113050 && time <= 113070 && gone <= 301) {
			check = 1;
			gone += 1;
		}
		else if (time >= 113360 && time <= 113380 && gone <= 302) {
			check = 1;
			gone += 1;
		}
		else if (time >= 113530 && time <= 113550 && gone <= 303) {
			check = 1;
			gone += 1;
		}
		else if (time >= 113830 && time <= 113850 && gone <= 304) {
			check = 1;
			gone += 1;
		}
		else if (time >= 114000 && time <= 114020 && gone <= 305) {
			check = 1;
			gone += 1;
		}
		else if (time >= 114310 && time <= 114330 && gone <= 306) {
			check = 1;
			gone += 1;
		}
		else if (time >= 114470 && time <= 114490 && gone <= 307) {
			check = 1;
			gone += 1;
		}
		else if (time >= 114630 && time <= 114660 && gone <= 308) {
			check = 1;
			gone += 1;
		}
		else if (time >= 114790 && time <= 114810 && gone <= 309) {
			check = 1;
			gone += 1;
		}
		else if (time >= 115100 && time <= 115120 && gone <= 310) {
			check = 1;
			gone += 1;
		}
		else if (time >= 115260 && time <= 115280 && gone <= 311) {
			check = 1;
			gone += 1;
		}
		else if (time >= 115570 && time <= 115590 && gone <= 312) {
			check = 1;
			gone += 1;
		}
		else if (time >= 115740 && time <= 115760 && gone <= 313) {
			check = 1;
			gone += 1;
		}
		else if (time >= 115890 && time <= 115910 && gone <= 314) {
			check = 1;
			gone += 1;
		}
		else if (time >= 116050 && time <= 116070 && gone <= 315) {
			check = 1;
			gone += 1;
		}
		else if (time >= 116360 && time <= 116380 && gone <= 316) {
			check = 1;
			gone += 1;
		}
		else if (time >= 116520 && time <= 116540 && gone <= 317) {
			check = 1;
			gone += 1;
		}
		else if (time >= 116830 && time <= 116850 && gone <= 318) {
			check = 1;
			gone += 1;
		}
		else if (time >= 116990 && time <= 117010 && gone <= 319) {
			check = 1;
			gone += 1;
		}
		else if (time >= 117150 && time <= 117170 && gone <= 320) {
			check = 1;
			gone += 1;
		}
		else if (time >= 117310 && time <= 117330 && gone <= 321) {
			check = 1;
			gone += 1;
		}
		else if (time >= 117620 && time <= 117640 && gone <= 322) {
			check = 1;
			gone += 1;
		}
		else if (time >= 117780 && time <= 117800 && gone <= 323) {
			check = 1;
			gone += 1;
		}
		else if (time >= 118100 && time <= 118120 && gone <= 324) {
			check = 1;
			gone += 1;
		}
		else if (time >= 118420 && time <= 118440 && gone <= 325) {
			check = 1;
			gone += 1;
		}
		else if (time >= 118580 && time <= 118600 && gone <= 326) {
			check = 1;
			gone += 1;
		}
		else if (time >= 119050 && time <= 119070 && gone <= 327) {
			check = 1;
			gone += 1;
		}
		else if (time >= 119370 && time <= 119390 && gone <= 328) {
			check = 1;
			gone += 1;
		}
		else if (time >= 119680 && time <= 119700 && gone <= 329) {
			check = 1;
			gone += 1;
		}
		else if (time >= 120000 && time <= 120020 && gone <= 330) {
			check = 1;
			gone += 1;
		}
		else if (time >= 120310 && time <= 120330 && gone <= 331) {
			check = 1;
			gone += 1;
		}
		else if (time >= 120630 && time <= 120650 && gone <= 332) {
			check = 1;
			gone += 1;
		}
		else if (time >= 120790 && time <= 120810 && gone <= 333) {
			check = 1;
			gone += 1;
		}
		else if (time >= 120940 && time <= 120960 && gone <= 334) {
			check = 1;
			gone += 1;
		}
		else if (time >= 121090 && time <= 121100 && gone <= 335) {
			check = 1;
			gone += 1;
		}
		else if (time >= 121580 && time <= 121600 && gone <= 336) {
			check = 1;
			gone += 1;
		}
		else if (time >= 121890 && time <= 121910 && gone <= 337) {
			check = 1;
			gone += 1;
		}
		else if (time >= 122200 && time <= 122220 && gone <= 338) {
			check = 1;
			gone += 1;
		}
		else if (time >= 122530 && time <= 122550 && gone <= 339) {
			check = 1;
			gone += 1;
		}
		else if (time >= 122680 && time <= 122700 && gone <= 340) {
			check = 1;
			gone += 1;
		}
		else if (time >= 122840 && time <= 122860 && gone <= 341) {
			check = 1;
			gone += 1;
		}
		else if (time >= 123150 && time <= 123170 && gone <= 342) {
			check = 1;
			gone += 1;
		}
		else if (time >= 123320 && time <= 123340 && gone <= 343) {
			check = 1;
			gone += 1;
		}
		else if (time >= 123620 && time <= 123640 && gone <= 344) {
			check = 1;
			gone += 1;
		}
		else if (time >= 124100 && time <= 124120 && gone <= 345) {
			check = 1;
			gone += 1;
		}
		else if (time >= 124250 && time <= 124270 && gone <= 346) {
			check = 1;
			gone += 1;
		}
		else if (time >= 124580 && time <= 124600 && gone <= 347) {
			check = 1;
			gone += 1;
		}
		else if (time >= 124730 && time <= 124750 && gone <= 348) {
			check = 1;
			gone += 1;
		}
		else if (time >= 125050 && time <= 125070 && gone <= 349) {
			check = 1;
			gone += 1;
		}
		else if (time >= 125200 && time <= 125220 && gone <= 350) {
			check = 1;
			gone += 1;
		}
		else if (time >= 125680 && time <= 125700 && gone <= 351) {
			check = 1;
			gone += 1;
		}
		else if (time >= 125840 && time <= 125860 && gone <= 352) {
			check = 1;
			gone += 1;
		}
		if (check == 1) {
			printf("%d\n", gone);
			return true;
		}
		return false;
	}
private:
	int gone = 0;
};
