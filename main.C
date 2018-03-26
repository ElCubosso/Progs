#include <iostream>
#include <string>
#include <stdlib.h>
#include "robot.h"
#include "player.h"
#include "tiger.h"
#include "menu.h"
#include "lootbox.h"
#include "weapon.h"


int main  {
	cout<<"Welcome to TIGER DEFENSE!!!!!!!!!!!!!!!!";
	cout<<"Evil robot have killed all of the tigers in the universe except for the ones on jupiter";
	cout<<"You are tasked with saving as many tigers as possible in the Forest of Fangs";
	cout<<"\n \n \n \nINSTRUCTIONS\n \n \n \n";
	cout<<"You will be presented with scenarios where you must chose an option in the form of a number";
	cout<<"Good luck\nWe are counting on you";

	player Josh;
	menu Menu;

	srand(0);

	while (player.getHealth>0)  {
		num = rand()%3;
		switch (num)  {
			case 0:
				robot r;
				menu.genRobot(r, Josh);
			case 1:
				tiger t;
				menu.genTiger(Josh, t);
			case 2:
				lootbox lb;
				menu.genLB(lb, Josh);  
		}
	}









}