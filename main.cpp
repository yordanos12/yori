#include <SFML/Window.hpp>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


using namespace sf;
int width = 1024;
int height = 768;
int roadW = 2000;
int segL = 200;
float camD = 0.84;

void drawQuad(RenderWindow &w, Color c, int x1,int y1,int w1,int x2,int y2,int w2)
{
    ConvexShape shape(4);
    shape.setFillColor(c);
    shape.setPoint(0, Vector2f(x1-w1,y1));
    shape.setPoint(1, Vector2f(x2-w2,y2));
    shape.setPoint(2, Vector2f(x2+w2,y2));
    shape.setPoint(3, Vector2f(x1+w1,y1));
    w.draw(shape);
}

struct Line
{
  float x,y,z;
  float X,Y,W;
  float curve,spriteX,clip,scale;
  Sprite sprite;

  Line()
  {spriteX=curve=x=y=z=0;}

  void project(int camX,int camY,int camZ)
  {
    scale = camD/(z-camZ);
    X = (1 + scale*(x - camX)) * width/2;
    Y = (1 - scale*(y - camY)) * height/2;
    W = scale * roadW  * width/2;
  }

  void drawSprite(RenderWindow &app)
  {
    Sprite s = sprite;
    int w = s.getTextureRect().width;
    int h = s.getTextureRect().height;

    float destX = X + scale * spriteX * width/2;
    float destY = Y + 4;
    float destW  = w * W / 266;
    float destH  = h * W / 266;

    destX += destW * spriteX;
    destY += destH * (-1);

    float clipH = destY+destH-clip;
    if (clipH<0) clipH=0;

    if (clipH>=destH) return;
    s.setTextureRect(IntRect(0,0,w,h-h*clipH/destH));
    s.setScale(destW/w,destH/h);
    s.setPosition(destX, destY);
    app.draw(s);
    }
};

