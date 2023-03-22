#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH{ 800.f };
const float WINDOW_HEIGHT{ 800.f };
const std::string WINDOW_TITLE{ "SFML SPACE SHOOTER " };
const size_t FPS{ 60 };

const std::string IMAGES_FOLDER{ "images\\" };
const std::string PLAYER_FILE_NAME{ "playerShip2_orange.png" };
//const sf::Vector2f PLAYER_START_POS{ WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 };


const int METEORS_QTY{ 10 };

const std::string LASER_FILE_NAME{ "laserRed03.png" };
const float LASER_SPEED = -15.f;
const int FIRE_COOLDOWN = 100;


const float PLAYER_WIDTH = 99.f;
const float PLAYER_HEIGHT = 75.f;
float PLAYER_SPEEDX = 5.f;

const sf::Vector2f PLAYER_START_POS{ (WINDOW_WIDTH - PLAYER_WIDTH) / 2.f,WINDOW_HEIGHT - PLAYER_HEIGHT };
 //ËËËËËËË

/*#pragma once 
#include <string> 
#include "SFML/Graphics.hpp" 
	 const float WINDOW_WIDTH{ 800.f };
 const float WINDOW_HEIGHT{ 800.f };
 const std::string WINDOW_TITLE{ "SFML Space shooter" };
 const unsigned int FPS{ 60 };

 const std::string PLAYER_FILE_NAME = "images\\Player.png";
 const float PLAYER_WIDTH = 99.f;
 const float PLAYER_HEIGHT = 75.f;
 sf::Vector2f PLAYER_START_POS{ (WINDOW_WIDTH - PLAYER_WIDTH) / 2.f,WINDOW_HEIGHT - PLAYER_HEIGHT };

 float PLAYER_SPEEDX = 5.f;

 const int METEORS_QTY = 10;

 const std::string LASER_FILE_NAME = "images\\laser.png";
 const float SPEED_LASER = 15.f;*/