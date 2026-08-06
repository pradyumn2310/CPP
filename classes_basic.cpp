#include<iostream>
using namespace std;

class Player{
    public:
    static int player_value;
    int x, y;
    int speed;
    
    void Player_speed(int speed, int x, int y){
        cout<<"Enter the player's id you want to view:"; 
        cin>>player_value;
        cout<<endl;
        cout<<"Viewing Player-> "<<player_value<<endl;
        
        cout<<"The player is moving at a speed of "<<speed <<"mph" <<endl;
        cout<<"Player's position is "<<x <<", "<<y<<endl;
        
    }
};
int Player::player_value=0;



int main(){
    Player obj1;
    obj1.x=9;
    obj1.y=9;
    obj1.speed=90;
    obj1.Player_speed(90,8,9);
    return 0;
    
    
}

