#include"player.h"

Player::Player()
{
  m_Texture.loadFromFile("/home/lisha/graphics/player.png");
  m_Sprite.setTexture(m_Texture);  //center the sprite origin
  m_Sprite.setOrigin(25,25); //Assuming 50*50 image
} 

void Player::spawn(Vector2f resolution)
{
    //place payer at center
    m_Position.x = resolution.x/2;
    m_Position.y = resolution.y/2;
    m_Sprite.setPosition(m_Position);
} 

void Player::moveLeft()
{
  m_LeftPressed = true;
}
void Player::moveRight()
{
  m_RightPressed = true;
}
void Player::moveUp()
{
  m_UpPressed = true;
}
void Player::moveDown()
{
  m_DownPressed = true;
}
void Player::stopLeft() 
{
 m_LeftPressed = false;
} 
void Player::stopRight() 
{
 m_RightPressed = false;
} 
void Player::stopUp() 
{
 m_UpPressed = false;
} 
void Player::stopDown() 
{
 m_DownPressed = false;
} 
     
void Player::update(float elapsedTime)
{
 //move based on key pressed
 
  if(m_UpPressed)
    m_Position.y -= m_Speed * elapsedTime; 
  if(m_DownPressed)
    m_Position.y += m_Speed * elapsedTime; 
  if(m_LeftPressed)
    m_Position.x -= m_Speed * elapsedTime; 
  if(m_RightPressed)
    m_Position.x += m_Speed * elapsedTime;          
     
} 
 
