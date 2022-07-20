#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include "Font.h"
class Song3 {
public:
	sf::Music song3;
	Song3(std::string play) {
		song3.openFromFile("audio/Brain_Power.ogg");
		song3.setVolume(50);
	}
	void PlaySong(void) {
		song3.play();
	}
	bool checkBeat1(long int time) {
		bool check = false;
		time = time + 870;
		if (time >= 2110 && time <= 2130) {
			check = true;
		}
		else if (time >= 2470 && time <= 2490) {
			check = true;
		}
		else if (time >= 2820 && time <= 2840) {
			check = true;
		}
		else if (time >= 3170 && time <= 3190) {
			check = true;
		}
		else if (time >= 3530 && time <= 3550) {
			check = true;
		}
		else if (time >= 3880 && time <= 3900) {
			check = true;
		}
		else if (time >= 4230 && time <= 4250) {
			check = true;
		}
		else if (time >= 4580 && time <= 4600) {
			check = true;
		}
		else if (time >= 4940 && time <= 4960) {
			check = true;
		}
		else if (time >= 5290 && time <= 5310) {
			check = true;
		}
		else if (time >= 5650 && time <= 5670) {
			check = true;
		}
		else if (time >= 6000 && time <= 6020) {
			check = true;
		}
		else if (time >= 6350 && time <= 6370) {
			check = true;
		}
		else if (time >= 6700 && time <= 6720) {
			check = true;
		}
		else if (time >= 7050 && time <= 7070) {
			check = true;
		}
		else if (time >= 7410 && time <= 7430) {
			check = true;
		}
		else if (time >= 7590 && time <= 7610) {
			check = true;
		}
		else if (time >= 7760 && time <= 7780) {
			check = true;
		}
		else if (time >= 8110 && time <= 8130) {
			check = true;
		}
		else if (time >= 8470 && time <= 8490) {
			check = true;
		}
		else if (time >= 8820 && time <= 8840) {
			check = true;
		}
		else if (time >= 9180 && time <= 9200) {
			check = true;
		}
		else if (time >= 9530 && time <= 9550) {
			check = true;
		}
		else if (time >= 9880 && time <= 9900) {
			check = true;
		}
		else if (time >= 10230 && time <= 10250) {
			check = true;
		}
		else if (time >= 10580 && time <= 10600) {
			check = true;
		}
		else if (time >= 10940 && time <= 10960) {
			check = true;
		}
		else if (time >= 11290 && time <= 11310) {
			check = true;
		}
		else if (time >= 11640 && time <= 11660) {
			check = true;
		}
		else if (time >= 12000 && time <= 12020) {
			check = true;
		}
		else if (time >= 12350 && time <= 12370) {
			check = true;
		}
		else if (time >= 12710 && time <= 12730) {
			check = true;
		}
		else if (time >= 12860 && time <= 12880) {
			check = true;
		}
		else if (time >= 12970 && time <= 12990) {
			check = true;
		}
		else if (time >= 13060 && time <= 13080) {
			check = true;
		}
		else if (time >= 13250 && time <= 13270) {
			check = true;
		}
		else if (time >= 13410 && time <= 13430) {
			check = true;
		}
		else if (time >= 13760 && time <= 13780) {
			check = true;
		}
		else if (time >= 14120 && time <= 14140) {
			check = true;
		}
		else if (time >= 14470 && time <= 14490) {
			check = true;
		}
		else if (time >= 14820 && time <= 14840) {
			check = true;
		}
		else if (time >= 15170 && time <= 15190) {
			check = true;
		}
		else if (time >= 15530 && time <= 15550) {
			check = true;
		}
		else if (time >= 15880 && time <= 15900) {
			check = true;
		}
		else if (time >= 16230 && time <= 16250) {
			check = true;
		}
		else if (time >= 16590 && time <= 16610) {
			check = true;
		}
		else if (time >= 16940 && time <= 16960) {
			check = true;
		}
		else if (time >= 17290 && time <= 17310) {
			check = true;
		}
		else if (time >= 17650 && time <= 17670) {
			check = true;
		}
		else if (time >= 18000 && time <= 18020) {
			check = true;
		}
		else if (time >= 18350 && time <= 18370) {
			check = true;
		}
		else if (time >= 18700 && time <= 18720) {
			check = true;
		}
		else if (time >= 18880 && time <= 18900) {
			check = true;
		}
		else if (time >= 19050 && time <= 19070) {
			check = true;
		}
		else if (time >= 19410 && time <= 19430) {
			check = true;
		}
		else if (time >= 19760 && time <= 19780) {
			check = true;
		}
		else if (time >= 20110 && time <= 20130) {
			check = true;
		}
		else if (time >= 20470 && time <= 20490) {
			check = true;
		}
		else if (time >= 20820 && time <= 20840) {
			check = true;
		}
		else if (time >= 21170 && time <= 21190) {
			check = true;
		}
		else if (time >= 21520 && time <= 21540) {
			check = true;
		}
		else if (time >= 21880 && time <= 21900) {
			check = true;
		}
		else if (time >= 22230 && time <= 22250) {
			check = true;
		}
		else if (time >= 22580 && time <= 22600) {
			check = true;
		}
		else if (time >= 22940 && time <= 22960) {
			check = true;
		}
		else if (time >= 23030 && time <= 23050) {
			check = true;
		}
		else if (time >= 23120 && time <= 23140) {
			check = true;
		}
		else if (time >= 23210 && time <= 23230) {
			check = true;
		}
		else if (time >= 23290 && time <= 23310) {
			check = true;
		}
		else if (time >= 23560 && time <= 23580) {
			check = true;
		}
		else if (time >= 23820 && time <= 23840) {
			check = true;
		}
		else if (time >= 24080 && time <= 24100) {
			check = true;
		}
		else if (time >= 24350 && time <= 24370) {
			check = true;
		}
		else if (time >= 24530 && time <= 24550) {
			check = true;
		}
		else if (time >= 24700 && time <= 24720) {
			check = true;
		}
		else if (time >= 25060 && time <= 25080) {
			check = true;
		}
		else if (time >= 25410 && time <= 25430) {
			check = true;
		}
		else if (time >= 25760 && time <= 25780) {
			check = true;
		}
		else if (time >= 26120 && time <= 26140) {
			check = true;
		}
		else if (time >= 26470 && time <= 26490) {
			check = true;
		}
		else if (time >= 26820 && time <= 26840) {
			check = true;
		}
		else if (time >= 27170 && time <= 27190) {
			check = true;
		}
		else if (time >= 27530 && time <= 27550) {
			check = true;
		}
		else if (time >= 27880 && time <= 27900) {
			check = true;
		}
		else if (time >= 28230 && time <= 28250) {
			check = true;
		}
		else if (time >= 28590 && time <= 28610) {
			check = true;
		}
		else if (time >= 28940 && time <= 28960) {
			check = true;
		}
		else if (time >= 29290 && time <= 29310) {
			check = true;
		}
		else if (time >= 29650 && time <= 29670) {
			check = true;
		}
		else if (time >= 30000 && time <= 30020) {
			check = true;
		}
		return check;
	}
	bool checkBeat2(long int time) {
		bool check = false;
		time = time + 870;
		if (time >= 30170 && time <= 30190) {
			check = true;
		}
		else if (time >= 30350 && time <= 30370) {
			check = true;
		}
		else if (time >= 30700 && time <= 30720) {
			check = true;
		}
		else if (time >= 31060 && time <= 31080) {
			check = true;
		}
		else if (time >= 31410 && time <= 31430) {
			check = true;
		}
		else if (time >= 31760 && time <= 31780) {
			check = true;
		}
		else if (time >= 32110 && time <= 32130) {
			check = true;
		}
		else if (time >= 32470 && time <= 32490) {
			check = true;
		}
		else if (time >= 32820 && time <= 32840) {
			check = true;
		}
		else if (time >= 33180 && time <= 33200) {
			check = true;
		}
		else if (time >= 33520 && time <= 33540) {
			check = true;
		}
		else if (time >= 33880 && time <= 33900) {
			check = true;
		}
		else if (time >= 34230 && time <= 34250) {
			check = true;
		}
		else if (time >= 34590 && time <= 34610) {
			check = true;
		}
		else if (time >= 34940 && time <= 34960) {
			check = true;
		}
		else if (time >= 35070 && time <= 35090) {
			check = true;
		}
		else if (time >= 35190 && time <= 35210) {
			check = true;
		}
		else if (time >= 35300 && time <= 35320) {
			check = true;
		}
		else if (time >= 35640 && time <= 35660) {
			check = true;
		}
		else if (time >= 36000 && time <= 36020) {
			check = true;
		}
		else if (time >= 36350 && time <= 36370) {
			check = true;
		}
		else if (time >= 36700 && time <= 36720) {
			check = true;
		}
		else if (time >= 37050 && time <= 37070) {
			check = true;
		}
		else if (time >= 37410 && time <= 37430) {
			check = true;
		}
		else if (time >= 37760 && time <= 37780) {
			check = true;
		}
		else if (time >= 38120 && time <= 38140) {
			check = true;
		}
		else if (time >= 38470 && time <= 38490) {
			check = true;
		}
		else if (time >= 38820 && time <= 38840) {
			check = true;
		}
		else if (time >= 39170 && time <= 39190) {
			check = true;
		}
		else if (time >= 39530 && time <= 39550) {
			check = true;
		}
		else if (time >= 39880 && time <= 39900) {
			check = true;
		}
		else if (time >= 40230 && time <= 40250) {
			check = true;
		}
		else if (time >= 40580 && time <= 40600) {
			check = true;
		}
		else if (time >= 40940 && time <= 40960) {
			check = true;
		}
		else if (time >= 41290 && time <= 41310) {
			check = true;
		}
		else if (time >= 41470 && time <= 41490) {
			check = true;
		}
		else if (time >= 41640 && time <= 41660) {
			check = true;
		}
		else if (time >= 42000 && time <= 42020) {
			check = true;
		}
		else if (time >= 42350 && time <= 42370) {
			check = true;
		}
		else if (time >= 42700 && time <= 42720) {
			check = true;
		}
		else if (time >= 43050 && time <= 43070) {
			check = true;
		}
		else if (time >= 43410 && time <= 43430) {
			check = true;
		}
		else if (time >= 43760 && time <= 43780) {
			check = true;
		}
		else if (time >= 44110 && time <= 44130) {
			check = true;
		}
		else if (time >= 44470 && time <= 44490) {
			check = true;
		}
		else if (time >= 44820 && time <= 44840) {
			check = true;
		}
		else if (time >= 45170 && time <= 45190) {
			check = true;
		}
		else if (time >= 45530 && time <= 45550) {
			check = true;
		}
		else if (time >= 45880 && time <= 45900) {
			check = true;
		}
		else if (time >= 46230 && time <= 46250) {
			check = true;
		}
		else if (time >= 46590 && time <= 46610) {
			check = true;
		}
		else if (time >= 46940 && time <= 46960) {
			check = true;
		}
		else if (time >= 47060 && time <= 47080) {
			check = true;
		}
		else if (time >= 47180 && time <= 47200) {
			check = true;
		}
		else if (time >= 47300 && time <= 47320) {
			check = true;
		}
		else if (time >= 48000 && time <= 48020) {
			check = true;
		}
		else if (time >= 48700 && time <= 48720) {
			check = true;
		}
		else if (time >= 48970 && time <= 48990) {
			check = true;
		}
		else if (time >= 49240 && time <= 49260) {
			check = true;
		}
		else if (time >= 49410 && time <= 49430) {
			check = true;
		}
		else if (time >= 50120 && time <= 50140) {
			check = true;
		}
		else if (time >= 50820 && time <= 50840) {
			check = true;
		}
		else if (time >= 51000 && time <= 51020) {
			check = true;
		}
		else if (time >= 51180 && time <= 51200) {
			check = true;
		}
		else if (time >= 51530 && time <= 51550) {
			check = true;
		}
		else if (time >= 51890 && time <= 51910) {
			check = true;
		}
		else if (time >= 52060 && time <= 52080) {
			check = true;
		}
		else if (time >= 52240 && time <= 52260) {
			check = true;
		}
		else if (time >= 52940 && time <= 52960) {
			check = true;
		}
		else if (time >= 53650 && time <= 53670) {
			check = true;
		}
		else if (time >= 53920 && time <= 53940) {
			check = true;
		}
		else if (time >= 54180 && time <= 54200) {
			check = true;
		}
		else if (time >= 54350 && time <= 54370) {
			check = true;
		}
		else if (time >= 55060 && time <= 55080) {
			check = true;
		}
		else if (time >= 56100 && time <= 56120) {
			check = true;
		}
		else if (time >= 56300 && time <= 56320) {
			check = true;
		}
		else if (time >= 56470 && time <= 56490) {
			check = true;
		}
		else if (time >= 57180 && time <= 57200) {
			check = true;
		}
		else if (time >= 57530 && time <= 57550) {
			check = true;
		}
		else if (time >= 57660 && time <= 57680) {
			check = true;
		}
		else if (time >= 57770 && time <= 57790) {
			check = true;
		}
		else if (time >= 58230 && time <= 58250) {
			check = true;
		}
		else if (time >= 58590 && time <= 58610) {
			check = true;
		}
		else if (time >= 59290 && time <= 59310) {
			check = true;
		}
		else if (time >= 59640 && time <= 59660) {
			check = true;
		}
		else if (time >= 60000 && time <= 60020) {
			check = true;
		}
		return check;
	}
	bool checkBeat3(long int time) {
		bool check = false;
		time = time + 870;
		if (time >= 60350 && time <= 60370) {
			check = true;
		}
		else if (time >= 60700 && time <= 60720) {
			check = true;
		}
		else if (time >= 61060 && time <= 61080) {
			check = true;
		}
		else if (time >= 61410 && time <= 61430) {
			check = true;
		}
		else if (time >= 61760 && time <= 61780) {
			check = true;
		}
		else if (time >= 62110 && time <= 62130) {
			check = true;
		}
		else if (time >= 62470 && time <= 62490) {
			check = true;
		}
		else if (time >= 62820 && time <= 62840) {
			check = true;
		}
		else if (time >= 63170 && time <= 63190) {
			check = true;
		}
		else if (time >= 63520 && time <= 63540) {
			check = true;
		}
		else if (time >= 63870 && time <= 63890) {
			check = true;
		}
		else if (time >= 64050 && time <= 64070) {
			check = true;
		}
		else if (time >= 64220 && time <= 64240) {
			check = true;
		}
		else if (time >= 64580 && time <= 64600) {
			check = true;
		}
		else if (time >= 64930 && time <= 64950) {
			check = true;
		}
		else if (time >= 65280 && time <= 65300) {
			check = true;
		}
		else if (time >= 65630 && time <= 65650) {
			check = true;
		}
		else if (time >= 65980 && time <= 66000) {
			check = true;
		}
		else if (time >= 66330 && time <= 66350) {
			check = true;
		}
		else if (time >= 66680 && time <= 66700) {
			check = true;
		}
		else if (time >= 67040 && time <= 67060) {
			check = true;
		}
		else if (time >= 67390 && time <= 67410) {
			check = true;
		}
		else if (time >= 67740 && time <= 67760) {
			check = true;
		}
		else if (time >= 68090 && time <= 68110) {
			check = true;
		}
		else if (time >= 68440 && time <= 68460) {
			check = true;
		}
		else if (time >= 68790 && time <= 68810) {
			check = true;
		}
		else if (time >= 69140 && time <= 69160) {
			check = true;
		}
		else if (time >= 69490 && time <= 69510) {
			check = true;
		}
		else if (time >= 69660 && time <= 69680) {
			check = true;
		}
		else if (time >= 69840 && time <= 69860) {
			check = true;
		}
		else if (time >= 70010 && time <= 70030) {
			check = true;
		}
		else if (time >= 70180 && time <= 70200) {
			check = true;
		}
		else if (time >= 70530 && time <= 70550) {
			check = true;
		}
		else if (time >= 70620 && time <= 70640) {
			check = true;
		}
		else if (time >= 70710 && time <= 70730) {
			check = true;
		}
		else if (time >= 70790 && time <= 70810) {
			check = true;
		}
		else if (time >= 70880 && time <= 70900) {
			check = true;
		}
		else if (time >= 70970 && time <= 70990) {
			check = true;
		}
		else if (time >= 71060 && time <= 71080) {
			check = true;
		}
		else if (time >= 71140 && time <= 71160) {
			check = true;
		}
		else if (time >= 71230 && time <= 71250) {
			check = true;
		}
		else if (time >= 71490 && time <= 71510) {
			check = true;
		}
		else if (time >= 71750 && time <= 71770) {
			check = true;
		}
		else if (time >= 72010 && time <= 72030) {
			check = true;
		}
		else if (time >= 72270 && time <= 72290) {
			check = true;
		}
		else if (time >= 72450 && time <= 72470) {
			check = true;
		}
		else if (time >= 72620 && time <= 72640) {
			check = true;
		}
		else if (time >= 72970 && time <= 72990) {
			check = true;
		}
		else if (time >= 73320 && time <= 73340) {
			check = true;
		}
		else if (time >= 73660 && time <= 73680) {
			check = true;
		}
		else if (time >= 74000 && time <= 74020) {
			check = true;
		}
		else if (time >= 74090 && time <= 74110) {
			check = true;
		}
		else if (time >= 74170 && time <= 74190) {
			check = true;
		}
		else if (time >= 74260 && time <= 74280) {
			check = true;
		}
		else if (time >= 74340 && time <= 74360) {
			check = true;
		}
		else if (time >= 74520 && time <= 74540) {
			check = true;
		}
		else if (time >= 74690 && time <= 74710) {
			check = true;
		}
		else if (time >= 74860 && time <= 74880) {
			check = true;
		}
		else if (time >= 75040 && time <= 75060) {
			check = true;
		}
		else if (time >= 75210 && time <= 74230) {
			check = true;
		}
		else if (time >= 75390 && time <= 75410) {
			check = true;
		}
		else if (time >= 75730 && time <= 75750) {
			check = true;
		}
		else if (time >= 76080 && time <= 76100) {
			check = true;
		}
		else if (time >= 76430 && time <= 76450) {
			check = true;
		}
		else if (time >= 76770 && time <= 76790) {
			check = true;
		}
		else if (time >= 76850 && time <= 76870) {
			check = true;
		}
		else if (time >= 76930 && time <= 76950) {
			check = true;
		}
		else if (time >= 77110 && time <= 77130) {
			check = true;
		}
		else if (time >= 77290 && time <= 77310) {
			check = true;
		}
		else if (time >= 77470 && time <= 77490) {
			check = true;
		}
		else if (time >= 77640 && time <= 77660) {
			check = true;
		}
		else if (time >= 77810 && time <= 77830) {
			check = true;
		}
		else if (time >= 77990 && time <= 78010) {
			check = true;
		}
		else if (time >= 78160 && time <= 78180) {
			check = true;
		}
		else if (time >= 78510 && time <= 78530) {
			check = true;
		}
		else if (time >= 78860 && time <= 78880) {
			check = true;
		}
		else if (time >= 79210 && time <= 79230) {
			check = true;
		}
		else if (time >= 79560 && time <= 79580) {
			check = true;
		}
		else if (time >= 79630 && time <= 79650) {
			check = true;
		}
		else if (time >= 79720 && time <= 79740) {
			check = true;
		}
		else if (time >= 79800 && time <= 79820) {
			check = true;
		}
		else if (time >= 79900 && time <= 79920) {
			check = true;
		}
		return check;
	}
	bool checkBeat4(long int time) {
		bool check = false;
		time = time + 870;
		if (time >= 80060 && time <= 80080) {
			check = true;
		}
		else if (time >= 80250 && time <= 80270) {
			check = true;
		}
		else if (time >= 80420 && time <= 80440) {
			check = true;
		}
		else if (time >= 80600 && time <= 80620) {
			check = true;
		}
		else if (time >= 80750 && time <= 80770) {
			check = true;
		}
		else if (time >= 80940 && time <= 80960) {
			check = true;
		}
		else if (time >= 81290 && time <= 81310) {
			check = true;
		}
		else if (time >= 81630 && time <= 81650) {
			check = true;
		}
		else if (time >= 81980 && time <= 82000) {
			check = true;
		}
		else if (time >= 82330 && time <= 82350) {
			check = true;
		}
		else if (time >= 82410 && time <= 82430) {
			check = true;
		}
		else if (time >= 82500 && time <= 82520) {
			check = true;
		}
		else if (time >= 82580 && time <= 82600) {
			check = true;
		}
		else if (time >= 82670 && time <= 82690) {
			check = true;
		}
		else if (time >= 82850 && time <= 82870) {
			check = true;
		}
		else if (time >= 83020 && time <= 83040) {
			check = true;
		}
		else if (time >= 83200 && time <= 83220) {
			check = true;
		}
		else if (time >= 83370 && time <= 83390) {
			check = true;
		}
		else if (time >= 83720 && time <= 83740) {
			check = true;
		}
		else if (time >= 84060 && time <= 84080) {
			check = true;
		}
		else if (time >= 84410 && time <= 84430) {
			check = true;
		}
		else if (time >= 84760 && time <= 84780) {
			check = true;
		}
		else if (time >= 85100 && time <= 85120) {
			check = true;
		}
		else if (time >= 85180 && time <= 85200) {
			check = true;
		}
		else if (time >= 85280 && time <= 85300) {
			check = true;
		}
		else if (time >= 85360 && time <= 85380) {
			check = true;
		}
		else if (time >= 85450 && time <= 85470) {
			check = true;
		}
		else if (time >= 85610 && time <= 85630) {
			check = true;
		}
		else if (time >= 85800 && time <= 85820) {
			check = true;
		}
		else if (time >= 85960 && time <= 85980) {
			check = true;
		}
		else if (time >= 86140 && time <= 86160) {
			check = true;
		}
		else if (time >= 86310 && time <= 86330) {
			check = true;
		}
		else if (time >= 86490 && time <= 86510) {
			check = true;
		}
		else if (time >= 86840 && time <= 86860) {
			check = true;
		}
		else if (time >= 87190 && time <= 87210) {
			check = true;
		}
		else if (time >= 87530 && time <= 87550) {
			check = true;
		}
		else if (time >= 87870 && time <= 87890) {
			check = true;
		}
		else if (time >= 87950 && time <= 87970) {
			check = true;
		}
		else if (time >= 88040 && time <= 88060) {
			check = true;
		}
		else if (time >= 88120 && time <= 88140) {
			check = true;
		}
		else if (time >= 88220 && time <= 88240) {
			check = true;
		}
		else if (time >= 88390 && time <= 88410) {
			check = true;
		}
		else if (time >= 88570 && time <= 88590) {
			check = true;
		}
		else if (time >= 88730 && time <= 88750) {
			check = true;
		}
		else if (time >= 88900 && time <= 88920) {
			check = true;
		}
		else if (time >= 89090 && time <= 89110) {
			check = true;
		}
		else if (time >= 89610 && time <= 89630) {
			check = true;
		}
		else if (time >= 89960 && time <= 89980) {
			check = true;
		}
		else if (time >= 90310 && time <= 90330) {
			check = true;
		}
		else if (time >= 90650 && time <= 90670) {
			check = true;
		}
		else if (time >= 90740 && time <= 90760) {
			check = true;
		}
		else if (time >= 90840 && time <= 90860) {
			check = true;
		}
		else if (time >= 90910 && time <= 90930) {
			check = true;
		}
		else if (time >= 91000 && time <= 91020) {
			check = true;
		}
		else if (time >= 91160 && time <= 91180) {
			check = true;
		}
		else if (time >= 91350 && time <= 91370) {
			check = true;
		}
		else if (time >= 91520 && time <= 91540) {
			check = true;
		}
		else if (time >= 91690 && time <= 91710) {
			check = true;
		}
		else if (time >= 91850 && time <= 91870) {
			check = true;
		}
		else if (time >= 92040 && time <= 92060) {
			check = true;
		}
		else if (time >= 92390 && time <= 92410) {
			check = true;
		}
		else if (time >= 92740 && time <= 92760) {
			check = true;
		}
		else if (time >= 93080 && time <= 93100) {
			check = true;
		}
		else if (time >= 93420 && time <= 93440) {
			check = true;
		}
		else if (time >= 93510 && time <= 93600) {
			check = true;
		}
		else if (time >= 93600 && time <= 93620) {
			check = true;
		}
		else if (time >= 93690 && time <= 93710) {
			check = true;
		}
		else if (time >= 93770 && time <= 93790) {
			check = true;
		}
		else if (time >= 93960 && time <= 93980) {
			check = true;
		}
		else if (time >= 94120 && time <= 94140) {
			check = true;
		}
		else if (time >= 94290 && time <= 94310) {
			check = true;
		}
		else if (time >= 94470 && time <= 94490) {
			check = true;
		}
		else if (time >= 94650 && time <= 94670) {
			check = true;
		}
		else if (time >= 94820 && time <= 94840) {
			check = true;
		}
		else if (time >= 95160 && time <= 95180) {
			check = true;
		}
		else if (time >= 95510 && time <= 95530) {
			check = true;
		}
		else if (time >= 95860 && time <= 95880) {
			check = true;
		}
		else if (time >= 96200 && time <= 96220) {
			check = true;
		}
		else if (time >= 96290 && time <= 96310) {
			check = true;
		}
		else if (time >= 96370 && time <= 96390) {
			check = true;
		}
		else if (time >= 96460 && time <= 96480) {
			check = true;
		}
		else if (time >= 96550 && time <= 96570) {
			check = true;
		}
		else if (time >= 96720 && time <= 96740) {
			check = true;
		}
		else if (time >= 96890 && time <= 96910) {
			check = true;
		}
		else if (time >= 97060 && time <= 97080) {
			check = true;
		}
		else if (time >= 97240 && time <= 97260) {
			check = true;
		}
		else if (time >= 97400 && time <= 97420) {
			check = true;
		}
		else if (time >= 98280 && time <= 98300) {
			check = true;
		}
		else if (time >= 98630 && time <= 98650) {
			check = true;
		}
		else if (time >= 98970 && time <= 98990) {
			check = true;
		}
		else if (time >= 99060 && time <= 99080) {
			check = true;
		}
		else if (time >= 99140 && time <= 99160) {
			check = true;
		}
		else if (time >= 99230 && time <= 99250) {
			check = true;
		}
		else if (time >= 99330 && time <= 99350) {
			check = true;
		}
		else if (time >= 99480 && time <= 99500) {
			check = true;
		}
		else if (time >= 99670 && time <= 99690) {
			check = true;
		}
		else if (time >= 99840 && time <= 99860) {
			check = true;
		}
		return check;
	}
	bool checkBeat5(long int time) {
		bool check = false;
		time = time + 870;
		if (time >= 100010 && time <= 100030) {
			check = true;
		}
		else if (time >= 100180 && time <= 100200) {
			check = true;
		}
		else if (time >= 100360 && time <= 100380) {
			check = true;
		}
		else if (time >= 100710 && time <= 100730) {
			check = true;
		}
		else if (time >= 101060 && time <= 101080) {
			check = true;
		}
		else if (time >= 101400 && time <= 101420) {
			check = true;
		}
		else if (time >= 101750 && time <= 101770) {
			check = true;
		}
		else if (time >= 102100 && time <= 102120) {
			check = true;
		}
		else if (time >= 102250 && time <= 102270) {
			check = true;
		}
		else if (time >= 102440 && time <= 102460) {
			check = true;
		}
		else if (time >= 102620 && time <= 102640) {
			check = true;
		}
		else if (time >= 102790 && time <= 102810) {
			check = true;
		}
		else if (time >= 102960 && time <= 102980) {
			check = true;
		}
		else if (time >= 103140 && time <= 103160) {
			check = true;
		}
		else if (time >= 103320 && time <= 103340) {
			check = true;
		}
		else if (time >= 103490 && time <= 103510) {
			check = true;
		}
		else if (time >= 103660 && time <= 103680) {
			check = true;
		}
		else if (time >= 103830 && time <= 103850) {
			check = true;
		}
		else if (time >= 104010 && time <= 104180) {
			check = true;
		}
		else if (time >= 104180 && time <= 104200) {
			check = true;
		}
		else if (time >= 104350 && time <= 104370) {
			check = true;
		}
		else if (time >= 104520 && time <= 104540) {
			check = true;
		}
		else if (time >= 104700 && time <= 104720) {
			check = true;
		}
		else if (time >= 104790 && time <= 104810) {
			check = true;
		}
		else if (time >= 104870 && time <= 104890) {
			check = true;
		}
		else if (time >= 104960 && time <= 104980) {
			check = true;
		}
		else if (time >= 105050 && time <= 105070) {
			check = true;
		}
		else if (time >= 105140 && time <= 105160) {
			check = true;
		}
		else if (time >= 105220 && time <= 105240) {
			check = true;
		}
		else if (time >= 105300 && time <= 105320) {
			check = true;
		}
		else if (time >= 105380 && time <= 105400) {
			check = true;
		}
		else if (time >= 105480 && time <= 105500) {
			check = true;
		}
		else if (time >= 105560 && time <= 105580) {
			check = true;
		}
		else if (time >= 105650 && time <= 105670) {
			check = true;
		}
		else if (time >= 105730 && time <= 105750) {
			check = true;
		}
		else if (time >= 105820 && time <= 105840) {
			check = true;
		}
		else if (time >= 108910 && time <= 105930) {
			check = true;
		}
		return check;
	}
private:
};