#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <iomanip>
using namespace std;
vector<vector<char> > board;
void print_board();
void print_score();
void print_legal(char current);
void move(char yy, char xx);
bool valid_move(int i,int j);
bool valid_up(int y,int x);
bool valid_down(int y,int x);
bool valid_left(int y,int x);
bool valid_right(int y,int x);
bool valid_right_bottom(int y,int x);
bool valid_left_top(int y,int x);
bool valid_left_bottom(int y,int x);
bool valid_right_top(int y,int x);

char current;
int main()
{
int rounds;
cin>>rounds;
board.resize(8,vector<char>(8));
for(int r=0;r<rounds;r++)
	{
	board.clear();
	for(int i=0;i<8;i++)
		{
		string temp;
		cin>>temp;
		for(int j=0;j<8;j++)
			board[i][j]=temp[j];
		}
	cin>>current;
	string action;
	while(cin>>action)
		{
		if(action=="Q")
			{
			print_board();
			if(r!=rounds-1)cout<<"\n";
			break;			
			}
		if(action=="L")print_legal(current);
		if(action[0]=='M')
			{
			move(action[1],action[2]);
			print_score();
			if(current=='B')current='W';
			else current='B';
			}		
		
		}
	}
}


void print_legal(char current)
{
bool valid_move_reached=false;
for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
		{
		if(valid_move(i,j))
			{
			if(!valid_move_reached)
			{		
			cout<<"("<<i+1<<","<<j+1<<")";
			valid_move_reached=true;
			}
			else
			cout<<" ("<<i+1<<","<<j+1<<")";
			}
		
		}
if(!valid_move_reached)
{
cout<<"No legal move.\n";
}
else cout<<"\n";
}


bool valid_move(int y,int x)
{
if(board[y][x]!='-')return false;

if(valid_up(y,x))
	{
	//cout<<"\n up ";
	return true;
	}
if(valid_down(y,x))
	{
	//cout<<"\ndown  ";
	return true;
	}
if(valid_left(y,x))
	{
	//cout<<"\nleft  ";
	return true;
	}
if(valid_right(y,x))
	{
	//cout<<"\n right ";
	return true;
	}
if(valid_right_bottom(y,x))
	{
	//cout<<"\n right bottom ";
	return true;
	}
if(valid_left_bottom(y,x))
	{
	//cout<<"\n left bottom ";
	return true;
	}
if(valid_right_top(y,x))
	{
	//cout<<"\n right top  ";
	return true;
	}
if(valid_left_top(y,x))
	{
	//cout<<"\n left top ";
	return true;
	}
return false;
}

bool valid_up(int y,int x)
{

bool cap=false;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x;
int y_temp=y-1;

while(y_temp>0&&board[y_temp][x]==oposite)
	{
	cap=true;
	y_temp--;
	}
if(y_temp>=0&&board[y_temp][x]==current&&cap) return true;
return false;


}
bool valid_down(int y,int x)
{
char oposite='B';
bool cap=false;
if(current=='B')oposite='W';

int x_temp=x;
int y_temp=y+1;
while(y_temp<7&&board[y_temp][x]==oposite)
	{
	cap=true;
	y_temp++;
	}
if(y_temp<8&&board[y_temp][x]==current&&cap) return true;

return false;
}


bool valid_left(int y,int x)
{

bool cap=false;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x-1;
int y_temp=y;

while(x_temp>0&&board[y][x_temp]==oposite)
	{
	cap=true;
	x_temp--;
	}

if(x_temp>=0&&board[y][x_temp]==current&&cap) return true;
return false;

}
bool valid_right(int y,int x)
{

bool cap=false;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x+1;
int y_temp=y;

while(x_temp<7&&board[y][x_temp]==oposite)
	{
	cap=true;
	x_temp++;
	}

if(x_temp<8&&board[y][x_temp]==current&&cap) return true;
return false;

}
bool valid_right_bottom(int y,int x)//bottom_right
{

bool cap=false;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x+1;
int y_temp=y+1;

while(x_temp<7&&y_temp<7&&board[y_temp][x_temp]==oposite)
	{
	cap=true;
	x_temp++;
	y_temp++;
	}

if(x_temp<8&&y_temp<8&&board[y_temp][x_temp]==current&&cap) return true;
return false;

}
bool valid_left_top(int y,int x)
{

bool cap=false;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x-1;
int y_temp=y-1;

while(x_temp>0&&y_temp>0&&board[y_temp][x_temp]==oposite)
	{
	cap=true;
	x_temp--;
	y_temp--;
	}

if(x_temp>=0&&y_temp>=0&&board[y_temp][x_temp]==current&&cap) return true;
return false;
}

