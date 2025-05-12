#include<SFML/Graphics.hpp>
using namespace sf;

class Player
{
 private:
         Vector2f m_Position;
         Sprite m_Sprite;
         Texture m_Texture;
         
         Vector2f m_Resolution;
         
         bool m_UpPressed;
         bool m_DownPressed;
         bool m_LeftPressed;
         bool m_RightPressed;
         
         float m_Speed =200;
         
 public:
        Player();    //constructor
        void spawn(Vector2f resolution);   //spawn player in center of screen 
        Sprite getSprite();              //return sprite to draw
        
        void moveLeft();
        void moveRight();
        void moveUP();
        void moveDown();
        void stopLeft();
        void stopRight();
        void stopUp();
        void stopDown();
        
        void update(float elapsedTime);
};            
