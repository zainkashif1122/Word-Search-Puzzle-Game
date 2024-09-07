#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	//intro
	
	cout << "\t\t\t\t\t\t================================================================================" << endl;
	cout << "\t\t\t\t\t\t|                                                                              |" << endl;
	cout << "\t\t\t\t\t\t|                    WELCOME TO WORD SEARCH PUZZLE GAME                        |" << endl;
	cout << "\t\t\t\t\t\t|                                                                              |" << endl;
	cout << "\t\t\t\t\t\t================================================================================" << endl;
	
	//declaration
	
	char ch;
	int lvl;
	int size = 10;
	char playername[size];
	const int boardrow = 15;
	const int boardcolumn = 15;
	char board[boardrow][boardcolumn];
	char word[size];
	char easywords[5][10];
	int srow;
	int scolumn;
	int erow;
	int ecolumn;
	char mediumwords[5][10];
	char hardwords[5][10];
	char choice;
	int lives = 3;
	int score = 0;
	int length = 0;
	char names[size][size];
	int highestscores = 5;
    int scores[highestscores];
	
	//menu
	
	cout << endl;
	cout << endl;
	cout << "Press 'n' for New game" << endl;
	cout << "Press 'h' for high score" << endl;
	cout << "Press 'e' for exit" << endl;
	
	cin >> ch;
	
	//new game
	
	if(ch == 'n'||ch == 'N')
	{
		//player name
		
		cout << endl;
	    cout << "Enter your Name: ";
		cin >> playername;
		
		cout << endl;
		cout << "Hello " << playername << " cudie =) lets start the game and BEST OF LUCK!!!" << endl;   
	
	    //level selection
	
		cout << endl;
	    cout << "Press any number from (1,2,3) to select the Level selection" << endl;
	    cout << "1. Easy (Contain words in single row or single column)" << endl;
		cout << "2. Intermediate (Contain words in forward and backwords direction as well as single row and single column)" << endl;
		cout << "3. Hard (Contain words in forward, backward directions and in diagonals)" << endl; 
		cin >> lvl;
		
		
		//easy level
		
		if(lvl == 1)
		{
			
			//easy board 
			
			cout << endl;
		    cout << "Board: " << endl;
		    cout << endl;
		    
		    ifstream fin("easyboard.txt");
			if(fin.is_open())
			{
				for(int i = 0; i < 15; i++)
				{
					for(int j = 0; j < 15; j++)
					{
						fin >> board[i][j];
						cout << board[i][j] << " ";
					}
					cout << endl;
				}
				
				//word bank
				
				cout << endl;
				cout << "Following is the word bank: " << endl;
				cout << "****************************************************" << endl; 
				cout << "*                                                  *" << endl;
				cout << "*      App      Vote      Go      So      Tag      *" << endl;
				cout << "*                                                  *" << endl;
				cout << "****************************************************" << endl;
				
				cout << endl;
				cout << "Enter the word which you are searching (Make sure the first alphabet is in upper case) : ";
				cin >> word;
				
				//dictionary check
				
				ifstream dic("easydictionary.txt");
				if(dic.is_open())
				{
				    for (int i = 0; i < 5; i++)
					{
					    dic >> easywords[i];    
					}
					
					//comparison of words
					
					bool found = false;
						   
					for (int i = 0; i < 5; ++i)
					{
						int j = 0;
						while(easywords[i][j] != '\0' && word[j] != '\0' && easywords[i][j] == word[j])
					    {
						    ++j;
					    }
					    
					    if (easywords[i][j] == '\0' && word[j] == '\0')
					    {
					    	found = true;
					    	break;
						}
					} 
					
					if(found)
				    {
				    	cout << "Yes the number entered is correct now go on and find the word in board" << endl;
						
						cout << "Now enter the row and column in the following manner: " << endl;
						
						cout << "Start at: (row no,column no)" << endl;
						cout << "Ends at: (row no,column no)" << endl;
						
						while(lives > 0)
						{
							cout << "Start at:" << endl;
							cout << "\tRow number: ";
							cin >> srow;
							cout << "\tColumn number: ";
							cin >> scolumn;
						
							cout << "Ends at: "<< endl;
							cout << "\tRow number: ";
							cin >> erow;
							cout << "\tColumn number: ";
							cin >> ecolumn;
						        
							if(srow == 8 && scolumn == 1 && erow == 8 && ecolumn == 3)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
							    if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}	
						
							else if(srow == 2 && scolumn == 12 && erow == 2 && ecolumn == 15)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 6 && scolumn == 7 && erow == 6 && ecolumn == 8)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 5 && scolumn == 12 && erow == 5 && ecolumn == 13)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
							
							else if(srow == 7 && scolumn == 15 && erow == 9 && ecolumn == 15)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else
							{
								lives--;
								cout << "You lost a life. You are left with " << lives << " lives" << endl;
							}
					    }
					    
					    if (lives == 0)
						{
							cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
							cin >> choice;
						
							if (choice == 'c' || choice == 'C')
							{
								main();
							}
						
							else if (choice == 'e' || choice == 'E')
							{
								cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
							}
						
							else
						
							{
								cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
							}
					    }
					}
					else
					{
						cout << "Word not found" << endl;
					}
						  
				}
				else
				{
					cout << "Dictionary is not open!!!";
				}
				
			}	
			else
			{
				cout << "Board file is not open!!!" << cout;
			}
		}

        //medium level

		else if(lvl == 2)
		{
			
			//medium board
			
			cout << endl;
			cout << "Board: ";
			cout << endl;
			
			ifstream fin("mediumboard.txt");
			if(fin.is_open())
			{
				for(int i = 0; i < 15; i++)
				{
					for(int j = 0; j < 15; j++)
					{
						fin >> board[i][j];
						cout << board[i][j] << " ";
					}
					cout << endl;
				}
				
				//wordbank
				
				cout << endl;
				cout << "Following is the word bank: " << endl;
				cout << endl;
				cout << "******************************************************" << endl; 
				cout << "*                                                    *" << endl;
				cout << "*      Go      Gate      Dot      Jump      Pai      *" << endl;
				cout << "*                                                    *" << endl;
				cout << "******************************************************" << endl;
				
				cout << endl;
				cout << "Enter the word which you are searching (Make sure the first alphabet is in upper case): ";
				cin >> word;
				cout << endl;
				
				//dictionary check
				
				ifstream dic("mediumdictionary.txt");
				if(dic.is_open())
				{
				    for (int i = 0; i < 5; i++)
					{
					    dic >> mediumwords[i];    
					}
					
					//comparison of word 
					
					bool found = false;
						   
					for (int i = 0; i < 5; ++i)
					{
						int j = 0;
						while(mediumwords[i][j] != '\0' && word[j] != '\0' && mediumwords[i][j] == word[j])
					    {
						    ++j;
					    }
					    
					    if (mediumwords[i][j] == '\0' && word[j] == '\0')
					    {
					    	found = true;
					    	break;
						}
					} 
					
					if(found)
				    {
				    	cout << "Yes the number entered is correct now go on and find the word in board" << endl;
						
						cout << "Now enter the row and column in the following manner: " << endl;
						
						cout << "Start at: (row no,column no)" << endl;
						cout << "Ends at: (row no,column no)" << endl;
						    
						while (lives > 0)
				    	{
						    cout << "Start at:" << endl;
						    cout << "\tRow number: ";
						    cin >> srow;
						    cout << "\tColumn number: ";
						    cin >> scolumn;
						
						    cout << "Ends at: "<< endl;
						    cout << "\tRow number: ";
						    cin >> erow;
						    cout << "\tColumn number: ";
						    cin >> ecolumn;
						        
						    if(srow == 11 && scolumn == 8 && erow == 11 && ecolumn == 7)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 15 && scolumn == 7 && erow == 15 && ecolumn == 4)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 14 && scolumn == 14 && erow == 12 && ecolumn == 14)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 1 && scolumn == 4 && erow == 1 && ecolumn == 1)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
							else if(srow == 6 && scolumn == 1 && erow == 4 && ecolumn == 1)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else
							{
								lives--;
								cout << "You lost a life. You are left with " << lives << " lives" << endl;
							}
						
					    }
					    
					    if (lives == 0)
						{
							cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
							cin >> choice;
						
							if (choice == 'c' || choice == 'C')
							{
								main();
							}
						
							else if (choice == 'e' || choice == 'E')
							{
								cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
							}
						
							else
						
							{
								cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
							}
					    }
						
					}
					else
					{
						cout << "Word not found" << endl;
					}
						  
				}
				else
				{
					cout << "Dictionary is not open!!!";
				}
				
			}	
			else
			{
				cout << "Board file is not open!!!" << cout;
			}
		}
		
		//difficult level
		
		else if(lvl == 3)
		{
			
			//difficult board
			
			cout << endl;
			cout << "Board: ";
			cout << endl;
			
			ifstream fin("hardboard.txt");
			if(fin.is_open())
			{
				for(int i = 0; i < 15; i++)
				{
					for(int j = 0; j < 15; j++)
					{
						fin >> board[i][j];
						cout << board[i][j] << " ";
					}
					cout << endl;
				}
				
				//wordbank
					
				cout << endl;
				cout << "Following is the word bank: " << endl;
				cout << "*****************************************************" << endl; 
				cout << "*                                                   *" << endl;
				cout << "*      Am      Ill      It      Ate      Maths      *" << endl;
				cout << "*                                                   *" << endl;
				cout << "*****************************************************" << endl;
				
				cout << endl;
				cout << "Enter the word which you are searching (Make sure the first alphabet is in upper case): ";
				cin >> word;
				cout << endl;
				
				//dictionary check
				
				ifstream dic("harddictionary.txt");
				if(dic.is_open())
				{
				    for (int i = 0; i < 5; i++)
					{
					    dic >> hardwords[i];    
					}
					
					//word comparison 
					
					bool found = false;
						   
					for (int i = 0; i < 5; ++i)
					{
						int j = 0;
						while(hardwords[i][j] != '\0' && word[j] != '\0' && hardwords[i][j] == word[j])
					    {
						    ++j;
					    }
					    
					    if (hardwords[i][j] == '\0' && word[j] == '\0')
					    {
					    	found = true;
					    	break;
						}
					} 
					
					if(found)
				    {
				    	cout << "Yes the number entered is correct now go on and find the word in board" << endl;
						
						cout << "Now enter the row and column in the following manner: " << endl;
						
						cout << "Start at: (row no,column no)" << endl;
						cout << "Ends at: (row no,column no)" << endl;
						
						while (lives > 0)
						{
						    cout << "Start at:" << endl;
						    cout << "\tRow number: ";
						    cin >> srow;
						    cout << "\tColumn number: ";
						    cin >> scolumn;
						
						    cout << "Ends at: "<< endl;
						    cout << "\tRow number: ";
						    cin >> erow;
						    cout << "\tColumn number: ";
						    cin >> ecolumn;
						        
							if(srow == 9 && scolumn == 5 && erow == 8 && ecolumn == 4)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << " " << playername[i]; 
										}
									scoreout << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 3 && scolumn == 8 && erow == 5 && ecolumn == 10)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 5 && scolumn == 6 && erow == 4 && ecolumn == 7)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else if(srow == 7 && scolumn == 13 && erow == 5 && ecolumn == 15)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
							else if(srow == 5 && scolumn == 1 && erow == 1 && ecolumn == 5)
							{
								cout << "CONGRATULATIONS YOU WON THE GAME WOHOOOOOOOOOO!!!" << endl;
								
								if(lives == 1)
							    {
								    score = 10;
							    }
							    
							    else if(lives == 2)
							    {
							    	score = 20;
								}
								
								else if(lives == 3)
								{
									score = 30;
								}
								
								else
								{
									score = 0;
								}
								
								while (playername[length] != '\0')
								{
									length++;
								}
								
								ofstream scoreout("score.txt",ios::app);
								if (scoreout.is_open())
								{
			
									for (int i = 0; i < length; i++)
										{
											scoreout << playername[i]; 
										}
									scoreout << " " << score << endl;
								}
								
								cout << "Your score is: " << score <<endl;
								
								cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
								cin >> choice;
						
								if (choice == 'c' || choice == 'C')
								{
									main();
								}
						
								else if (choice == 'e' || choice == 'E')
								{
									cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
								}
						
								else
						
								{
									cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
								}
								
								break;
								
							}
						
							else
							{
								lives--;
								cout << "You lost a life. You are left with " << lives << " lives" << endl;
							}
					    }
					    
					    if (lives == 0)
						{
							cout << "If you want to continue the game press 'c' and if you want to exit press 'e'" << endl;
							cin >> choice;
						
							if (choice == 'c' || choice == 'C')
							{
								main();
							}
						
							else if (choice == 'e' || choice == 'E')
							{
								cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
							}
						
							else
						
							{
								cout << "You can only enter 'c' for continue and 'e' for exit" << endl;
							}
					    }
					    
					}
					else
					{
						cout << "Word not found" << endl;
					}
						  
				}
				else
				{
					cout << "Dictionary is not open!!!";
				}
			}	
			else
			{
				cout << "Board file is not open!!!" << cout;
			}
		}
		
		else
		{
			cout <<  "Please renter the numbers and make sure only the given numbers (1,2,3) should be pressed." << endl;
		}
		
	}
	
	//highest score

	else if(ch == 'h'||ch == 'H')
	{

    	ifstream scorefile("score.txt");
    	if (scorefile.is_open()) 
		{
    	    for (int i = 0; i < size ; ++i)
		    {
        	    scorefile >> names[i] >> scores[i];
    	    }
    	    
    	    scorefile.close();	
    	}
    	
    	else
    	{
    		cout << "There is no score file." << endl;
		}

    	for (int i = 0; i < size - 1; ++i)
		{
        	for (int j = i + 1; j < size; ++j)
			{
            	if (scores[i] < scores[j])
				{
                	int tempScore = scores[i];
                	scores[i] = scores[j];
                	scores[j] = tempScore;

                	for (int k = 0; k < size; ++k)
					{
                    	char tempChar = names[i][k];
                    	names[i][k] = names[j][k];
                    	names[j][k] = tempChar;
                    
                    	if (tempChar == '\0') // If null character encountered, break
                        	break;
                	}
            	}
        	}
    	}

    	ofstream highestscoresfile("highestscore.txt");
    	if (highestscoresfile.is_open())
		{
        	// Write the highest 5 scores and names to the file
    	    for (int i = 0; i < highestscores ; ++i)
			{
        		for (int j = 0; names[i][j] != '\0'; ++j)
				{
            		highestscoresfile << names[i][j];
            		cout << names[i][j];
        		}
        		highestscoresfile << " " << scores[i] << endl;
        		cout << " " << scores[i] << endl;
    		}

    		// Close the output file
    		highestscoresfile.close();
    		
    		cout << "If you want to play again the game press 'Y' and if you don't want to play again press 'N' :";
    		cin >> ch;
    		
    		if (ch == 'Y' || ch == 'y')
    		{
    			main();
			}
			
			else if (ch == 'N' || ch == 'n')
			{
				cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
			}
			
			else
			{
				cout << "Please only enter the given alphabets (y,n)." << endl;
				main();
			}
    	}
    	
    	else
    	{
    		cout << "There is no file for highest 5 scores." << endl;
		}

	}
	
	//exit
	
	else if(ch == 'e'||ch == 'E')
	{
		cout << "Exiting the game. GOOD BYE SE YOU SOON =)" << endl;
	}
	
	else
	{
		cout << "Please renter the alphabet and make sure only the given alphabets (n,h,e) should be pressed." << endl;
	}
	
	system("pause");
	return 0;
}