bool valid_left_bottom(int y,int x)
{
bool cap=false;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x-1;
int y_temp=y+1;

while(x_temp>0&&y_temp<7&&board[y_temp][x_temp]==oposite)
	{
	cap=true;
	x_temp--;
	y_temp++;
	}

if(x_temp>=0&&y_temp<8&&board[y_temp][x_temp]==current&&cap) return true;
return false;
}
bool valid_right_top(int y,int x)
{

bool cap=false;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x+1;
int y_temp=y-1;

while(x_temp<7&&y_temp>0&&board[y_temp][x_temp]==oposite)
	{
	cap=true;
	x_temp++;
	y_temp--;
	}

if(x_temp<8&&y_temp>=0&&board[y_temp][x_temp]==current&&cap) return true;
return false;
}

void move(char yy, char xx)
{
int y=yy-'0'-1;
int x=xx-'0'-1;
char oposite='B';
if(current=='B')oposite='W';
int x_temp=x;
int y_temp=y-1;
board[y][x]=current;
bool moved=false;
if(valid_up(y,x))
	{
	moved=true;
	x_temp=x;
	y_temp=y-1;

	while(y_temp>0&&board[y_temp][x]==oposite)
		{
		board[y_temp][x]=current;		
		y_temp--;
		}
	board[y_temp][x]=current;
	}
if(valid_down(y,x))
	{

	moved=true;
	x_temp=x;
	y_temp=y+1;
	while(y_temp<7&&board[y_temp][x]==oposite)
	{
	board[y_temp][x]=current;		
	y_temp++;
	}
	board[y_temp][x]=current;	
	}
if(valid_left(y,x))
	{
	moved=true;
	x_temp=x-1;
	y_temp=y;
	while(x_temp>0&&board[y][x_temp]==oposite)
	{
	board[y][x_temp]=current;	
	x_temp--;
	}
	board[y][x_temp]=current;	
	}
if(valid_right(y,x))
	{
	moved=true;
	x_temp=x+1;
	y_temp=y;

	while(x_temp<7&&board[y][x_temp]==oposite)
	{
	board[y][x_temp]=current;	
	x_temp++;
	}
	board[y][x_temp]=current;	
	}
if(valid_right_bottom(y,x))
	{
	moved=true;
x_temp=x+1;
y_temp=y+1;

while(x_temp<7&&y_temp<7&&board[y_temp][x_temp]==oposite)
	{
	board[y_temp][x_temp]=current;	
	x_temp++;
	y_temp++;
	}
	board[y_temp][x_temp]=current;	
	}
if(valid_left_bottom(y,x))
	{
	moved=true;
x_temp=x-1;
y_temp=y+1;

while(x_temp>0&&y_temp<7&&board[y_temp][x_temp]==oposite)
	{
	board[y_temp][x_temp]=current;	
	x_temp--;
	y_temp++;
	}
	board[y_temp][x_temp]=current;	
	}
if(valid_right_top(y,x))
	{
	moved=true;
x_temp=x+1;
y_temp=y-1;

while(x_temp<7&&y_temp>0&&board[y_temp][x_temp]==oposite)
	{
	board[y_temp][x_temp]=current;	
	x_temp++;
	y_temp--;
	}
	board[y_temp][x_temp]=current;	
	}
if(valid_left_top(y,x))
	{
	moved=true;
x_temp=x-1;
y_temp=y-1;

while(x_temp>0&&y_temp>0&&board[y_temp][x_temp]==oposite)
	{
	board[y_temp][x_temp]=current;	
	x_temp--;
	y_temp--;
	}
	board[y_temp][x_temp]=current;	
	}
if(!moved)
	{
	if(current=='B')current='W';
	else current='B';
	move(yy,xx);
	}
};

void print_score()
{
map<char,int> scores;
for( int i=0;i<8;i++)
	for(int j=0;j<8;j++)
		{
		scores[board[i][j]]++;
		}
cout<<"Black -"<<setw(3)<<right<<scores['B']<<" White -"<<right<<setw(3)<<scores['W']<<"\n"<<left;
}

void print_board()
{
for(int i=0;i<8;i++)
	{
	for(int j=0;j<8;j++)
		cout<<board[i][j];
	cout<<"\n";
	}
}
