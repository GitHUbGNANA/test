#include <iostream>

#include <string>


class Entity
{


};

class player : public Entity

{

};

class Enemy : public Entity
{

};


int main(){

	
	player* player = new player ();
	Entity * e = player;
	Entity* e1 = new Enemy();

	Player *p = e1 ;
}

