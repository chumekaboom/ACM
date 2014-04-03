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
#include <set>

#include <iomanip>
using namespace std;
set<string> solutions;
vector<vector<int> > board;
void print_board(vector<vector<int> > board_current)
{
for(int i=0;i<8;i++)
	{
	for(int j=0;j<8;j++)
		cout<<board_current[i][j];
	cout<<"\n";
	}

}


bool update_board(int row, int column,vector<vector<int> > board_current,bool update)
{
int temp;
if(board_current[row][column]==0)board_current[row][column]=1;
for(int i=0;i<8;i++)
	{
	if(i!=column)board_current[row][i]=2;
	}
for(int i=0;i<8;i++)
	{	
	if(i!=row)board_current[i][column]=2;
	}

int x,y;
x=column;
y=row;
while(y<7&&x<7)
	{
	x++;
	y++;
	board_current[y][x]=2;
	}
x=column;
y=row;
while(y>0&&x>0)
	{
	x--;
	y--;
	board_current[y][x]=2;
	}
x=column;
y=row;
while(y<7&&x>0)
	{
	x--;
	y++;
	board_current[y][x]=2;
	}
x=column;
y=row;
while(x<7&&y>0)
	{
	y--;
	x++;
	board_current[y][x]=2;
	}
if(update)board=board_current;

}



void solved(vector<vector<int> > board_current)
{
int count=0;
for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
		if(board_current[i][j]==1)count++;
if(count==8)
	{
	string temp_string="        ";
//	print_board(board_current)
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			if(board_current[i][j]==1) temp_string[i]=(j+1)+'0';
	solutions.insert(temp_string);
	}
}



vector<vector<int> > valid_moves(vector<vector<int> > board_current)
{
vector<vector<int> > moves;
moves.resize(2);
for(int i=0;i<8;i++)
	for(int j=0;j<8;j++)
		{
		if(board_current[i][j]==0)
			{
			moves[0].push_back(i);
			moves[1].push_back(j);
			}
		}
return moves;
}



void solve(vector<vector<int> > board_current,vector<vector<int> > old_moves)
{
vector<vector<int> > moves=valid_moves(board_current);
solved(board_current);
for(int i=0;i<old_moves[0].size();i++)
	for(int j=0;j<moves[0].size();j++)
		if(old_moves[0][i]==moves[0][j]&&old_moves[1][i]==moves[1][j])
			{
			moves[0].erase(moves[0].begin()+j);
			moves[1].erase(moves[1].begin()+j);
			}	

for(int i=0;i<moves[0].size();i++)
	{
	
	bool junk=update_board(moves[0][i],moves[1][i],board_current,1);
	old_moves[0].push_back(moves[0][i]);
	old_moves[1].push_back(moves[1][i]);
	solve(board,old_moves);
	
	}

}



int main()
{
int row,column;
int runs;
cin>>runs;
for(int p=0;p<runs;p++)
{
cin>>row>>column;
board.clear();
solutions.clear();
board.resize(8);
for(int i=0;i<8;i++)
	board[i].resize(8);
//1 is a queen, 2 is an attackable spot move, 0 is a blank space
board[column-1][row-1]=1;//zero indexing
update_board(column-1,row-1,board,1);
vector<vector<int> >opoo;
opoo.resize(2);

solve(board,opoo);
vector<string> answer;
for (std::set<string>::iterator it=solutions.begin(); it!=solutions.end(); ++it)
    answer.push_back(*it);
for(int i=0;i<answer.size();i++)
	{
	string temp="";	
	for(int j=0;j<8;j++)
		if(j!=7)temp=temp+answer[i][j]+" ";
		else 	temp=temp+answer[i][j];	
	answer[i]=temp;
	}
cout<<"SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n"; 
for(int i=0;i<answer.size();i++)
	{
	cout<<setw(2)<<right<<i+1;
	cout<<setw(21)<<right<<answer[i]<<"\n";
	}
if(p!=runs-1)cout<<"\n";
}
}