struct point
{ int x,y;};
int  main()
{
    sf::RenderWindow mainWindow( sf::VideoMode(1200,350) , "story 1"  );
    sf::Texture entry;
    entry.loadFromFile("images/mainn.jpg");
    sf::Sprite sprite_ui(entry);

        sf::SoundBuffer X;
        if(!X.loadFromFile("2.ogg"))
        {
        // std::cout << "ERROR" << std::endl;
        }
        sf::Sound sound;
        sound.setBuffer(X);

        sound.play();

    while ( mainWindow.isOpen() )
            {
                sf::Event mainn;
                sf::Vector2u TextureSize;
                sf::Vector2u WindowSize;




                while (mainWindow.pollEvent(mainn))
                {
                    if (mainn.type == sf::Event::Closed) mainWindow.close();
                         if (mainn.type == sf::Event::KeyPressed)
                                    {
                                        switch (mainn.key.code)
                                        {

                                        case  sf::Keyboard:: X : mainWindow.close(); break;
                                        default : break;
                                        }
                                    }
                }

                 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
               && sf::Mouse::getPosition(mainWindow).x >= 507
               && sf::Mouse::getPosition(mainWindow).y >= 300
               && sf::Mouse::getPosition(mainWindow).x <= 759
               && sf::Mouse::getPosition(mainWindow).y <= 347
               )
               {

    sf::RenderWindow mainWindow( sf::VideoMode(504,350) , "story 2"  );
    sf::Texture entry;
    entry.loadFromFile("images/x2.jpg");
    sf::Sprite sprite_ui(entry);




    while ( mainWindow.isOpen() )
            {

                sf::Event mainn;

                sf::Vector2u TextureSize;
                sf::Vector2u WindowSize;




                while (mainWindow.pollEvent(mainn))
                {
                    if (mainn.type == sf::Event::Closed) mainWindow.close();
                         if (mainn.type == sf::Event::KeyPressed)
                                    {
                                        switch (mainn.key.code)
                                        {

                                        case  sf::Keyboard:: X : mainWindow.close(); break;
                                        default : break;
                                        }
                                    }
                }

                 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
               && sf::Mouse::getPosition(mainWindow).x >= 39
               && sf::Mouse::getPosition(mainWindow).y >= 313
               && sf::Mouse::getPosition(mainWindow).x <= 149
               && sf::Mouse::getPosition(mainWindow).y <= 342
               )
               {





     sf::RenderWindow mainWindow( sf::VideoMode(504,360) , "story 3"  );
    sf::Texture entry;
    entry.loadFromFile("images/X31.jpg");
    sf::Sprite sprite_ui(entry);




    while ( mainWindow.isOpen() )
            {
                sf::Event mainn;




                sf::Vector2u TextureSize;
                sf::Vector2u WindowSize;




                while (mainWindow.pollEvent(mainn))
                {
                    if (mainn.type == sf::Event::Closed) mainWindow.close();
                         if (mainn.type == sf::Event::KeyPressed)
                                    {
                                        switch (mainn.key.code)
                                        {

                                        case  sf::Keyboard:: X : mainWindow.close(); break;
                                        default : break;
                                        }
                                    }
                }

                 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
               && sf::Mouse::getPosition(mainWindow).x >= 313
               && sf::Mouse::getPosition(mainWindow).y >= 286
               && sf::Mouse::getPosition(mainWindow).x <= 438
               && sf::Mouse::getPosition(mainWindow).y <= 321
               )
               {





 sf::RenderWindow mainWindow( sf::VideoMode(504,360) , "story 4"  );
    sf::Texture entry;
    entry.loadFromFile("images/X41.jpg");
    sf::Sprite sprite_ui(entry);




    while ( mainWindow.isOpen() )
            {
                sf::Event mainn;

                sf::Vector2u TextureSize;
                sf::Vector2u WindowSize;




                while (mainWindow.pollEvent(mainn))
                {
                    if (mainn.type == sf::Event::Closed) mainWindow.close();
                         if (mainn.type == sf::Event::KeyPressed)
                                    {
                                        switch (mainn.key.code)
                                        {

                                        case  sf::Keyboard:: X : mainWindow.close(); break;
                                        default : break;
                                        }
                                    }
                }

                 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
               && sf::Mouse::getPosition(mainWindow).x >= 409
               && sf::Mouse::getPosition(mainWindow).y >= 307
               && sf::Mouse::getPosition(mainWindow).x <= 434
               && sf::Mouse::getPosition(mainWindow).y <= 334
               )
               {
    sf::RenderWindow mainWindow( sf::VideoMode(504,360) , "story 5"  );
    sf::Texture entry;
    entry.loadFromFile("images/x51.jpg");
    sf::Sprite sprite_ui(entry);

    while ( mainWindow.isOpen() )
            {
                sf::Event mainn;
                sf::Vector2u TextureSize;
                sf::Vector2u WindowSize;



                while (mainWindow.pollEvent(mainn))
                {
                    if (mainn.type == sf::Event::Closed) mainWindow.close();
                         if (mainn.type == sf::Event::KeyPressed)
                                    {
                                        switch (mainn.key.code)
                                        {

                                        case  sf::Keyboard:: X : mainWindow.close(); break;
                                        default : break;
                                        }
                                    }
                }

                 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
               && sf::Mouse::getPosition(mainWindow).x >= 314
               && sf::Mouse::getPosition(mainWindow).y >= 320
               && sf::Mouse::getPosition(mainWindow).x <= 389
               && sf::Mouse::getPosition(mainWindow).y <= 349
               )
               {
            RenderWindow app(VideoMode(1000, 600), "Bel Adenat!");
            app.setFramerateLimit(60);














            Texture t[50];
            Sprite object[50];
            for(int i=1;i<=11;i++)
             {
               t[i].loadFromFile("images/"+std::to_string(i)+".png");
               t[i].setSmooth(true);
               object[i].setTexture(t[i]);
                }

            Texture bg;
            bg.loadFromFile("images/bg.png");
            bg.setRepeated(true);
            Sprite sBackground(bg);
            sBackground.setTextureRect(IntRect(0,0,5000,411));
            sBackground.setPosition(-1000,0);

            std::vector<Line> lines;

            for(int i=0;i<1600;i++)
             {
               Line line;
               line.z = i*segL;

               if (i>300 && i<700) line.curve=0.5;
               if (i>1100) line.curve=-0.7;

               if (i<300 && i%20==0) {line.spriteX=-2.5; line.sprite=object[5];}


               if (i<300 && i%15==0) {line.spriteX=-1.5; line.sprite=object[3];}
               if (i%17==0)          {line.spriteX=2.0; line.sprite=object[6];}
               if (i>300 && i%20==0) {line.spriteX=-1.2; line.sprite=object[3];}
               if (i>20 && i%100==0) {line.spriteX=-1.5; line.sprite=object[1];}
                 if (i>10 && i%200==0) {line.spriteX=-0.5; line.sprite=object[9];}
                if (i>100 && i%300==0) {line.spriteX=0.7; line.sprite=object[8];}
               if (i==400)           {line.spriteX=-1.2; line.sprite=object[7];}

               if (i>750) line.y = sin(i/30.0)*1500;

               lines.push_back(line);
             }

           int N = lines.size();
           float playerX = 0;
           int pos = 0;
           int H = 1500;

            while (app.isOpen())
            {
                Event e;
                while (app.pollEvent(e))
                {
                    if (e.type == Event::Closed)
                        app.close();
                }

          int speed=0;

          if (Keyboard::isKeyPressed(Keyboard::Right)) playerX+=0.1;
          if (Keyboard::isKeyPressed(Keyboard::Left)) playerX-=0.1;
          if (Keyboard::isKeyPressed(Keyboard::Up)) speed=100;
          if (Keyboard::isKeyPressed(Keyboard::Y)) speed*=3;
          if (Keyboard::isKeyPressed(Keyboard::W)) H+=100;
          if (Keyboard::isKeyPressed(Keyboard::S)) H-=100;

          pos+=speed;
          while (pos >= N*segL) pos-=N*segL;
          while (pos < 0) pos += N*segL;

          app.clear(Color(105,205,4));
          app.draw(sBackground);
          int startPos = pos/segL;
          int camH = lines[startPos].y + H;
          if (speed>0) sBackground.move(-lines[startPos].curve*2,0);
          if (speed<0) sBackground.move( lines[startPos].curve*2,0);

          int maxy = height;
          float x=0,dx=0;

          for(int n = startPos; n<startPos+300; n++)
           {
            Line &l = lines[n%N];
            l.project(playerX*roadW-x, camH, startPos*segL - (n>=N?N*segL:0));
            x+=dx;
            dx+=l.curve;

            l.clip=maxy;
            if (l.Y>=maxy) continue;
            maxy = l.Y;
            Color grass  = (n/3)%2?Color(0,100,0):Color(0,154,0);
            Color road   = Color(139,69,19);
            Line p = lines[(n-1)%N];

            drawQuad(app, grass, 0, p.Y, width, 0, l.Y, width);

            drawQuad(app, road,  p.X, p.Y, p.W, l.X, l.Y, l.W);
           }

            for(int n=startPos+300; n>startPos; n--)
              lines[n%N].drawSprite(app);





            app.display();
            }


               }








            mainWindow.clear( sf::Color( 127,127,127) );
            mainWindow.draw(sprite_ui);
            mainWindow.display();
            }


}
mainWindow.clear( sf::Color( 127,127,127) );
            mainWindow.draw(sprite_ui);
            mainWindow.display();
            }
            mainWindow.clear( sf::Color( 127,127,127) );
            mainWindow.draw(sprite_ui);
            mainWindow.display();
            }
mainWindow.clear( sf::Color( 127,127,127) );
            mainWindow.draw(sprite_ui);
            mainWindow.display();
            }
            mainWindow.clear( sf::Color( 127,127,127) );
            mainWindow.draw(sprite_ui);
            mainWindow.display();
            }
            mainWindow.clear( sf::Color( 127,127,127) );
            mainWindow.draw(sprite_ui);
            mainWindow.display();
            }
               }
               mainWindow.clear( sf::Color( 127,127,127) );
               mainWindow.draw(sprite_ui);
              mainWindow.display();
          }
             return 0;
            }
