////pong game let's start
//#include<iostream>
//#include<cmath>
//#include<time.h>
//#include<conio.h>
//#include<windows.h>
//
//using namespace std;
//
//
//
//class paddle////another classs
//{
//private:
//	int x, y;
//	int originalX, originalY;
//public:
//	//default constructor
//	paddle()
//	{
//		x = 0;
//		y = 0;
//	}
//	//overloaded constructor
//	paddle(int posx, int posy) :paddle()
//	{
//		originalX = posx;
//		originalY = posy;
//		x = posx;
//		y = posy;
//	}
//	inline void Reset()
//	{
//		x = originalX;
//		y = originalY;
//	}
//	inline int getX()
//	{
//		return x;
//	}
//	inline int getY()
//	{
//		return y;
//	}
//	inline void moveup()
//	{
//		y--;
//	}
//	inline void movedown()
//	{
//		y++;
//	}
//	friend ostream& operator<<(ostream& out, paddle c)
//	{
//		out << "paddle [" << c.x << "," << c.y << "]" << endl;
//		return out;
//	}
//};
//enum eDir { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };
//class Ball  //class of ball
//{
//private:
//	int x, y;
//	//eDir right ,stop,left,upleft,downleft,upright,downright;
//	int originalX, originalY;
//	eDir direction;
//public:
//	Ball(int posx, int posy)
//	{
//		originalX = posx;
//		originalY = posy;
//		x = posx;
//		y = posy;
//		direction = STOP;
//	}
//	void Reset()
//	{
//		x = originalX;
//		y = originalY;
//		direction = STOP;
//	}
//	void changedir(eDir d)
//	{
//		direction = d;
//	}
//	void randomdir()
//	{
//		direction = (eDir)((rand() % 6) + 1);
//	}
//	inline int getX()
//	{
//		return x;
//	}
//	inline int getY()
//	{
//		return y;
//	}
//	inline eDir getdir()
//	{
//		return direction;
//	}
//	void Move()
//	{
//		switch (direction)
//		{
//		case STOP:
//			break;
//		case LEFT:
//			x--;
//			break;
//		case RIGHT:
//			x++;
//			break;
//		case UPLEFT:
//			x--;
//			y--;
//			break;
//		case DOWNLEFT:
//			x--;
//			y++;
//			break;
//		case UPRIGHT:
//			x++;
//			y--;
//			break;
//		case DOWNRIGHT:
//			x++;
//			y++;
//			break;
//		default:
//			break;
//		}
//	}
//	friend ostream& operator<<(ostream& out, Ball c)
//	{
//		out << "ball [" << c.x << "," << c.y << "][" << c.direction << "]" << endl;
//		return out;
//	}
//};
//class Game_Play1 : public paddle//game manger
//{
//private:
//	int width, height;
//	int score1, score2;
//	char up1, down1, up2, down2;
//	bool quit;
//	Ball* ball;
//	paddle* player1;
//	paddle* player2;
//public:
//	Game_Play1(int w, int h)
//	{
//		srand(time(NULL));
//		quit = false;
//		up1 = 'a';  //first player will move up on w
//		up2 = 'b';    //second player will move up on i
//		down1 = 'c';    //first player will move down on s
//		down2 = 'd';     //second player will move up on k
//		score1 = score2 = 0;
//		width = w;
//		height = h;
//		//x,y coordinate for ball
//		ball = new Ball(w / 2, h / 2);
//		//x,y coordinate for paddles
//		player1 = new paddle(1, h / 2 - 3);
//		player2 = new paddle(w - 2, h / 2 - 3);
//	}
//	~Game_Play1()
//	{
//		delete ball, player1, player2;
//	}
//	void ScoreUp(paddle* player)
//	{
//		if (player == player1)
//		{
//			score1++;
//		}
//		else if (player == player2)
//		{
//			score2++;
//		}
//		ball->Reset();
//		player1->Reset();
//		player2->Reset();
//	}
//	void draw()
//	{
//		system("cls");
//
//		cout << endl;
//		for (int i = 0; i < height; i++)
//		{
//			for (int j = 0; j < width; j++)
//			{
//				int ballx = ball->getX();
//				int bally = ball->getY();
//				int player1x = player1->getX();
//				int player2x = player2->getX();
//				int player1y = player1->getY();
//				int player2y = player2->getY();
//				if (j == 0)
//					cout << "\xB2";
//
//				if (ballx == j && bally == i)
//
//					cout << "O"; ///ball
//
//				else if (player1x == j && player1y == i)
//
//					cout << "\xDB"; //palyer1
//
//				else if (player2x == j && player2y == i)
//
//					cout << "\xDB"; //player 2
//
//				//funct for player paddle
//
//				else if (player1x == j && player1y + 1 == i)
//
//					cout << "\xDB"; //palyer1
//				else if (player1x == j && player1y + 2 == i)
//
//					cout << "\xDB"; //palyer1
//				else if (player1x == j && player1y + 3 == i)
//
//					cout << "\xDB"; //palyer1
//				// above are four segemenst for player 1
//				//now for player 2
//
//				else if (player2x == j && player2y + 1 == i)
//
//					cout << "\xDB"; //palyer2
//				else if (player2x == j && player2y + 2 == i)
//
//					cout << "\xDB"; //palyer2
//				else if (player2x == j && player2y + 3 == i) //making wall and paddle using charmap
//
//					cout << "\xDB"; //palyer2
//				////////;;;;
//				else
//
//					cout << " ";
//
//				if (j == width - 1)
//
//					cout << "\xB2";
//			}
//			cout << endl;
//		}
//
//		cout << endl;
//		cout << " Score 1 is :" << score1 << endl;
//		cout << "Score 2 is :" << score2 << endl;
//	}
//	void input()
//	{
//		ball->Move();
//		int ballx = ball->getX();
//		int bally = ball->getY();
//		int player1x = player1->getX();
//		int player2x = player2->getX();
//		int player1y = player1->getY();
//		int player2y = player2->getY();
//		if (_kbhit()) /// if keyboard function is called
//			//means when key is pressed
//		{
//			//doing movements 
//			char current = _getch();
//			if (current == up1)
//				if (player1y > 0)
//				{
//					player1->moveup();
//					srand(time(0));
//					int random11 = (rand() % 2) + 1;
//					if (random11 == 1)
//					{
//						player2->moveup();
//					}
//					else
//					{
//						player2->movedown();
//					}
//				}
//
//
//
//
//			player2->moveup();
//			if (current == down1)
//				if (player1y + 4 < height)   //+4 because we have 4 segments and is less than heigth of map
//				{
//					player1->movedown();
//
//
//					int random11 = (rand() % 2) + 1;
//					if (random11 == 1)
//					{
//						player2->moveup();
//					}
//					else
//					{
//						player2->movedown();
//					}
//				}
//
//
//			if (ball->getdir() == STOP)
//				ball->randomdir();
//
//
//			if (current == 'q')
//				quit = true;
//		}
//	}
//	void input1()
//	{
//		ball->Move();
//		int ballx = ball->getX();
//		int bally = ball->getY();
//		int player1x = player1->getX();
//		int player2x = player2->getX();
//		int player1y = player1->getY();
//		int player2y = player2->getY();
//		if (_kbhit())
//		{
//			//doing movements 
//			char current = _getch();
//			if (current == up1)
//			{
//				if (player1y > 0)
//				{
//					player1->moveup();
//				}
//			}
//			if (current == up2)
//			{
//				if (player2y > 0)
//				{
//					player2->moveup();
//				}
//			}
//			if (current == down1)
//			{
//				if (player1y + 4 < height)   //+4 because we have 4 segments and is less than heigth of map
//				{
//					player1->movedown();
//				}
//			}
//			if (current == down2)
//			{
//				if (player2y + 4 < height)
//				{
//					player2->movedown();
//				}
//			}
//
//
//			if (ball->getdir() == STOP)
//			{
//				ball->randomdir();
//			}
//
//
//			if (current == 'q')
//			{
//				quit = true;
//			}
//		}
//	}
//	// collosion detetction fuc
//	void logic()
//	{
//		int ballx = ball->getX();
//		int bally = ball->getY();
//		int player1x = player1->getX();
//		int player2x = player2->getX();
//		int player1y = player1->getY();
//		int player2y = player2->getY();
//
//		//left paddle working
//		for (int i = 0; i < 4; i++)
//			if (ballx == player1x + 1)
//				if (bally == player1y + i)
//					ball->changedir((eDir)((rand() % 3) + 4)); // here we use enum bcz we randomize direction
//		// it will get  values if they shuft right paddle 
//		//will get value as given above
//		// //ball will ove right downright upright
////right paddle
//		for (int i = 0; i < 4; i++)  //i<4 here 4 reprsent height of paddle
//			if (ballx == player2x - 1) // minus bcz its one block left and we dont want balll to go into the paddle
//				if (bally == player2y + i) //here pluse bcz ball and paddle co ordinates become equal
//					ball->changedir((eDir)((rand() % 3) + 1)); // for left upleft donwnleft move 
//
//		//bottown wall
//		//check whether the ball hits the wall or not 
//		if (bally == height - 1) // again we minus it form h bcz we want ball to bounce back rathher movng out of paddle
//			ball->changedir(ball->getdir() == DOWNRIGHT ? UPRIGHT : UPLEFT);
//		//?ternary oper for inline if here if dir in downright we set it to upright user oper
//
//
//		//top wall
//		if (bally == 0)
//			ball->changedir(ball->getdir() == UPRIGHT ? DOWNRIGHT : DOWNLEFT); //it actually bunce off
//		//.................
//		//right wall
//		if (ballx == width - 1)
//			ScoreUp(player1);
//		//.............
//		//left wall
//		if (ballx == 0)
//			ScoreUp(player2);
//	}
//
//	//runing func
//	void run(int choice)
//	{
//		while (!quit)
//		{
//			draw();
//			if (choice == 1)
//			{
//				input();
//			}
//			else
//			{
//				input1();
//			}
//			logic();
//		}
//		Sleep(0);
//	}
//};
//int main()
//{
//	int choice;
//	cout << "enter the choice" << endl;
//	cout << "enter 1 for computer and player game" << endl;
//	cout << "enter 2 for player vs player" << endl;
//	cin >> choice;
//
//	Game_Play1 g(20, 20);
//	//c.draw();
//	g.run(choice);
//	return 0;
//}