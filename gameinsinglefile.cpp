#include<bits/stdc++.h>

using namespace std;
//board for drawing and checking purpose
class Board{
	private:
	char spaces[9];
	public:
		Board();
		void draw()const ;
		bool checkwinner(char marker)const;
		bool checktie()const;
		bool placemarker(char mark,int place);
		
};
   Board::Board() {
   	for(int i=0;i<9;i++){
   		spaces[i]=' ';
	   }
   }
   void Board::draw()const{
   	cout << '\n';
    cout << "   |   |   " << endl;
    cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << endl;
   }
   bool Board::checkwinner(char marker)const{
   	const int wincondition[8][3]={
	   {0,1,2},{3,4,5},{6,7,8},
	   {0,3,6},{1,4,7},{2,5,8},
	   {0,4,8},{2,4,6}};
	   for(int i=0;i<8;i++){
	   	if(spaces[wincondition[i][0]]==marker && spaces[wincondition[i][1]]==marker && spaces[wincondition[i][2]] == marker && spaces[i]!=' ')
	   	return true;
	   }
	   return false;
   }
   bool Board::checktie()const{
   	for(int i=0;i<9;i++){
   		if(spaces[i] ==' ')
   		return false;
	   }
	   return true;
   }
   
   bool Board::placemarker(char mark,int place){
   	if(place >=0 &&place<=8 && spaces[place]==' '){
   		spaces[place]=mark;
   		return true;
	   }
	   return false;
   }
   
//class player for make move and getting marker
class Player{
	private:
		char marker;
	public:
		Player(char marker);
		void makemove(Board &board)const;
		char getmark()const;
};

Player::Player(char marker):marker(marker){}
void Player::makemove(Board &board)const{
	int number;
	while(true){
		cout << "Enter a number to place your mark (1-9) like a mobile keypad: ";
        cin >> number;
        number--; // Adjust for 0-based indexing
        if(board.placemarker(marker,number)){
        	board.draw();
        	break;
		}
		else {
			cout<<"Invalid move try again"<<endl;
		}
	}
}


char Player::getmark()const{
	return marker;
}



class Computer{
	private:
		char marker;
	public:
		Computer(char marker);
		void makemove(Board &board)const;
		char getmark()const;
};

Computer::Computer(char marker): marker(marker){}//constructor
char Computer::getmark()const{
	return marker;
}
void Computer:: makemove(Board &board)const{
	int number;
	while(true){
	number=rand()%9;
	if(board.placemarker(marker,number))
	break;
	}	
}
//class game for creating board and players
class Game{
	private:
			Board board;
			Player player1;
			Player player2;
			Computer computer;
	        bool running;
	        int mode;
	public:
		Game(int mode);
		void play();
	
};
Game::Game(int mode):player1('O'),player2('X'),computer('X'),running(true),mode(mode){
			srand(time(0));
			board.draw();
			}

void Game::play(){
	if(mode==1){
		while(running){
			player1.makemove(board);
			if(board.checkwinner(player1.getmark())){
				cout<<"player 1 wins";
				break;
			}
			if(board.checktie()){
				cout<<"Its a tie try again";
			}
			
			computer.makemove(board);
			board.draw();
			if(board.checkwinner(computer.getmark())){
				cout<<"computer wins!! hardluck"<<endl;
				break;
			}
			if(board.checktie()){
				cout<<"Its a tie try again";
			}	
		}
	}
	else if(mode==2){
		while(running){
			player1.makemove(board);
			if(board.checkwinner(player1.getmark())){
				cout<<"player 1 wins"<<endl;
				break;
			}
			if(board.checktie()){
				cout<<"Its a tie try again"<<endl;
			}
			
			player2.makemove(board);
			board.draw();
			if(board.checkwinner(player2.getmark())){
				cout<<"player 2 wins"<<endl;
				break;
			}
			if(board.checktie()){
				cout<<"Its a tie try again";
			}
			
		}
	}
}






int main() {
	while(true){
	
     cout<<	"Welcome to the game "<<endl;
     cout<<" select which mode do you want to play"<<endl;
     cout<<" 1.player vs computer"<<endl;	
     cout<<" 2.player vs player"<<endl;
     cout<<" 3.Exit"<<endl;
     int choice;
     cin>>choice;
     if(choice ==3){return 0;
	 }
	 else if(choice>3){
		cout<<"Invlid choice try again"<<endl;	 }
     Game game(choice);
     game.play();
 }
     
	return 0;
}
