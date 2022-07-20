#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Font.h"
class Song2 {
public:
	sf::Music song2;
	Song2(std::string play) {
		song2.openFromFile("audio/We_All_Lift_Together.ogg");
		song2.setVolume(70);
	}
	void PlaySong(void) {
		song2.play();
	}
	bool checkBeat1(long int time) {
		bool check = false;
		time = time + 860;
		if (time >= 2060 && time <= 2080) {
			check = true;
		}
		else if (time >= 2950 && time <= 2970) {
			check = true;
		}
		else if (time >= 3840 && time <= 3860) {
			check = true;
		}
		else if (time >= 4750 && time <= 4770) {
			check = true;
		}
		else if (time >= 5020 && time <= 5040) {
			check = true;
		}
		else if (time >= 5650 && time <= 5670) {
			check = true;
		}
		else if (time >= 6530 && time <= 6550) {
			check = true;
		}
		else if (time >= 7460 && time <= 7480) {
			check = true;
		}
		else if (time >= 8210 && time <= 8230) {
			check = true;
		}
		else if (time >= 8350 && time <= 8370) {
			check = true;
		}
		else if (time >= 8780 && time <= 8800) {
			check = true;
		}
		else if (time >= 9230 && time <= 9250) {
			check = true;
		}
		else if (time >= 10110 && time <= 10130) {
			check = true;
		}
		else if (time >= 10990 && time <= 11010) {
			check = true;
		}
		else if (time >= 11910 && time <= 11930) {
			check = true;
		}
		else if (time >= 12190 && time <= 12210) {
			check = true;
		}
		else if (time >= 12820 && time <= 12840) {
			check = true;
		}
		else if (time >= 13120 && time <= 13140) {
			check = true;
		}
		else if (time >= 13700 && time <= 13720) {
			check = true;
		}
		else if (time >= 14020 && time <= 14040) {
			check = true;
		}
		else if (time >= 14620 && time <= 14640) {
			check = true;
		}
		else if (time >= 14920 && time <= 14940) {
			check = true;
		}
		else if (time >= 15500 && time <= 15520) {
			check = true;
		}
		else if (time >= 15990 && time <= 16010) {
			check = true;
		}
		else if (time >= 16400 && time <= 16420) {
			check = true;
		}
		else if (time >= 17290 && time <= 17310) {
			check = true;
		}
		else if (time >= 17770 && time <= 17790) {
			check = true;
		}
		else if (time >= 18180 && time <= 18200) {
			check = true;
		}
		else if (time >= 18480 && time <= 18500) {
			check = true;
		}
		else if (time >= 19050 && time <= 19070) {
			check = true;
		}
		else if (time >= 19350 && time <= 19370) {
			check = true;
		}
		else if (time >= 19950 && time <= 19970) {
			check = true;
		}
		else if (time >= 20630 && time <= 20650) {
			check = true;
		}
		else if (time >= 20830 && time <= 20850) {
			check = true;
		}
		else if (time >= 21300 && time <= 21350) {
			check = true;
		}
		else if (time >= 21730 && time <= 21750) {
			check = true;
		}
		else if (time >= 22060 && time <= 22080) {
			check = true;
		}
		else if (time >= 22630 && time <= 22650) {
			check = true;
		}
		else if (time >= 23500 && time <= 23520) {
			check = true;
		}
		else if (time >= 24180 && time <= 24200) {
			check = true;
		}
		else if (time >= 24410 && time <= 24430) {
			check = true;
		}
		else if (time >= 24830 && time <= 24850) {
			check = true;
		}
		else if (time >= 25290 && time <= 25310) {
			check = true;
		}
		else if (time >= 25750 && time <= 25770) {
			check = true;
		}
		else if (time >= 26170 && time <= 26190) {
			check = true;
		}
		else if (time >= 26520 && time <= 26540) {
			check = true;
		}
		else if (time >= 27100 && time <= 27120) {
			check = true;
		}
		else if (time >= 27770 && time <= 27790) {
			check = true;
		}
		else if (time >= 28000 && time <= 28020) {
			check = true;
		}
		else if (time >= 28430 && time <= 28450) {
			check = true;
		}
		else if (time >= 29240 && time <= 29260) {
			check = true;
		}
		else if (time >= 29810 && time <= 29830) {
			check = true;
		}
		else if (time >= 30700 && time <= 30720) {
			check = true;
		}
		else if (time >= 31410 && time <= 31430) {
			check = true;
		}
		else if (time >= 31620 && time <= 31640) {
			check = true;
		}
		else if (time >= 32090 && time <= 32110) {
			check = true;
		}
		else if (time >= 32500 && time <= 32520) {
			check = true;
		}
		else if (time >= 33000 && time <= 33020) {
			check = true;
		}
		else if (time >= 33400 && time <= 33420) {
			check = true;
		}
		else if (time >= 33870 && time <= 33890) {
			check = true;
		}
		else if (time >= 34310 && time <= 34330) {
			check = true;
		}
		else if (time >= 35020 && time <= 35040) {
			check = true;
		}
		else if (time >= 35190 && time <= 35210) {
			check = true;
		}
		else if (time >= 35760 && time <= 35780) {
			check = true;
		}
		else if (time >= 36100 && time <= 36120) {
			check = true;
		}
		else if (time >= 36380 && time <= 36400) {
			check = true;
		}
		else if (time >= 36960 && time <= 36980) {
			check = true;
		}
		else if (time >= 37860 && time <= 37880) {
			check = true;
		}
		else if (time >= 38160 && time <= 38180) {
			check = true;
		}
		else if (time >= 38750 && time <= 38770) {
			check = true;
		}
		else if (time >= 39210 && time <= 38230) {
			check = true;
		}
		else if (time >= 36920 && time <= 36940) {
			check = true;
		}
		else if (time >= 37860 && time <= 37880) {
			check = true;
		}
		else if (time >= 38160 && time <= 38180) {
			check = true;
		}
		else if (time >= 38750 && time <= 38770) {
			check = true;
		}
		else if (time >= 39210 && time <= 39230) {
			check = true;
		}
		else if (time >= 39610 && time <= 39630) {
			check = true;
		}
		else if (time >= 40020 && time <= 40040) {
			check = true;
		}
		else if (time >= 40530 && time <= 40550) {
			check = true;
		}
		else if (time >= 40870 && time <= 40890) {
			check = true;
		}
		else if (time >= 41410 && time <= 41430) {
			check = true;
		}
		else if (time >= 41930 && time <= 41950) {
			check = true;
		}
		else if (time >= 42360 && time <= 42380) {
			check = true;
		}
		else if (time >= 42710 && time <= 42730) {
			check = true;
		}
		else if (time >= 43290 && time <= 43310) {
			check = true;
		}
		else if (time >= 43580 && time <= 43600) {
			check = true;
		}
		else if (time >= 44150 && time <= 44170) {
			check = true;
		}
		else if (time >= 44560 && time <= 44580) {
			check = true;
		}
		return check;
	}
	bool checkBeat2(long int time) {
		bool check = false;
		time = time + 860;
		if (time >= 45070 && time <= 45090) {
			check = true;
		}
		else if (time >= 45800 && time <= 45820) {
			check = true;
		}
		else if (time >= 45980 && time <= 46000) {
			check = true;
		}
		else if (time >= 46450 && time <= 46470) {
			check = true;
		}
		else if (time >= 46850 && time <= 46870) {
			check = true;
		}
		else if (time >= 47150 && time <= 47170) {
			check = true;
		}
		else if (time >= 47720 && time <= 47740) {
			check = true;
		}
		else if (time >= 48110 && time <= 48130) {
			check = true;
		}
		else if (time >= 48610 && time <= 48630) {
			check = true;
		}
		else if (time >= 49370 && time <= 49390) {
			check = true;
		}
		else if (time >= 49530 && time <= 49550) {
			check = true;
		}
		else if (time >= 50070 && time <= 50090) {
			check = true;
		}
		else if (time >= 50410 && time <= 50430) {
			check = true;
		}
		else if (time >= 50790 && time <= 50810) {
			check = true;
		}
		else if (time >= 51310 && time <= 51330) {
			check = true;
		}
		else if (time >= 51790 && time <= 51810) {
			check = true;
		}
		else if (time >= 52230 && time <= 52250) {
			check = true;
		}
		else if (time >= 52970 && time <= 52990) {
			check = true;
		}
		else if (time >= 53110 && time <= 53130) {
			check = true;
		}
		else if (time >= 53580 && time <= 53600) {
			check = true;
		}
		else if (time >= 53960 && time <= 53980) {
			check = true;
		}
		else if (time >= 54420 && time <= 54440) {
			check = true;
		}
		else if (time >= 54910 && time <= 54930) {
			check = true;
		}
		else if (time >= 55240 && time <= 55260) {
			check = true;
		}
		else if (time >= 55770 && time <= 55790) {
			check = true;
		}
		else if (time >= 56540 && time <= 56560) {
			check = true;
		}
		else if (time >= 56680 && time <= 56700) {
			check = true;
		}
		else if (time >= 57160 && time <= 57180) {
			check = true;
		}
		else if (time >= 57640 && time <= 57660) {
			check = true;
		}
		else if (time >= 58010 && time <= 58030) {
			check = true;
		}
		else if (time >= 58470 && time <= 58490) {
			check = true;
		}
		else if (time >= 59390 && time <= 59410) {
			check = true;
		}
		else if (time >= 60150 && time <= 60170) {
			check = true;
		}
		else if (time >= 60440 && time <= 60460) {
			check = true;
		}
		else if (time >= 60770 && time <= 60790) {
			check = true;
		}
		else if (time >= 61170 && time <= 61190) {
			check = true;
		}
		else if (time >= 61640 && time <= 61660) {
			check = true;
		}
		else if (time >= 62080 && time <= 62100) {
			check = true;
		}
		else if (time >= 62390 && time <= 62410) {
			check = true;
		}
		else if (time >= 62960 && time <= 62980) {
			check = true;
		}
		else if (time >= 63700 && time <= 63720) {
			check = true;
		}
		else if (time >= 63880 && time <= 63900) {
			check = true;
		}
		else if (time >= 64300 && time <= 64320) {
			check = true;
		}
		else if (time >= 64740 && time <= 64760) {
			check = true;
		}
		else if (time >= 65060 && time <= 65080) {
			check = true;
		}
		else if (time >= 65610 && time <= 65630) {
			check = true;
		}
		else if (time >= 66570 && time <= 44580) {
			check = true;
		}
		else if (time >= 66800 && time <= 66820) {
			check = true;
		}
		else if (time >= 67440 && time <= 67460) {
			check = true;
		}
		else if (time >= 67850 && time <= 67870) {
			check = true;
		}
		else if (time >= 68300 && time <= 68320) {
			check = true;
		}
		else if (time >= 69200 && time <= 69220) {
			check = true;
		}
		else if (time >= 69440 && time <= 69460) {
			check = true;
		}
		else if (time >= 70050 && time <= 70070) {
			check = true;
		}
		else if (time >= 70610 && time <= 70630) {
			check = true;
		}
		else if (time >= 71040 && time <= 71060) {
			check = true;
		}
		else if (time >= 71360 && time <= 71380) {
			check = true;
		}
		else if (time >= 71890 && time <= 71910) {
			check = true;
		}
		else if (time >= 72210 && time <= 72230) {
			check = true;
		}
		else if (time >= 72750 && time <= 72770) {
			check = true;
		}
		else if (time >= 73250 && time <= 73270) {
			check = true;
		}
		else if (time >= 73700 && time <= 73720) {
			check = true;
		}
		else if (time >= 74440 && time <= 74460) {
			check = true;
		}
		else if (time >= 74600 && time <= 74620) {
			check = true;
		}
		else if (time >= 75070 && time <= 75090) {
			check = true;
		}
		else if (time >= 75480 && time <= 75500) {
			check = true;
		}
		else if (time >= 76370 && time <= 76390) {
			check = true;
		}
		else if (time >= 77320 && time <= 77340) {
			check = true;
		}
		else if (time >= 78140 && time <= 78160) {
			check = true;
		}
		else if (time >= 78660 && time <= 78680) {
			check = true;
		}
		else if (time >= 79060 && time <= 79080) {
			check = true;
		}
		else if (time >= 79540 && time <= 79560) {
			check = true;
		}
		else if (time >= 79970 && time <= 79990) {
			check = true;
		}
		return check;
	}
	bool checkBeat3(long int time) {
		bool check = false;
		time = time + 860;
		if (time >= 80790 && time <= 80810) {
			check = true;
		}
		else if (time >= 81530 && time <= 81550) {
			check = true;
		}
		else if (time >= 81750 && time <= 81770) {
			check = true;
		}
		else if (time >= 82190 && time <= 82210) {
			check = true;
		}
		else if (time >= 82620 && time <= 82640) {
			check = true;
		}
		else if (time >= 83100 && time <= 83120) {
			check = true;
		}
		else if (time >= 83530 && time <= 83550) {
			check = true;
		}
		else if (time >= 83860 && time <= 83880) {
			check = true;
		}
		else if (time >= 84410 && time <= 84430) {
			check = true;
		}
		else if (time >= 85080 && time <= 85100) {
			check = true;
		}
		else if (time >= 85310 && time <= 85330) {
			check = true;
		}
		else if (time >= 85780 && time <= 85800) {
			check = true;
		}
		else if (time >= 86670 && time <= 86690) {
			check = true;
		}
		else if (time >= 87140 && time <= 87160) {
			check = true;
		}
		else if (time >= 88750 && time <= 88770) {
			check = true;
		}
		else if (time >= 88930 && time <= 88950) {
			check = true;
		}
		else if (time >= 89350 && time <= 89370) {
			check = true;
		}
		else if (time >= 89790 && time <= 89810) {
			check = true;
		}
		else if (time >= 90260 && time <= 90280) {
			check = true;
		}
		else if (time >= 90700 && time <= 90720) {
			check = true;
		}
		else if (time >= 91620 && time <= 91640) {
			check = true;
		}
		else if (time >= 92540 && time <= 92560) {
			check = true;
		}
		else if (time >= 92960 && time <= 92980) {
			check = true;
		}
		else if (time >= 93540 && time <= 93560) {
			check = true;
		}
		else if (time >= 93700 && time <= 93720) {
			check = true;
		}
		else if (time >= 94290 && time <= 94310) {
			check = true;
		}
		else if (time >= 95160 && time <= 95180) {
			check = true;
		}
		else if (time >= 95460 && time <= 95480) {
			check = true;
		}
		else if (time >= 96070 && time <= 96090) {
			check = true;
		}
		else if (time >= 96510 && time <= 96530) {
			check = true;
		}
		else if (time >= 96970 && time <= 96990) {
			check = true;
		}
		else if (time >= 97860 && time <= 97880) {
			check = true;
		}
		else if (time >= 98090 && time <= 98110) {
			check = true;
		}
		else if (time >= 98780 && time <= 98800) {
			check = true;
		}
		else if (time >= 99260 && time <= 99280) {
			check = true;
		}
		else if (time >= 99660 && time <= 99680) {
			check = true;
		}
		else if (time >= 100570 && time <= 100590) {
			check = true;
		}
		else if (time >= 100870 && time <= 100890) {
			check = true;
		}
		else if (time >= 101440 && time <= 101460) {
			check = true;
		}
		else if (time >= 101770 && time <= 101790) {
			check = true;
		}
		else if (time >= 102370 && time <= 102390) {
			check = true;
		}
		else if (time >= 102370 && time <= 102390) {
			check = true;
		}
		else if (time >= 103470 && time <= 103490) {
			check = true;
		}
		else if (time >= 103760 && time <= 103780) {
			check = true;
		}
		else if (time >= 104080 && time <= 104100) {
			check = true;
		}
		else if (time >= 105070 && time <= 105090) {
			check = true;
		}
		else if (time >= 105600 && time <= 105620) {
			check = true;
		}
		else if (time >= 105960 && time <= 105980) {
			check = true;
		}
		else if (time >= 107070 && time <= 107090) {
			check = true;
		}
		else if (time >= 107340 && time <= 107360) {
			check = true;
		}
		else if (time >= 107620 && time <= 107640) {
			check = true;
		}
		else if (time >= 108650 && time <= 108670) {
			check = true;
		}
		else if (time >= 109360 && time <= 109380) {
			check = true;
		}
		else if (time >= 109540 && time <= 109560) {
			check = true;
		}
		else if (time >= 109930 && time <= 109950) {
			check = true;
		}
		return check;
	}
	bool checkBeat4(long int time) {
		bool check = false;
		time = time + 860;
		if (time >= 112940 && time <= 112960) {
			check = true;
		}
		else if (time >= 113160 && time <= 113180) {
			check = true;
		}
		else if (time >= 113530 && time <= 113550) {
			check = true;
		}
		else if (time >= 117840 && time <= 117860) {
			check = true;
		}
		else if (time >= 118050 && time <= 118070) {
			check = true;
		}
		else if (time >= 118340 && time <= 118360) {
			check = true;
		}
		else if (time >= 119400 && time <= 119420) {
			check = true;
		}
		else if (time >= 120420 && time <= 120420) {
			check = true;
		}
		else if (time >= 121710 && time <= 121730) {
			check = true;
		}
		else if (time >= 122090 && time <= 122110) {
			check = true;
		}
		else if (time >= 122980 && time <= 123000) {
			check = true;
		}
		else if (time >= 123690 && time <= 123710) {
			check = true;
		}
		else if (time >= 123900 && time <= 123920) {
			check = true;
		}
		else if (time >= 124280 && time <= 124300) {
			check = true;
		}
		else if (time >= 127300 && time <= 127320) {
			check = true;
		}
		else if (time >= 127480 && time <= 127500) {
			check = true;
		}
		else if (time >= 127870 && time <= 127890) {
			check = true;
		}
		else if (time >= 131030 && time <= 131050) {
			check = true;
		}
		else if (time >= 131900 && time <= 131920) {
			check = true;
		}
		else if (time >= 132370 && time <= 132390) {
			check = true;
		}
		else if (time >= 132820 && time <= 132840) {
			check = true;
		}
		else if (time >= 133290 && time <= 133310) {
			check = true;
		}
		else if (time >= 133680 && time <= 133700) {
			check = true;
		}
		else if (time >= 134050 && time <= 134070) {
			check = true;
		}
		else if (time >= 134370 && time <= 134390) {
			check = true;
		}
		else if (time >= 134620 && time <= 134640) {
			check = true;
		}
		else if (time >= 135350 && time <= 135370) {
			check = true;
		}
		else if (time >= 135500 && time <= 135520) {
			check = true;
		}
		else if (time >= 135940 && time <= 135960) {
			check = true;
		}
		else if (time >= 136390 && time <= 136410) {
			check = true;
		}
		else if (time >= 136680 && time <= 136700) {
			check = true;
		}
		else if (time >= 137320 && time <= 137340) {
			check = true;
		}
		else if (time >= 138200 && time <= 138220) {
			check = true;
		}
		else if (time >= 138500 && time <= 138520) {
			check = true;
		}
		else if (time >= 139080 && time <= 139100) {
			check = true;
		}
		else if (time >= 139490 && time <= 139510) {
			check = true;
		}
		else if (time >= 139930 && time <= 139950) {
			check = true;
		}
		else if (time >= 140270 && time <= 140290) {
			check = true;
		}
		else if (time >= 140820 && time <= 140840) {
			check = true;
		}
		else if (time >= 141150 && time <= 141170) {
			check = true;
		}
		else if (time >= 142240 && time <= 142260) {
			check = true;
		}
		else if (time >= 142670 && time <= 142690) {
			check = true;
		}
		else if (time >= 143070 && time <= 143090) {
			check = true;
		}
		else if (time >= 143530 && time <= 143550) {
			check = true;
		}
		else if (time >= 143830 && time <= 143850) {
			check = true;
		}
		else if (time >= 144400 && time <= 144420) {
			check = true;
		}
		else if (time >= 144760 && time <= 144780) {
			check = true;
		}
		else if (time >= 145350 && time <= 145370) {
			check = true;
		}
		return check;
	}

private:
};