#include<simplecpp>

main_program
{int p11;char m3=' ';int gh;
cout<<"......................................................................................."<<endl;
cout<<"                          EL DORADO,the lost city of gold           "<<endl;
cout<<"......................................................................................."<<endl;
cout<<"welcome to the quest of lost city of gold"<<endl;
cout<<"enter your name to proceed"<<endl;
char A[20];int oi;
cin.getline(A,20);
cout<<"Hi "<<A;
cout<<" .....Now, you are the leading role in this quest for the lost city of gold , EL DORADO."<<endl;
cout<<"Let me introduce you to the story behind this quest and the people whom you may interact in this mission."<<endl;
cout<<"In 2003, a Pakistani Archaeologist Dr. M. Alam Siddiqui starts researching about the hidden underground city  of King Kanishka, whose treasure map is hidden in an old box whose key is a Garuda Locket which was last seen in the research books of David, a British archaeologist. His team led by Siddiqui try hard to search the key as they find the box in an old market in Pakistan. Fate takes a reverse turn as a dreaded terrorist Sultan along with his men visit the Archaeology department. He coerces Siddiqui and takes the box away from him and make all the people his slaves till Siddiqui finds the treasure and hands over it to Sultan."<<endl;
cout<<"Now,the story shifts to you , a poor but brave, who wants to make easy money and settle in life. But , on the other side , u have keen intrest in doing brave and dangerous things."<<endl;
cout<<"Hoo , What an attitude!"<<endl;
cout<<"Now , here comes a twist in your life , which may change your life ! ---------------------------"<<endl;
cout<<"One night , a heavy rain drenches the colony and the roof in your room fall down. From the roof, you find a Diary, a bag."<<endl;
cout<<"It has the following clues for u"<<endl;
cout<<"'Pushkalavathi Jewelers, Peshawar' is printed on the diary"<<endl;
cout<<"a Garuda locket, two magnifying lens and a small stone with a design was found inside the bag."<<endl;
cout<<"You will come to know that the diary was of your grand father , who had already gone searching for this city  ,before indian independence, but was not successful at the near end of his search and somehow survived."<<endl;
cout<<"Feeling sad for your grand father?"<<endl;
cout<<"But.....Dont worry ! now its your turn ! You have got a chance to complete your grandfather's search."<<endl;
cout<<"Your mission is to reach the lost city of gold using the clues u got and interacting with the people whom u may meet on your way !"<<endl;


//before map

   int v;
    cout<<"you have the diary but you don't know way to the temple as  the pictures in the diary were old and unclear "<<endl;
    cout<<"now you came across a girl,having visa to the same place,searching for some devotees for her jurney to the temple"<<endl;
    cout<<"now u have two choices "<<endl;
    cout<<"1.Do you want to accompany her (1)?"<<endl;
    cout<<"2.Do you want search the way on your own (2)?"<<endl;
    cin>>v;
    if(v==1){
             cout<<"as she was a devotee  she asked him weather he agrees with this statement values are more important than mortal pleasures"<<endl;
                    cout<<"do you agree with her or not answer 'y' or 'n'"<<endl;
                    char q;
                    cin>>q;
                    if(q=='y'){cout<<"congrats! now she will help you get to the temple and find the mapbox that takes you.Now,you come to know that mapbox is with the archeologists who were enslaved by Sultan.Now,they refused to give him the mapbox. "<<endl;}
                    if(q=='n'){cout<<"oh! you have to go on your own way"<<endl;
                                    cout<<"You  came across a pamplet with the adresses of the same temple  printed on it"<<endl;
                                    cout<<"Now with the help of somefriend you somehow reached to the temple and met that girl   "<<endl;
                                    cout<<"Now you requested the girl to introduce you to the alam siddiqui's daugter,who can tell you the location of mapbox"<<endl;
                                    cout<<"But she refused to do so ,so he followed her secretly and somehow found the details of the mapbox"<<endl;
                                    cout<<"He came to know that the mapbox is with the archeologists now they refused to give you the map box and you decided to fight and get the mapbox"<<endl;}
            }


    if(v==2){
                cout<<"Oh! you have to go on your own way"<<endl;

            cout<<"You  came across a pamplet with the adresses of the same temple  printed on it"<<endl;
                                    cout<<"Now with the help of somefriend you somehow reached to the temple and met that girl   "<<endl;
                                    cout<<"Now you requested the girl to introduce you to the alam siddiqui's daugter,who can tell you the location of mapbox"<<endl;
                                    cout<<"But she refused to do so ,so he followed her secretly and somehow found the details of the mapbox"<<endl;
                                    cout<<"He came to know that the mapbox is with the archeologists now they refused to give you the map box and you decided to fight and get the mapbox"<<endl;}




   //fight sceme
   bool needed=false;int a;
cout<<"Do you want to fight with them(1) or quit(2)"<<endl;
    cin>>a;//1 for true and remaining for false// there are villains in these one
    if(a==1){   needed=(0<a);
               if(needed)
                    cout<<"Now, select the correct weapon to kill the enemy"<<endl;
                    cout<<"Otherwise you may be killed so be carefull and play"<<endl;
                    cout<<"Villain has three powers find the order, so that you can defeat"<<endl;
                    cout<<"Choose the choices you want to prefer in such a way that you can defeat enemy's shield power "<<endl;
            cout<<"the weapons available for you "<<endl;


            int s=100 ,W=100 ,H=100;
int a=2,b=5,c=6;
int d=3,e=6,f=8;
cout<<"Your powers are :"<<endl;
            cout<<"a)knife "<<endl<< "b)span "<<endl<<"c) pan "<<endl;
            cout<<"The opponent's powers are :"<<endl;
            cout<<"d)sickle "<<endl<<"e)sword "<<endl<<"f)shield "<<endl;

//2,5,6
//3,6,8
                    cout<<"you have to choose a weapon inorder to defeat enemy"<<endl;
                    char B;
                     char A;
                    for(int i=1;i<=3;i++)
                        {
                                cin>>A;
                             cin>>B;
                             if(a==0 && b==0 && c==0){cout<<"You lost the game"<<endl;
                                                                break;}

                            if(a==0){cout<<"You lost your knife power, You can try another"<<endl;}
                            if(b==0){cout<<"You lost your span power, You can try another"<<endl;}
                            if(c==0){cout<<"You lost this  pan power , You can try another"<<endl;}

if (A=='a'&& B=='f'){if(a!=0){ H=H-25 ; if(H<0){H=0;};if(a<f){a=0;f=f-a;} ;cout<<"The opponent's powers are"<<endl <<"Sickle power" <<s<<endl<< "sword power"<< W<<endl<<"Shield power "<<H<<endl;}}
if (A=='a'&& B=='e'){if(a!=0){ W=W-33 ;if(W<0){W=0;}if(a<e){a=0;e=e-a;}  cout<<"The opponent's powers are"<< endl<<"Sickle power" <<s<<endl<< "sword power "<< W<<endl<<"Shield power" <<H<<endl;}}
if (A=='a'&& B=='d'){if(a!=0){ s=s-2.0/3*100 ; if(s<0){s=0;}if(a<d){a=0;d=d-a;}cout<<"The opponent's powers are" <<endl<<"Sickle power "<<s<<endl<< "sword power" << W<<endl<<"Shield power "<<H<<endl;}}
if (A=='b'&& B=='f'){if(b!=0){ H=H-5.0/8*100 ; if(H<0){H=0;}if(b<f){b=0;f=f-b;}cout<<"The opponent's powers are" <<endl<<"Sickle power" <<s<<endl<< "sword power" << W<<endl<<"Shield power "<<H<<endl;}}
if (A=='b'&& B=='e'){if(b!=0){ W=W-5.0/6*100 ; if(W<0){W=0;}if(b<e){b=0;e=e-b;}cout<<"The opponent's powers are" <<endl<<"Sickle power" <<s<<endl<< "sword power" << W<<endl<<"Shield power" <<H<<endl;}}
if (A=='b'&& B=='d'){if(b!=0){ s=s-5.0/3*100; if(s<0){s=0;}if(b<d){b=0;d=d-b;}cout<<"The opponent's powers are" <<endl<<"Sickle power" <<s<<endl<< "sword power" << W<<endl<<"Shield power "<<H<<endl;}}
if (A=='c'&& B=='f'){if(c!=0){ H=H-6.0/8*100; if(H<0){H=0;}if(c<f){c=0;f=f-c;}cout<<"The opponent's powers are" <<endl<<"Sickle power" <<s<<endl<< "sword power" << W<<endl<<"Shield power" <<H<<endl;}}
if (A=='c'&& B=='e'){if(c!=0){ s=s-6.0/6*100; if(W<0){W=0;}if(c<e){c=0;e=e-c;}cout<<"The opponent's powers are" <<endl<<"Sickle power" <<s<<endl<< "sword power" << W<<endl<<"Shield power" <<H<<endl;}}
if (A=='c'&& B=='d'){if(c!=0){ s=s-6.0/3*100; if(s<0){s=0;}if(c<d){c=0;d=d-c;}cout<<"The opponent's powers are" <<endl<<"Sickle power" <<s<<endl<< "sword power" << W<<endl<<"Shield power" <<H<<endl;}
}
    }

 if(H==0){cout<<"you have defeated him and you got the map"<<endl;p11=8;}
                else{
                        cout<<"game over"<<endl;
                            return 0;
                            }



            }


         else {
               cout<<"game over,you have quit"<<endl;
               return 0;
              }

//riddles for opening mapbox

 if(p11==8){cout<<"You have won the map box and inorder to open it,you have to solve a riddle"<<endl;}

   int x;char c1;int var;char pl;
   cout<<"enter a number from (1-5)"<<endl;
   cin>>x;
   cout<<"the riddle u have to solve to go to next level in searching the treasure is "<<endl;
   cout<<endl;
   switch (x)
   {
       case 1: {cout<<"A box without hinges,key or lid yet golden treasure is hid inside it"<<endl;
               char a[]="egg";
               char b[20];
		cin.ignore();
               cin.getline(b,20);
                int i=0;int c;
                while(i<20)
                {
                  if(b[i]==a[i])
                    {
                        i++;
                       if(b[i]=='\0' && a[i]=='\0') {c=1;
                                            break;}
                     }
                 else
                    {
                    break;
                    }
                }
                   if(c==1){
                    cout<<"You got your map"<<endl;var=10;
                     }
                     else
                          {
                    cout<<"Game over"<<endl;
                          }
               break;}
       case 2: {cout<<"Iam the biggest alphabet as I contain the most water in the world"<<endl;
               cin>>c1;
               if(c1=='c')
                  {
                    cout<<"You got your map "<<endl;var=10;
                  }
                else
                  {
                    cout<<"Game over"<<endl;
                    break;
			}

                break;}
       case 3: {cout<<"What comes back of 'cow' and front of 'woman?"<<endl;
               cin>>c1;
               if(c1=='w')
                  {
                     cout<<"you got your map"<<endl;var=10;
                  }
               else
                 {
                    cout<<"Game over"<<endl;

                 }
                break;}
       case 4: {cout<<"What comes in every minute,twice in a moment but never in a thousand years"<<endl;
               cin>>c1;
               if(c1=='m')
                  {
                     cout<<"you got your map"<<endl;var=10;
                  }
               else
                 {
                     cout<<"Game over"<<endl;
                 }
               break;}
       case 5:{ cout<<"What goes through cities and fields but never moves "<<endl;
                char ar[]="road";
                char br[20];
		cin.ignore();
               cin.getline(br,20);
                int j=0;int c0=0;
                while(j<20)
                {
                  if(br[j]==ar[j])
                    {
                        j++;
                       if(br[j]=='\0' && ar[j]=='\0') {c0=1;
                                            break;}
                     }
                 else
                    {
                    break;
                    }
                }
                   if(c0==1){
                    cout<<"You got your map"<<endl;var=10;
                     }
               else
                  {
                      cout<<"Gameover"<<endl;
                      break;
                  }
               break;}
        default: cout<<"There is no such possibility"<<endl;
                break;
    }
cout<<endl;
cout<<endl;
//monstar world
if(var==10){
   int ma1, ma2,ma3,ma4,ma5, ma7,l3,l2,l1,p8, p10,po, c22;
   char le2=' ';
   char m1=' ';char m12=' ';char m2=' ';char m4=' ';char m5=' ';char sh=' ';char vi=' ';char vip=' ';char vipu=' ';char vipul=' ';char p1=' ';
   cout<<"MAP"<<endl;

   cout<<"Map has two different paths.You can either go right or left from here "<<endl;
   cout<<"The map has the following descriptions"<<endl;
   cout<<"1)It is always said to look into someone's eyes while talking,but sometimes not looking into someone's eyes directly saves you from someone very dangerous and helps you in earning something which may be useful.Wit can make the most powerful use its power against itself."<<endl;
   cout<<"2)The external appearance of something is not a reliable indication of its true nature.So,pay extra attention."<<endl;
   cout<<"[l]eft or [r]ight"<<endl;
   cin>>le2;
   cout<<endl;
   if(le2=='l')
         {
              cout<<"You have entered into the path of dangers,a desolate,dark forest.In a forest, you just never know what horrors could be lurking  close by, behind the trees, just out of sight.so,be careful!"<<endl;

            cout<<"You happen to see a monster which is a giant,man-eating one-eyed monster"<<endl;
            cout<<"choose the best weapons among all these to survive or quit"<<endl;
            cout<<"(a)a big gallon of wine and a spade."<<endl;
            cout<<"(b)spade and sword."<<endl;
            cout<<"(c)sword and armour to protect yourself"<<endl;
            cout<<"(d)quit"<<endl;
   cin>>m1;
       if(m1=='a')
        {
           cout<<"great wit!You won and you have got a special powerful spear which can be used to kill monsters. "<<endl;ma1=0;
        }
       else if(m1=='d'){cout<<"You did quit"<<endl;return 0;}
       else
        {
       cout<<"wrong choice"<<endl;
       cout<<"Game over"<<endl;
       cout<<"good luck next time."<<endl;
        }
cout<<endl;
cout<<endl;
       if(ma1==0){  cout<<endl;
      cout<<"Your lover is kidnapped by Sultan.Sultan demands you of the power you earned till now in exchange of your love"<<endl;
      cout<<"[r]escue her and loose the powers you have earned till now"<<endl;
      cout<<"[l]eave her and continue with your powers"<<endl;
      cout<<"[q]uit"<<endl;
      cin>>m2;
      if(m2=='q'){cout<<"You did quit" <<endl;return 0;}
      else if(m2=='l'){p10=1;}
      else if(m2=='r'){p10=2;}}
cout<<endl;
cout<<endl;
      if(ma1==0){
                    cout<<"As you go forward,you happen to find a basilisk that is safeguarding something.The Basilisk is said to be capable of changing its face-either into a cock or a distorted human,with the wings and feet of a fowl and a tail of a serpent."<<endl;
                    cout<<"Choose only the most necessary things that you need to protect yourself from the basilisk."<<endl;
                    cout<<"(a)magnifying lens so that you don't look into basilisk's eyes,sword to kill basilisk"<<endl;
                    cout<<"(b)a potion which makes basilisk blinded."<<endl;
                    cout<<"(c)spear"<<endl;
                    cout<<"(d)quit"<<endl;
                    cin>>m3;
                    if(m3=='b'){cout<<"Excellent.You have won a key which fits into a typical,red tree which shapes like a hand."<<endl;ma3=100;}else if(m3=='d'){cout<<"you did quit"<<endl;return 0;}
                    else if(m3=='a'){cout<<"Good job."<<endl;}
                    else{cout<<"Game over"<<endl;

                 }
cout<<endl;
cout<<endl;
     if(m3=='a'||m3=='b')
                   {
                    cout<<"congrats on your previous victory."<<endl;
           {
                    cout<<"You come across a dangerous reptilian monster,kameoglage,a poltergeist which creates disturbances by producing unexplained noises in the space,especially related to the moment of objects "<<endl;
                    cout<<"arrange the following letters in an order which can help you protect from the monster"<<endl;
                    cout<<"{u,r,b,e,a,d,s}"<<endl;
                    char arr[]="earbuds";
                    char brr[20];
		    cin.ignore();
                    cin.getline(brr,20);
                    int k=0;int c3=0;
                    while(k<20)
                       {
                  if(brr[k]==arr[k])
                    {
                        k++;
                       if(brr[k]=='\0' && arr[k]=='\0') {c3=1;
                                            break;}
                     }
                 else
                    {
                    break;
                    }
                        }
                   if(c3==1){
                    cout<<"great work"<<endl;ma2=0;
                     }
               else
                  {
                      cout<<"You died."<<endl;
                      return 0;
                  }

           }
cout<<endl;
cout<<endl;
 if(ma2==0)
          {
             cout<<"As you pass by,you get to meet another monster which is called 'The yaksh',a benevolent, but sometimes capricious monster, connected with water, fertility, trees, the forest, treasure and wilderness.You feel thirsty.As you near a pond,you hear a loud,coarse voice saying."<<endl;
             cout<<"Do not drink water in the pond,without answering my questions,water will turn poison"<<endl;
 cout<<"[P]ay attention and agree to answer the questions"<<endl;
 cout<<"or"<<endl;
 cout<<"[I]gnore and start drinking water"<<endl;
cout<<"or"<<endl;
 cout<<"[Q]uit"<<endl;
 cin>>m12;
      if(m12=='Q'){cout<<"you did quit"<<endl;return 0;}
      if(m12=='I')
             {
              cout<<"You died of poisoning. "<<endl;
              cout<<"Game over"<<endl;
              return 0;
             }
      else if(m12=='P')
             {
              cout<<"The monster starts narrating...I have a son whose name is prachand."<<endl;
              cout<<"His height is 6 feet,he is an assistant at a butcher's shop,and wears size 9 shoes.What does he weigh?"<<endl;
               char ar1[]="meat";
                char br1[20];
		cin.ignore();
               cin.getline(br1,20);
                int j=0;int c12=0;
                while(j<20)
                {
                  if(br1[j]==ar1[j])
                    {
                        j++;
                       if(br1[j]=='\0' && ar1[j]=='\0') {c12=1;
                                            break;}
                     }
                 else
                    {
                    break;
                    }
                }
            if(c12==1){c22=c12;
                    cout<<"Iam impressed by your wit.Iam blessing with a boon 'YOU CAN REMEMBER WHATEVER YOU SEE ONCE"<<endl;
                      }
             }
          }}



}
cout<<endl;
cout<<endl;
if(c22==1){
       char p=' ';char c=' ';int v;char pk=' ';

        cout<<"Now Sultan is following you,Sultan needs the map which is with you from the start"<<endl;
        cout<<"You have a very great ability of remembering everything that you read once or see once"<<endl;
        cout<<"Now you have less power than Sultan so,if you fight he may kill you"<<endl;

        cout<<"In order to proceed further,you can either put the map with you or throw the map."<<endl;
cout<<endl;
         cout<<"(p)throw "<<endl;
         cout<<"(c)ontinue "<<endl;
cout<<endl;
         cin>>c;
        if(c=='p'){
                    cout<<"At this stage you have thrown your map away in order to protect yourself from the villain "<<endl;
                    cout<<"Now Sultan asks you to show him the way to proceed"<<endl;
                    cout<<"Now,there are two ways. you can [q]uit the game or [p]roceed further by helping the villain to show him the way"<<endl;
                    v=1;
                  }
        else
                  {
                cout<<"You lost.Sultan took the map and killed you"<<endl;
                return 0;
                  }
        cin>>vipul;
      if(vipul=='q'){
                      cout<<"you did quit"<<endl;
                    }
cout<<endl;
cout<<endl;
      if(vipul=='p'){
                      cout<<"You'll come across a monster which asks you a final riddle.Riddle:Pointing to a girl in the photograph, Ajay said, Her mother's brother is the only son of my mother's father.How is the girl's mother related to Ajay ?"<<endl;
cout<<"1) Mother 2) Sister"<<endl;
cout<<"3) Aunt   4) Grandmother"<<endl;
                    }
cin>>po;
     if(po==3 && p10==2 && m3=='b'){
                      cout<<"LEVEL1 TREASURE:You won half of the treasure.Try for the next level!"<<endl;
                                 }
     else{
      cout<<"You lost to the monster and Sultan won the treasure."<<endl;
         }
}
}
//wizard world
    if(le2=='r')
          {
           cout<<"Now you are entering into the world of wizards.There are wizards.As you pass by,everything appears normal.You don't find any wizards or any suspiscious creatures.The world is full of concealed passages.There are wizards everywhere and also passages are also quite common"<<endl;
cout<<endl;


      cout<<"[o]bliviate- The charm that wipes one's memory."<<endl;
      cout<<"[l]umos-A handy piece of magic that can turn a wand into a torch."<<endl;
      cout<<"[h]omenumrevelio-Disguised intruders presence revealing spell"<<endl;
      cout<<"[i]ncendio-spell for starting fires"<<endl;
      cout<<"[d]issendium-spell for revealing secret passages"<<endl;
      cout<<"[p]etrificustotalus-spell for paralysing the victim"<<endl;
      cout<<endl;
         cout<<"Would you like to use a spell?"<<endl;
         cout<<"[Y]es/[N]o"<<endl;
         cin>>m4;
         if(m4=='N'){
                      cout<<"you proceed.It becomes dark and the roads are completely deserted."<<endl;
                      ma4=6;
                    }
         if(m4=='Y'){
                      cout<<"Select a spell you want to use"<<endl;cin>>m5;
                    }
              if(m5=='h'){ cout<<endl;
                           cout<<"You suddenly detect an invisible wizard and start running away from it.You also get an extra power potion which helps you to transform into whatever you like"<<endl;
                           ma4=6;
                         }
               else{
                            ma4=6;
                   }

         if(ma4==6){
                     if(m5=='h'){
                                  ma5=5;
                                  cout<<endl;
                                  cout<<"You keep walking and happen to face a wizard which has a weakness without knowing which You can't defeat it"<<endl;
cout<<"To know the weakness of the wizard,you need to solve this riddle"<<endl;cout<<"Stuck at the bottom, Present in sun, but not in rain. Doing no harm, and feeling no pain. Who Am I?"<<endl;
                                }
                      else
                          {
                           cout<<"The world is full of wizards.You lost to an invisible wizard."<<endl;
                           cout<<"Game over."<<endl;return 0;
                          }
                   }

            if(ma5==5){
                char ark[]="shadow";
                char brk[20];
		cin.ignore();
               cin.getline(brk,20);
                int y=0;int cp=0;
                while(y<20)
                {
                  if(brk[y]==ark[y])
                    {
                        y++;
                       if(brk[y]=='\0' && ark[y]=='\0') {cp=1;
                                            break;}
                     }
                 else
                    {
                    break;
                    }
                }
                   if(cp==1){
                    cout<<"You can proceed further but be careful!!.Sultans enters the place with his army takes hold of your lover.Now,you have two ways-either to loose your power to save your lover or to continue the game without her"<<endl;
 cout<<"[c]ontinue or [s]ave her"<<endl;cin>>vip;if(vip=='c'){l3=2;}if(vip=='s'){l3=1;}
ma7=3;
                     }
               else
                  {
                      ma7=3;}
      }
      if(ma7==3){cout<<"enter the spell you want you to use to defeat the wizard."<<endl;cin>>sh;
                     if(sh=='l'){cout<<"You can proceed to next level"<<endl;gh=1;}
                     else{cout<<"Game over"<<endl;return 0;}}
  }
     if((l3==1 && gh==1)||(l3==2 && gh==1))
{
cout<<"Sultan treatens to kill your lover or you should show him the map,as you have given some of your power to save your lover earlier,now you don't have enough power to fight with him and defeat him.You have three ways."<<endl;
cout<<"(a)Quit"<<endl;
cout<<"(b)read the map and destroy it"<<endl;
cout<<"(c)give the map to Sultan"<<endl;
cin>>vipu;
  if(vipu=='c'){cout<<"Sultan kills  both of you and you lose.Sultan wins"<<endl;return 0;}
  else if(vipu=='a'){cout<<"you did quit"<<endl;return 0;}
  else if(vipu=='b'){cout<<"Sultan threatens you to show the way to the treasure"<<endl;l2=2;}
if(l2==2)
{
cout<<endl;
cout<<"Solve this riddle to get to the treasure:You measure my life in hours and I serve you by expiring. I’m quick when I’m thin and slow when I’m fat. The wind is my enemy. "<<endl;
char arp[]="candle";
                char brp[20];
		cin.ignore();
               cin.getline(brp,20);
                int z=0;int ch=0;
                while(z<20)
                {
                  if(brp[z]==arp[z])
                    {
                        z++;
                       if(brp[z]=='\0' && arp[z]=='\0') {ch=1;
                                            break;}
                     }
                 else
                    {
                    break;
                    }
                }
                   if(ch==1){
                    cout<<"You're going to go to the final level.You are given a key as bonus"<<endl;l1=1;
                     }
                  else{cout<<"You lose.Sultan wins."<<endl;return 0;}



}}
cout<<endl;
if(l1==1 || l3==1){ cout<<"There is a witch which poses a riddle to you"<<endl;cout<<endl;
                    cout<<"You have solve this riddle to win:{4,7,9,12};{1,1,4,4};{2,6,5,X}..Turn the key by x anti clock wise direction."<<endl;
                    cin>>p8;
                    if(p8==9 && l3==1){cout<<"You have won the whole treasure"<<endl;}
                    else{cout<<"You have the lost in the last level.Better luck again."<<endl;return 0;}}



    }
return 0;
}





