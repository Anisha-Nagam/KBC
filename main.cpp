#include <iostream>
#include<Windows.h>
#include<MMsystem.h>
#include<cstdlib>
using namespace std;

 class kbc
 {
     string name;
      float amount;
public:
     void read();
      void play();
 };

int main()
{
    kbc game;
     game.read();
      game.play();
    return 0;
}

 void kbc ::read()
  {
      cout<<"Enter your name"<<endl;
       getline(cin,name);
  }
     void kbc ::play()
     {
         int label;
           cout<<"Get ready to play KBC with me"<<endl;
           cout<<" "<<endl;
            PlaySound(TEXT("rule.wav"),NULL,SND_SYNC);
      cout<<"Enter 'Y' to start the game"<<endl;
       char c;
        cin>>c;
        int no;
         int arr[15];
        if(c=='Y'||c=='y')
        { 
                    PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
                     cout<<"Enter any number  1 or 2 to select a question"<<endl;
                     cin>>no;
     switch (no)
     {
            case 1:
            {
                PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                cout<<endl;
         // FIRST QUESTION
                   cout<<" Which cricketer is also known as 'The Wall' "<<endl;
                   cout<<" 1.Sachin Tendulkar       2.Jacques Kallis"<<endl;
                   cout<<" 3.Rahul Dravid           4.Ricky Ponting "<<endl;
                 PlaySound(TEXT("wall.wav"),NULL,SND_SYNC);
                 cin>>arr[0];
                  if(arr[0]==3)
                  {
                  PlaySound(TEXT("off.wav"),NULL,SND_SYNC);
                   PlaySound(TEXT("ten.wav"),NULL,SND_SYNC);
                  cout<<"You have won 10000 rupees"<<endl;
                  break;
                  }
                      else
                      {
                        PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                      cout<<"Rahul Dravid"<<endl;
                      system("pause");
                       exit(EXIT_FAILURE);
                      }
                 }
                case 2:
                {
                    PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                   cout<<endl;
              //FIRST QUESTION
                   cout<<"Where was the 2016 Olympics held "<<endl;
                   cout<<"1.Uruguay           2.Chile"<<endl;
                   cout<<"3.Greece            4.Brazil"<<endl;
                   PlaySound(TEXT("rio.wav"),NULL,SND_SYNC);
                cin>>arr[0];
                  if(arr[0]==4)
                    {PlaySound(TEXT("off.wav"),NULL,SND_SYNC);
                     PlaySound(TEXT("ten.wav"),NULL,SND_SYNC);
                      cout<<name<<",You have won 10000 rupees"<<endl;
                      break;
                    }
                    else
                    {
                          PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                         cout<<"Brazil"<<endl;
                         cout<<name<<",you did not have any money"<<endl;
                         system("pause");
                         exit(EXIT_FAILURE);
                    }
                }
            }
             PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
              cout<<"Enter 1 or 2 for next question"<<endl;
              cin>>no;
              switch(no)
              {
                 case 1:
                {
                PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                   //SECOND QUESTION
                   cout<<"With which sport 'The flying sikh' is associated with"<<endl;
                cout<<"1.Shooting      2.Athletics"<<endl;
                cout<<"3.Archery       4.Badminton"<<endl;
                PlaySound(TEXT("sikh.wav"),NULL,SND_SYNC);
                cout<<endl;
                PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                cout<<"Enter 0 to quit"<<endl;
                 cin>>arr[1];
                 if(arr[1]>0){
                   if(arr[1]==2)
                   {
                       PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                    PlaySound(TEXT("twenty.wav"),NULL,SND_SYNC);
                        cout<<"You have won 20000 rupees"<<endl;
                        break;
                   }
                     else
                     {
                         PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                          cout<<"Athletics"<<endl;
                          cout<<"You did not win any money"<<endl;
                          system("pause");
                           exit(EXIT_FAILURE);
                     }
                }
                 else
                 {
                     PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                      cout<<"The right answer is Athletics"<<endl;
                       PlaySound(TEXT("ten.wav"),NULL,SND_SYNC);
                       cout<<"You won 10000 rupees"<<endl;
                       system("pause");
                      exit(EXIT_FAILURE);
                    }}
            case 2:
               {
                   PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                 //SECOND QUESTION
                 cout<<"Famous tennis player 'Rafael Nadal' is from which country"<<endl;
                cout<<"1.Spain       2.Switzerland"<<endl;
                cout<<"3.Britain     4.South Africa"<<endl;
                PlaySound(TEXT("nadal.wav"),NULL,SND_SYNC);
                cout<<endl;
                PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                cout<<"Enter 0 to quit"<<endl;
                cin>>arr[1];
                 if(arr[1]>0)
                 {
                     if(arr[1]==1)
                     { 
					 PlaySound(TEXT("correct 1.wav"),NULL,SND_SYNC);
					 PlaySound(TEXT("twenty.wav"),NULL,SND_SYNC);
                       cout<<name<<",you have won 20000 rupees"<<endl;
                     break;}
                  else
                    {PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                      cout<<"Spain"<<endl;
                    cout<<"You did not win any money"<<endl;
                    system("pause");
                     exit(EXIT_FAILURE);}
                 }
                  else
                  {cout<<"You have chosen to QUIT from the game"<<endl;
                  PlaySound(TEXT("ten.wav"),NULL,SND_SYNC);
                   cout<<name<<",you have won 10000 rupees"<<endl;
                   system("pause");
                   exit(EXIT_FAILURE);
                  }
                 }
                }
                 PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
                cout<<"Enter 1 or 2 for next question"<<endl;
              cin>>no;
              switch(no)
              {
                 case 1:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                         //THIRD QUESTION
                         cout<<"What was the name of the character played by 'Kate Winslet' in the movie 'Titanic' "<<endl;
                         cout<<"1 Quigley         2 Rose"<<endl;
                         cout<<"3 Angeline        4 Curie"<<endl;
                          PlaySound(TEXT("titanic.wav"),NULL,SND_SYNC);
                          cout<<endl;
                          PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                          cout<<"Enter 0 to quit"<<endl;
                            cin>>arr[2];
                           if(arr[2]>0){
                            if(arr[2]==2)
                            {
                                PlaySound(TEXT("correct 1.wav"),NULL,SND_SYNC);
                                PlaySound(TEXT("forty.wav"),NULL,SND_SYNC);
                                cout<<"You have won 40000 rupees"<<endl;
                                break;
                            }
                            else
                            {
                                 PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                 cout<<"Rose"<<endl;
                                 cout<<"You did not win any money"<<endl;
                                 system("pause");
                                exit(EXIT_FAILURE);
                            }
                           }
                         else
                         {
                              PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                              cout<<"The right answer is Rose"<<endl;
                              PlaySound(TEXT("twenty.wav"),NULL,SND_SYNC);
                              cout<<"You have won 20000 rupees"<<endl;
                              system("pause");
                              exit(EXIT_FAILURE);
                         }
                     }
                 case 2:
                    {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                         //THIRD QUESTION
                         cout<<"CD computer abbreviation usually mean"<<endl;
                         cout<<"1 Computer Disc       2 Complex Disc"<<endl;
                         cout<<"3 Compact Disc        4 Compact Drive"<<endl;
                          PlaySound(TEXT("cd.wav"),NULL,SND_SYNC);
                          cout<<endl;
                          cout<<"Enter 0 to quit"<<endl;
                          PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                           cin>>arr[2];
                            if(arr[2]>0)
                            {
                                if(arr[2]==3)
                                {
                                     PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                     PlaySound(TEXT("forty.wav"),NULL,SND_SYNC);
                                     cout<<"You have won 40000 rupees"<<endl;
                                     break;
                                }
                                 else
                                    {
                                         PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                          cout<<"Compact Disc"<<endl;
                                          cout<<"You did not win any money"<<endl;
                                          system("pause");
                                        exit(EXIT_FAILURE);
                                    }
                            }
                             else{
                                 PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                 cout<<"The right answer is Compact Disc"<<endl;
                                 PlaySound(TEXT("twenty.wav"),NULL,SND_SYNC);
                                 cout<<"You have won 20000 rupees"<<endl;
                                 system("pause");
                                 exit(EXIT_FAILURE);
                             }
                    }
               }
                PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
                cout<<"Enter 1 or 2 for next question"<<endl;
                 cin>>no;
            switch(no)
            {
            case 1:
                 {
                    //FOURTH QUESTION
                  PlaySound(TEXT("here.wav"), NULL, SND_SYNC);
                  cout<<" Which bird lays the world's smallest egg "<<endl;
                  cout<<" 1. Bee Humming bird       2. Arctic tern "<<endl;
                  cout<<" 3. Great Dane             4. Patridge "<<endl;
                  PlaySound(TEXT("small.wav"),NULL,SND_SYNC);
                  cout<<endl;
                  cout<<"Enter 0 to quit"<<endl;
                  PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                  cin>>arr[3];
                  if(arr[3]>0)
                     {
                         if(arr[3]==1)
                         {
                              PlaySound(TEXT("correct3.wav"),NULL,SND_SYNC);
                              PlaySound(TEXT("eighty.wav"),NULL,SND_SYNC);
                              cout<<name<<",you have won 80000 rupees"<<endl;
                              cout<<"You are doing very well"<<endl;
                         }
                           else
                           {
                                PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                cout<<" Bee Humming bird"<<endl;
                                cout<<name<<",you did not win any money"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                           }} else
                            {
                                 PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                 cout<<"The right answer is Bee Humming Bird"<<endl;
                                 PlaySound(TEXT("forty.wav"),NULL,SND_SYNC);
                                 cout<<name<<",you had won 40000 rupees"<<endl;
                                 system("pause");
                                 exit(EXIT_FAILURE);
                            }
                         }
            case 2:
                {
                    //FOURTH QUESTION
                    cout<<" Who invented Dynamite"<<endl;
                    cout<<" 1 Benjamin Franklin   2 Alfred Nobel"<<endl;
                    cout<<" 3 MacMillan           4 William Grove"<<endl;
                     PlaySound(TEXT("dynamite.wav"),NULL,SND_SYNC);
                    cout<<endl;
                    cout<<"Enter 0 to quit"<<endl;
                    PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                     cin>>arr[3];
                      if(arr[3]>0)
                      {
                             if(arr[3]==2)
                             {
                                  PlaySound(TEXT("correct 1.wav"),NULL,SND_SYNC);
                                  PlaySound(TEXT("eighty.wav"),NULL,SND_SYNC);
                                  cout<<name<<",you have won 80000 rupees"<<endl;
                                  cout<<"You are doing very well!"<<endl;
                                   break;
                             }
                             else
                             {
                                  PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                  cout<<"Alfred Nobel"<<endl;
                                  cout<<"You did not win any money"<<endl;
                                  system("pause");
                                  exit(EXIT_FAILURE);
                             }
                      }
                      else
                      {
                           PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                           cout<<"The right answer is Alfred Nobel"<<endl;
                           PlaySound(TEXT("forty.wav"),NULL,SND_SYNC);
                           cout<<name<<",you had won 40000 rupees"<<endl;
                           system("pause");
                           exit(EXIT_FAILURE);
                      }
                }
            }
             PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
              cout<<"Enter 1 or 2 for next question"<<endl;
              cin>>no;
              switch(no)
              {
                     case 1:
                        {
                             PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                             //FIFTH QUESTION
                             cout<<" '.INI' and '.BAT' extensions usually refer to what kind of file "<<endl;
                             cout<<" 1 Backup file          2 Animation file "<<endl;
                             cout<<" 3 Temporary file       4 System file "<<endl;
                            PlaySound(TEXT("ext.wav"),NULL,SND_SYNC);
                             cout<<endl;
                             cout<<"Enter 0  to quit"<<endl;
                             PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                             cin>>arr[4];
                               if(arr[4]>0)
                               {
                                   if(arr[4]==4)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("onelakhs.wav"),NULL,SND_SYNC);
                                  cout<<name<<",you have won 160000 rupees"<<endl;
                                  cout<<"You are doing very well!"<<endl;
                                   break;
                                  }
                                  else
                                 {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"System file"<<endl;
                                      cout<<"You did not win any money"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                 }
                            }
                            else
                           {
                             PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                             cout<<"The right answer is System File"<<endl;
                             PlaySound(TEXT("eighty.wav"),NULL,SND_SYNC);
                              cout<<name<<",you had won 80000 rupees"<<endl;
                              system("pause");
                              exit(EXIT_FAILURE);
                           }
                  }
                     case 2:
                        {
                             PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                             //FIFTH QUESTION
                             cout<<" Which Indian movie gained entry into Hollywood's OSCAR awards in 2003"<<endl;
                             cout<<" 1 Dil Chahta Hai         2 Devdas"<<endl;
                             cout<<" 3 Mughal-e-Azam          4 Rocky  "<<endl;
                              PlaySound(TEXT("oscar.wav"),NULL,SND_SYNC);
                              cout<<endl;
                              cout<<"Enter 0  to quit"<<endl;
                              PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                             cin>>arr[4];
                               if(arr[4]>0)
                               {
                                   if(arr[4]==2)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("onelakhs.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 160000 rupees"<<endl;
                                     cout<<"You are simply superb"<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Devdas"<<endl;
                                      cout<<"You did not win any money"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Devdas"<<endl;
                                PlaySound(TEXT("eighty.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 80000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                         }
                          PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
              cout<<"Enter 1 or 2 for next question"<<endl;
              cin>>no;
              switch(no)
              {
                     case 1:
                        {
                             PlaySound(TEXT("safe.wav"),NULL,SND_SYNC);
                           //SIXTH QUESTION
                             cout<<" Which is the densest planet in the solar system"<<endl;
                             cout<<" 1 Earth               2 Jupiter"<<endl;
                             cout<<" 3 Saturn              4 Uranus"<<endl;
                             PlaySound(TEXT("earth.wav"),NULL,SND_SYNC);
                             cout<<endl;
                             cout<<"Enter 0 to quit"<<endl;
                             PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                              cin>>arr[5];
                               if(arr[5]>0)
                               {
                                   if(arr[5]==1)
                                   {
                                      PlaySound(TEXT("correct3.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 320000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Earth"<<endl;
                                      cout<<"You did not win any money"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Earth"<<endl;
                                PlaySound(TEXT("onelakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 160000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                     case 2:
                        {
                             PlaySound(TEXT("safe.wav"),NULL,SND_SYNC);
                          //SIXTH QUESTION
                             cout<<" Who developed Yahoo"<<endl;
                             cout<<" 1 David Filo & Jerry Yang         2 Christopher % Franklin"<<endl;
                             cout<<" 3 Cyril Bamford & C.Cockerell     4 Bessie Blount & John Kruesi"<<endl;
                             PlaySound(TEXT("yahoo.wav"),NULL,SND_SYNC);
                             cout<<endl;
                             cout<<"Enter  0 to exit"<<endl;
                            PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                            cin>>arr[5];
                               if(arr[5]>0)
                               {
                                   if(arr[5]==1)
                                   {
                                      PlaySound(TEXT("correct3.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 3,20,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"David Filo & Jerry Yang"<<endl;
                                      cout<<"You did not win any money"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is David Filo & Jerry Yang"<<endl;
                                PlaySound(TEXT("onelakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 1,60,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                        }
                         PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
            cout<<"Enter 1 or 2 for next question"<<endl;
            cin>>no;
            switch(no)
            {
                 case 1:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                         //SEVENTH QUESTION
                         cout<<" Who is known as the 'Napolean of India' "<<endl;
                         cout<<" 1 Chandragupta       2 Shivaji "<<endl;
                         cout<<" 3 Selucus            4 Samudragupta"<<endl;
                        PlaySound(TEXT("napo.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to exit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                        cin>>arr[6];
                               if(arr[6]>0)
                               {
                                   if(arr[6]==4)
                                   {
                                      PlaySound(TEXT("correct3.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("sixlakhs.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 6,40,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Samudragupta"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Samudragupta"<<endl;
                                PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 3,20,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                 case 2:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                        //SEVENTH QUESTION
                         cout<<" Which Indian state has most airports"<<endl;
                         cout<<" 1 Delhi         2 Gujarat "<<endl;
                         cout<<" 3 Maharashtra   4 Tamil Nadu"<<endl;
                       PlaySound(TEXT("air.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                           cin>>arr[6];
                               if(arr[6]>0)
                               {
                                   if(arr[6]==2)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("sixlakhs.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 6,40,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Gujarat"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Gujarat"<<endl;
                                PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 3,20,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
            }
             PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
             cout<<"Enter 1 or 2 for next question"<<endl;
             cin>>no;
              switch(no)
             {
                 case 1:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                         //EIGHTH QUESTION
                         cout<<" Who is the author of 'The Grapes Of Wrath' "<<endl;
                         cout<<" 1 Emily Bronte       2 John Steinbeck  "<<endl;
                         cout<<" 3 Lewis Carroll      4 Jules Verne"<<endl;
                        PlaySound(TEXT("grape.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                        cin>>arr[7];
                               if(arr[7]>0)
                               {
                                   if(arr[7]==2)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("twelvelakhs.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 12,50,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"John Steinbeck"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is John Steinbeck"<<endl;
                                PlaySound(TEXT("sixlakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 6,40,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                 case 2:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                        //EIGHTH QUESTION
                         cout<<" Who is the author of 'Sense And Sensibility'"<<endl;
                         cout<<" 1 Jane Austen         2 George Orwell "<<endl;
                         cout<<" 3 James Joyce         4 Herman Melville"<<endl;
                         PlaySound(TEXT("sense.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                           cin>>arr[7];
                               if(arr[7]>0)
                               {
                                   if(arr[7]==1)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("twelvelakhs.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 12,50,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Jane Austen"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is James Austen"<<endl;
                                PlaySound(TEXT("sixlakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 6,40,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
               }
                PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
               cout<<"Enter 1 or 2 for next question"<<endl;
               cin>>no;
                switch(no)
                 {
                     case 1:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                         //NINTH QUESTION
                         cout<<" Who wrote the song 'Yesterday' "<<endl;
                         cout<<" 1 Paul McMartney       2 Michael Jackson  "<<endl;
                         cout<<" 3 Ed Sheran            4 Ricky Martin  "<<endl;
                         PlaySound(TEXT("yester.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                        cin>>arr[8];
                               if(arr[8]>0)
                               {
                                   if(arr[8]==1)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("twentyfive.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 25,00,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Paul McMartney"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Paul McMartney"<<endl;
                                PlaySound(TEXT("twelvelakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 12,50,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                 case 2:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                        //NINTH QUESTION
                         cout<<" How many strings does a bass guitar usually have"<<endl;
                         cout<<" 1 Six            2 Five "<<endl;
                         cout<<" 3 Four           4 Seven "<<endl;
                         PlaySound(TEXT("guitar.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                           cin>>arr[7];
                               if(arr[7]>0)
                               {
                                   if(arr[7]==3)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("twentyfive.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 25,00,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Four"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Four"<<endl;
                                PlaySound(TEXT("twelvelakhs.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 12,50,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
               }
                PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
         cout<<"Enter 1 or 2 for next question"<<endl;
             cin>>no;
              switch(no)
             {
                 case 1:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                         //TENTH QUESTION
                         cout<<" In which year was India's capital shifted from Calcutta to Delhi "<<endl;
                         cout<<" 1 1912       2 1911  "<<endl;
                         cout<<" 3 1913       4 1910"<<endl;
                         PlaySound(TEXT("shift.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                        cin>>arr[9];
                               if(arr[7]>0)
                               {
                                   if(arr[9]==2)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("fifty.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 50,00,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"1911"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is 1911"<<endl;
                                PlaySound(TEXT("twentyfive.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 25,00,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                 case 2:
                     {
                         PlaySound(TEXT("here.wav"),NULL,SND_SYNC);
                        //TENTH QUESTION
                         cout<<" What year did the London underground open"<<endl;
                         cout<<" 1 1900         2 1863 "<<endl;
                         cout<<" 3 1892         4 1927"<<endl;
                         PlaySound(TEXT("under.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                           cin>>arr[9];
                               if(arr[7]>0)
                               {
                                   if(arr[9]==2)
                                   {
                                      PlaySound(TEXT("correct 2.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("fifty.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won 50,00,000 rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong1.wav"),NULL,SND_SYNC);
                                      cout<<"1863"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is 1863"<<endl;
                                PlaySound(TEXT("twentyfive.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 25,00,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
               }
             PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
           cout<<"Enter 1 or 2 for next question"<<endl;
           cin>>no;

           switch(no)
             {
                 case 1:
                     {
                         PlaySound(TEXT("lastq.wav"),NULL,SND_SYNC);
                         //ELEVENTH QUESTION
                         cout<<" What was India's first newspaper "<<endl;
                         cout<<" 1 Kesari            2 Bengal Gazette  "<<endl;
                         cout<<" 3 Vande Mataram     4 Maharatta "<<endl;
                         PlaySound(TEXT("news1.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                        cin>>arr[10];
                               if(arr[10]>0)
                               {
                                   if(arr[10]==2)
                                   {
                                      PlaySound(TEXT("correct4.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("onecrore.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won one crore rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong.wav"),NULL,SND_SYNC);
                                      cout<<"Bengal Gazette"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Bengal Gazettte"<<endl;
                                PlaySound(TEXT("fifty.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 50,00,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
                 case 2:
                     {
                         PlaySound(TEXT("lastq.wav"),NULL,SND_SYNC);
                        //eleventh QUESTION
                         cout<<" Who completed the construction of Qutb Minar at Delhi"<<endl;
                         cout<<" 1 Aurangzeb           2 Iltutmish "<<endl;
                         cout<<" 3 Salim Shaik         4 Brihadatta"<<endl;
                         PlaySound(TEXT("qutb.wav"),NULL,SND_SYNC);
                         cout<<endl;
                         cout<<"Enter 0 to quit"<<endl;
                         PlaySound(TEXT("quitwar.wav"),NULL,SND_SYNC);
                           cin>>arr[10];
                               if(arr[10]>0)
                               {
                                   if(arr[10]==2)
                                   {
                                      PlaySound(TEXT("correct4.wav"),NULL,SND_SYNC);
                                      PlaySound(TEXT("onecrore.wav"),NULL,SND_SYNC);
                                     cout<<name<<",you have won one crore rupees"<<endl;
                                     cout<<endl;
                                      break;
                                   }
                                   else
                                   {
                                       PlaySound(TEXT("wrong1.wav"),NULL,SND_SYNC);
                                      cout<<"Iltutmish"<<endl;
                                      PlaySound(TEXT("threelakhs.wav"),NULL,SND_SYNC);
                                      cout<<"You had won 3,20,000 rupees"<<endl;
                                      system("pause");
                                      exit(EXIT_FAILURE);
                                    }
                               }
                               else
                               {
                                PlaySound(TEXT("quit.wav"),NULL,SND_SYNC);
                                cout<<"The right answer is Iltutmish"<<endl;
                                PlaySound(TEXT("fifty.wav"),NULL,SND_SYNC);
                                cout<<name<<",you had won 50,00,000 rupees"<<endl;
                                system("pause");
                                exit(EXIT_FAILURE);
                               }
                            }
               }
        }
         }
