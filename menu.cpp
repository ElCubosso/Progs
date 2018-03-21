

#include <iostream>
#include <string>

class menu  {
    void genTiger(player Player, );
    void genRobot;
    void genLB;
}

void menu::genTiger(player Player, tiger Tiger)  {
        int choice;
        cout<<"You have encountered a tiger\n";
        cout<<"What would you like to do\n";
        cout<<"1.) Ask for healing\n";
        cout<<"2.) Take Tiger\n";
        cout<<"3.) Flip your hair\n";
        cout<<"4.) Taunt\n";
        cout<<"5.) Leave\n";
        cin<<choice;
        switch (choice)  {
            1 cout<<"you ask for healing\n";
                if (Player.getHealth<100)  {
                    Player.setHealth = Player.getHealth + Tiger.getHealing;
                }
                else  {
                    cout<<"You already have max health\n";
                }
            2 cout<<"You take the tiger\n";
                Player.setTiger = Tiger;
           
 3 cout<<"You flip your "<<Player.getHaircolor<<" hair\n";    
            4 cout<<Player.getTaunt;
            5 cout<"You run away\n";
        }

}
void menu::genRobot(robot Rob, player Player)  {
    int choice;
    int choice2;
    cout<<"1.)Fight the Robot";
    cout<<"2.)Flip your hair";
    cout<<"3.)Taunt";
    cout<<"4.)Leave";
    cin<<choice;
    switch (choice)  {
        1 cout<<"1.)Attack";
             cout<<"2.)Defend";
             cin<<choice2;
            if (Rob.choice==1) & (choice2==1)  {
            	Rob.attack;
            	Player.attack;
                //Player.setHealth=Player.getHealth - Rob.getDamage;
                //Rob.setHealth=Rob.getHealth - Player.getDamage;
            }
            else if (Rob.choice==2) & (choice2==2)   {
            	Rob.Defend;
            	Player.defend;
                //Player.setHealth=Player.getHealth - Rob.getDFdamage;
                //Rob.setHealth=Rob.getHealth - (Player.getDamage - Rob.getAbsorb);
            }
            else if (Rob.choice==1) & (choice2==2)  {
            	Player.defend;
            	Rob.attack;
            }
            else if (Rob.choice==2) & (choice2==1)  {
            	Rob.defend;
            	Player.attack;
            }
        2 cout<<"You flip your"<<Player.getHaircolor<<"hair\n";

        3 cout<<Player.getTaunt;
        4 cout<<"You leave":
        }
}

void menu::genLB(lootbox LB, player Player, weapon Wep)  {
	int choice;
	cout<<"You encounter a Loot Box!";
	cout<<"What would you like to do";
	cout<<"1.)Gamble weapon";
	cout<<"2.)Gamble Health";
	cout<<"3.)exit";
	
}


