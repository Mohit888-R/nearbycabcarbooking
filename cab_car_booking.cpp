//cab car booking there are many steps

#include<bits/stdc++.h>
using namespace std;


#define B_MAG   "\x1B[45m"
#define MAG   "\x1B[35m"
#define BLU   "\x1B[34m"
#define B_BLU   "\x1B[44m"
#define B_RED   "\x1B[41;1m"
#define RED   "\x1B[31;1m"
#define RE   "\x1B[31m"
#define B_CYAN   "\x1B[46m"
#define CYAN   "\x1B[36m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"


class Login_signup{
    public:
    int slchoose,slsignchoose,slloginchoose;
    /* signup variable for */
        // driver :
    string driveslsignupuname,driveslsignupemail,driveslsignuppassw,driveslsignuprpassw,driveslsignupmobno,driveslsignupvehicleno;

        //user :
    string  userslsignupuname,userslsignupemail,userslsignuppassw,userslsignuprpassw,userslsignupmobno;


    /* login variable for */
          // driver :
    string driveslloginuname,driveslloginpassw,driveslloginvehicleno;

        //user :
    string  userslloginuname,userslloginpassw;


    string username,fname,usern,line,pw,psd;
     ofstream fileo;
    ifstream filei;
    
    //driver signup password
    /*
    void driversignpassw(){
            cout<<"PASSWORD : ";
            cin>>driveslsignuppassw;
            for(int i=0;i<driveslsignuppassw.length();i++){
                    if(driveslsignuppassw[i]=='@' || driveslsignuppassw[i]=='#' || driveslsignuppassw[i]=='$' || driveslsignuppassw[i]=='%' || driveslsignuppassw[i]=='&' || driveslsignuppassw[i]=='*'|| driveslsignuppassw[i]=='_' || driveslsignuppassw[i] == '1' || driveslsignuppassw[i] == '0' ||  driveslsignuppassw[i] == '2' ||driveslsignuppassw[i] == '3' || driveslsignuppassw[i] == '4' || driveslsignuppassw[i] == '5' || driveslsignuppassw[i] == '5' || driveslsignuppassw[i] == '6'  || driveslsignuppassw[i] == '7' || driveslsignuppassw[i] == '8' || driveslsignuppassw[i] == '9' || driveslsignuppassw[i]=='a' || driveslsignuppassw[i]=='b' || driveslsignuppassw[i]=='c' || driveslsignuppassw[i]=='d' || driveslsignuppassw[i]=='e' || driveslsignuppassw[i]=='f'|| driveslsignuppassw[i]=='g' || driveslsignuppassw[i] == 'h' || driveslsignuppassw[i] == 'i' ||  driveslsignuppassw[i] == 'j' ||driveslsignuppassw[i] == 'k' || driveslsignuppassw[i] == 'l' || driveslsignuppassw[i] == 'm' || driveslsignuppassw[i] == 'n' || driveslsignuppassw[i] == 'o'  || driveslsignuppassw[i] == 'p' || driveslsignuppassw[i] == 'q' || driveslsignuppassw[i] == 'r' || driveslsignuppassw[i]=='s' || driveslsignuppassw[i]=='t' || driveslsignuppassw[i]=='u' || driveslsignuppassw[i]=='v' || driveslsignuppassw[i]=='w' || driveslsignuppassw[i]=='x'|| driveslsignuppassw[i]=='y' || driveslsignuppassw[i] == 'z' || driveslsignuppassw[i]=='A' || driveslsignuppassw[i]=='B' || driveslsignuppassw[i]=='C' || driveslsignuppassw[i]=='D' || driveslsignuppassw[i]=='E' || driveslsignuppassw[i]=='F'|| driveslsignuppassw[i]=='G' || driveslsignuppassw[i] == 'H' || driveslsignuppassw[i] == 'I' ||  driveslsignuppassw[i] == 'J' ||driveslsignuppassw[i] == 'K' || driveslsignuppassw[i] == 'L' || driveslsignuppassw[i] == 'M' || driveslsignuppassw[i] == 'N' || driveslsignuppassw[i] == 'O'  || driveslsignuppassw[i] == 'P' || driveslsignuppassw[i] == 'Q' || driveslsignuppassw[i] == 'R' || driveslsignuppassw[i]=='S' || driveslsignuppassw[i]=='T' || driveslsignuppassw[i]=='U' || driveslsignuppassw[i]=='V' || driveslsignuppassw[i]=='W' || driveslsignuppassw[i]=='X'|| driveslsignuppassw[i]=='Y' || driveslsignuppassw[i] == 'Z'){
                            cout<<"";
                    }
                    else{
                        cout<<"Please Enter one specific sign, number, uppercase character, and lowercase character\n";
                        driversignpassw();
                    }
                    
            }

            
    }
*/

    //driver signup repeat password
/*
    void driversignrpassw(){
            cout<<"REPEAT PASSWORD : ";
            cin>>driveslsignuprpassw;
            if(driveslsignuprpassw==driveslsignuppassw){
                cout<<"";
            }
            else{
                cout<<"please Enter right password\n";
                driversignrpassw();
            }

    }
*/

    //driver signup password
    /*
    void driversignmobno(){
             cout<<"MOBILE NO. : ";
            cin>>driveslsignupmobno;
            if(driveslsignupmobno.length() == 10){

            for(int i=0;i<driveslsignupmobno.length();i++){
                     if(driveslsignupmobno[i] == '1' || driveslsignupmobno[i] == '0' ||  driveslsignupmobno[i] == '2' ||driveslsignupmobno[i] == '3' || driveslsignupmobno[i] == '4' || driveslsignupmobno[i] == '5' || driveslsignupmobno[i] == '5' || driveslsignupmobno[i] == '6'  || driveslsignupmobno[i] == '7' || driveslsignupmobno[i] == '8' || driveslsignupmobno[i] == '9'){
                         cout<<"";
                     }
                     else{
                         cout<<RED<<"You Entered incorrect! please enter correct mob. no. : "<<RESET;
                         driversignmobno();
                     }
            }
        }  
        else{
            cout<<RED<<"You Entered incorrect! please enter correct mob. no. : "<<RESET;
            driversignmobno();
        }
    }
*/

/*###################################################################################################
//##################  USER SIGNUP DETAIL FUNCTION ####################################################
####################################################################################################
*/
 //user signup password
    void usersignpassw(){
            cout<<"PASSWORD : ";
            cin>>psd;
            for(int i=0;i<psd.length();i++){
                    if(psd[i]=='@' || psd[i]=='#' || psd[i]=='$' || psd[i]=='%' || psd[i]=='&' || psd[i]=='*'|| psd[i]=='_' || psd[i] == '1' || psd[i] == '0' ||  psd[i] == '2' ||psd[i] == '3' || psd[i] == '4' || psd[i] == '5' || psd[i] == '5' || psd[i] == '6'  || psd[i] == '7' || psd[i] == '8' || psd[i] == '9' || psd[i]=='a' || psd[i]=='b' || psd[i]=='c' || psd[i]=='d' || psd[i]=='e' || psd[i]=='f'|| psd[i]=='g' || psd[i] == 'h' || psd[i] == 'i' ||  psd[i] == 'j' ||psd[i] == 'k' || psd[i] == 'l' || psd[i] == 'm' || psd[i] == 'n' || psd[i] == 'o'  || psd[i] == 'p' || psd[i] == 'q' || psd[i] == 'r' || psd[i]=='s' || psd[i]=='t' || psd[i]=='u' || psd[i]=='v' || psd[i]=='w' || psd[i]=='x'|| psd[i]=='y' || psd[i] == 'z' || psd[i]=='A' || psd[i]=='B' || psd[i]=='C' || psd[i]=='D' || psd[i]=='E' || psd[i]=='F'|| psd[i]=='G' || psd[i] == 'H' || psd[i] == 'I' ||  psd[i] == 'J' ||psd[i] == 'K' || psd[i] == 'L' || psd[i] == 'M' || psd[i] == 'N' || psd[i] == 'O'  || psd[i] == 'P' || psd[i] == 'Q' || psd[i] == 'R' || psd[i]=='S' || psd[i]=='T' || psd[i]=='U' || psd[i]=='V' || psd[i]=='W' || psd[i]=='X'|| psd[i]=='Y' || psd[i] == 'Z'){
                            cout<<"";
                    }
                    else{
                        cout<<RED<<"Please Enter one specific sign, number, uppercase character, and lowercase character\n"<<RESET;
                        usersignpassw();
                    }
                    
            }

            
    }


    //userr signup repeat password

    void usersignrpassw(){
            cout<<"REPEAT PASSWORD : ";
            cin>>userslsignuprpassw;
            if(userslsignuprpassw==psd){
                cout<<"";
            }
            else{
                cout<<RED<<"please Enter right password\n"<<RESET;
                usersignrpassw();
            }

    }


    //userr signup password
    void usersignmobno(){
             cout<<"MOBILE NO. : ";
            cin>>userslsignupmobno;
            if(userslsignupmobno.length() == 10){

            for(int i=0;i<userslsignupmobno.length();i++){
                     if(userslsignupmobno[i] == '1' || userslsignupmobno[i] == '0' ||  userslsignupmobno[i] == '2' ||userslsignupmobno[i] == '3' || userslsignupmobno[i] == '4' || userslsignupmobno[i] == '5' || userslsignupmobno[i] == '5' || userslsignupmobno[i] == '6'  || userslsignupmobno[i] == '7' || userslsignupmobno[i] == '8' || userslsignupmobno[i] == '9'){
                         cout<<"";
                     }
                     else{
                         cout<<RED<<"You Entered incorrect! please enter correct mob. no. : "<<RESET;
                         usersignmobno();
                     }
            }
        }  
        else{
            cout<<RED<<"You Entered incorrect! please enter correct mob. no. : "<<RESET;
            usersignmobno();
        }
    }





/*
###################################################################################################
################## FINISH USER SIGNUP DETAIL FUNCTION #################################################
####################################################################################################
*/
int tm;
void valid(string str)
{
    string dir,user;
    ifstream file;
    dir = str+".txt";
    file.open(dir.c_str());
    if(!file.is_open() && file.fail())
    {
        //file.close();
        return;
    }
    else
    {
        tm++;
        if(tm==3)
        {
            cout<<RED<<"\nThis username already exists\nPlease try Again."<<RESET;
            //file.close();
            return;
        }
        cout<<RED<<"\nThis username already exists!"<<RESET<<GRN<<"\nCreate a username:";
        cin>>usern;
        //file.close();
        valid(usern);
    }
}

    //sign up function
    void lssingup(){
       
        
        cout<<B_MAG<<BOLD<<"\n\n\t\t USER SIGNUP \n\n"<<RESET;
            //user name i/o
            cout<<GRN<<"USERNAME : ";
            cin.ignore();
            cin>>usern;

             tm=0;
            valid(usern);
            if(tm>=3)
            {
             
                lssingup();                
            }

            //email i/o
            cout<<"EMAIL : ";
            cin>>userslsignupemail;

            //password i/o
            usersignpassw();

            //REPEAT PASSWORD
            usersignrpassw();

            //MOBILE NO.
           usersignmobno();
        
        fname=usern+".txt";
         fileo.open(fname.c_str());
            fileo<<usern<<endl<<psd<<endl;
            cout<<YEL<<"\nYou are successfully registered:)"<<RESET;
            fileo.close();

        lslogin();       

    }



/*
###################################################################################################
################# LOGIN PAGE  DETAIL FOR USER AND DRIVER FUNCTION ###################################
####################################################################################################
*/

//user LOGIN password
/*
    void driveloginpassw(){
            cout<<"PASSWORD : ";
            cin>>driveslloginpassw;
            for(int i=0;i<driveslloginpassw.length();i++){
                    if(driveslloginpassw[i]=='@' || driveslloginpassw[i]=='#' || driveslloginpassw[i]=='$' || driveslloginpassw[i]=='%' || driveslloginpassw[i]=='&' || driveslloginpassw[i]=='*'|| driveslloginpassw[i]=='_' || driveslloginpassw[i] == '1' || driveslloginpassw[i] == '0' ||  driveslloginpassw[i] == '2' ||driveslloginpassw[i] == '3' || driveslloginpassw[i] == '4' || driveslloginpassw[i] == '5' || driveslloginpassw[i] == '5' || driveslloginpassw[i] == '6'  || driveslloginpassw[i] == '7' || driveslloginpassw[i] == '8' || driveslloginpassw[i] == '9' || driveslloginpassw[i]=='a' || driveslloginpassw[i]=='b' || driveslloginpassw[i]=='c' || driveslloginpassw[i]=='d' || driveslloginpassw[i]=='e' || driveslloginpassw[i]=='f'|| driveslloginpassw[i]=='g' || driveslloginpassw[i] == 'h' || driveslloginpassw[i] == 'i' ||  driveslloginpassw[i] == 'j' ||driveslloginpassw[i] == 'k' || driveslloginpassw[i] == 'l' || driveslloginpassw[i] == 'm' || driveslloginpassw[i] == 'n' || driveslloginpassw[i] == 'o'  || driveslloginpassw[i] == 'p' || driveslloginpassw[i] == 'q' || driveslloginpassw[i] == 'r' || driveslloginpassw[i]=='s' || driveslloginpassw[i]=='t' || driveslloginpassw[i]=='u' || driveslloginpassw[i]=='v' || driveslloginpassw[i]=='w' || driveslloginpassw[i]=='x'|| driveslloginpassw[i]=='y' || driveslloginpassw[i] == 'z' || driveslloginpassw[i]=='A' || driveslloginpassw[i]=='B' || driveslloginpassw[i]=='C' || driveslloginpassw[i]=='D' || driveslloginpassw[i]=='E' || driveslloginpassw[i]=='F'|| driveslloginpassw[i]=='G' || driveslloginpassw[i] == 'H' || driveslloginpassw[i] == 'I' ||  driveslloginpassw[i] == 'J' ||driveslloginpassw[i] == 'K' || driveslloginpassw[i] == 'L' || driveslloginpassw[i] == 'M' || driveslloginpassw[i] == 'N' || driveslloginpassw[i] == 'O'  || driveslloginpassw[i] == 'P' || driveslloginpassw[i] == 'Q' || driveslloginpassw[i] == 'R' || driveslloginpassw[i]=='S' || driveslloginpassw[i]=='T' || driveslloginpassw[i]=='U' || driveslloginpassw[i]=='V' || driveslloginpassw[i]=='W' || driveslloginpassw[i]=='X'|| driveslloginpassw[i]=='Y' || driveslloginpassw[i] == 'Z'){
                            cout<<"";
                    }
                    else{
                        cout<<"Please Enter one specific sign, number, uppercase character, and lowercase character\n";
                        driveloginpassw();
                    }
                    
            }

            
    }
    */

    //user LOGIN password
    void userloginpassw(){
            cout<<"PASSWORD : ";
            cin>>pw;
            for(int i=0;i<pw.length();i++){
                    if(pw[i]=='@' || pw[i]=='#' || pw[i]=='$' || pw[i]=='%' || pw[i]=='&' || pw[i]=='*'|| pw[i]=='_' || pw[i] == '1' || pw[i] == '0' ||  pw[i] == '2' ||pw[i] == '3' || pw[i] == '4' || pw[i] == '5' || pw[i] == '5' || pw[i] == '6'  || pw[i] == '7' || pw[i] == '8' || pw[i] == '9' || pw[i]=='a' || pw[i]=='b' || pw[i]=='c' || pw[i]=='d' || pw[i]=='e' || pw[i]=='f'|| pw[i]=='g' || pw[i] == 'h' || pw[i] == 'i' ||  pw[i] == 'j' ||pw[i] == 'k' || pw[i] == 'l' || pw[i] == 'm' || pw[i] == 'n' || pw[i] == 'o'  || pw[i] == 'p' || pw[i] == 'q' || pw[i] == 'r' || pw[i]=='s' || pw[i]=='t' || pw[i]=='u' || pw[i]=='v' || pw[i]=='w' || pw[i]=='x'|| pw[i]=='y' || pw[i] == 'z' || pw[i]=='A' || pw[i]=='B' || pw[i]=='C' || pw[i]=='D' || pw[i]=='E' || pw[i]=='F'|| pw[i]=='G' || pw[i] == 'H' || pw[i] == 'I' ||  pw[i] == 'J' ||pw[i] == 'K' || pw[i] == 'L' || pw[i] == 'M' || pw[i] == 'N' || pw[i] == 'O'  || pw[i] == 'P' || pw[i] == 'Q' || pw[i] == 'R' || pw[i]=='S' || pw[i]=='T' || pw[i]=='U' || pw[i]=='V' || pw[i]=='W' || pw[i]=='X'|| pw[i]=='Y' || pw[i] == 'Z'){
                            cout<<"";
                    }
                    else{
                        cout<<RED<<"Please Enter one specific sign, number, uppercase character, and lowercase character\n"<<RESET;
                        userloginpassw();
                    }
                    
            }

            
    }


    void lslogin(){

         //LOGIN FOR USER 
        
                 cout<<B_MAG<<BOLD<<"\n\n\t\t USER LOGIN \n\n"<<RESET;

            //user name i/o
            cout<<GRN<<"USERNAME/EMAIL : ";
            cin>>username;
            userloginpassw();
            cout<<RESET;
            fname=username+".txt";

            filei.open(fname.c_str());

            if(!filei.is_open() && filei.fail())
            {
                cout<<RED<<"\nYou are not registered, please register before logging in.\n"<<RESET;
                filei.close();
                // continue;
            }
            getline(filei,usern);
            getline(filei,line);
            getline(filei,pw);

            if(username==usern && psd==pw)
            {
                cout<<YEL<<"\nYou are successfully logged in:)\n"<<RESET;
                // cout<<"User-name:"<<usern<<endl;
                // cout<<"Name:"<<line<<endl;
                getline(filei,line);
                // cout<<"Bio:"<<line<<endl;
                filei.close();
            }
             else{
                cout<<RED<<"\nWrong username or password!\nPlease try Again.\n"<<RESET;
                lssingup();
            }
            cout<<endl;           

    }



/* 
  LOGIN SIGNUP SCREEN 
*/
    void lsscreen(){
        cout<<B_MAG<<BOLD<<"\n\n\t\tWELCOME TO CABRENT \n\n\n"<<RESET;
        cout<<BOLD<<BLU<<"\t1.SIGNUP \t\t 2.LOGIN \n\n"<<RESET;
        cout<<GRN<<"\t OPTION : "<<RESET;
        cin>>slchoose;
        
        if(slchoose==1){
            lssingup();
        }
        else if(slchoose==2){
            lslogin();
        }
    }

};





class Homescreen{
    
    public:
        int dloc, ploc;
        char cabtp;
        string stringdloc1, stringdloc2;
        
         //coordinate x,y points
             //1R1
             double x1R1 = 27.545503124098698;
             double y1R1 = 76.61056741912117;

             //1R2
            double x1R2 = 27.54693757174429;
             double y1R2 = 76.61075072159706;

             //1R3
             double x1R3 = 27.547390096292798;
             double y1R3 = 76.61058466020081;

             //1R4
             double x1R4 =27.546532667683355;
             double y1R4 =  76.61247051924981;


             //1R5   27.548711087036217, 76.61155792871952

            double x1R5 = 27.548711087036217;
             double y1R5 = 76.61155792871952;

             //1R6      27.547943458487083, 76.61238862013418

             double x1R6 =27.547943458487083 ;
             double y1R6 = 76.61238862013418;

             //1R7   27.548135366125933, 76.61320761164096

             double x1R7 =  27.548135366125933;
             double y1R7 = 76.61320761164096;

             //1R8   27.54832908047106, 76.61243526100678

             double x1R8 = 27.54832908047106;
             double y1R8 = 76.61243526100678;

             //1R9   27.54860947725779, 76.6122088077708

             double x1R9 = 27.54860947725779 ;
             double y1R9 = 76.6122088077708;

             //1R10  27.548966030167993, 76.61248601776526

             double x1R10 = 27.548966030167993 ;
             double y1R10 = 76.61248601776526;

             //1R11  27.548706404381004, 76.61330593465415

             double x1R11 = 27.548706404381004;
             double y1R11 = 76.61330593465415;

             //1R12  27.54942584471223, 76.61325308648036
             double x1R12 =  27.54942584471223;
             double y1R12 = 76.61325308648036;

             //1R13 27.55018394533589, 76.61285093677306
             double x1R13 = 27.55018394533589 ;
             double y1R13 = 76.61285093677306;

             //1R14 27.551038965797158, 76.61298368522125
             double x1R14 = 27.551038965797158;
             double y1R14 = 76.61298368522125 ;

             //1R15  27.551220294215234, 76.61348744588581
             double x1R15 = 27.551220294215234 ;
             double y1R15 = 76.61348744588581;

             //1R16 27.551274354876842, 76.61348734845207
             double x1R16 = 27.551274354876842 ;
             double y1R16 = 76.61348734845207;

             //1R17 27.551556639762097, 76.61302709022566

             double x1R17 = 27.551556639762097;
             double y1R17 = 76.61302709022566;

             //1R18 27.55169142963453, 76.61303419447961
             double x1R18 = 27.55169142963453 ;
             double y1R18 = 76.61303419447961;

             //1R19 27.551909360573383, 76.61297878129663
             double x1R19 = 27.551909360573383;
             double y1R19 =  76.61297878129663;

             //1R20 27.552095437590566, 76.6130015454343

             double x1R20 = 27.552095437590566;
             double y1R20 =76.6130015454343 ;

             //1R21 27.552349899322564, 76.61287508971331
             double x1R21 = 27.552349899322564;
             double y1R21 = 76.61287508971331;
             //1R22 27.553332316457748, 76.61267494042848
             double x1R22 = 27.553332316457748;
             double y1R22 = 76.61267494042848 ;

            //left side

             //1L1 27.5484096980437, 76.61088789035539
             double x1L1 =27.5484096980437 ;
             double y1L1 = 76.61088789035539;

             //1L2 27.548592362408684, 76.61088931120389

            double x1L2 = 27.548592362408684;
             double y1L2 =  76.61088931120389;

             //1L3 27.548753610701024, 76.61076569718173

             double x1L3 = 27.548753610701024;
             double y1L3 = 76.61076569718173;

             //1L4  27.549160509635012, 76.61069891718772            

             double x1L4 =27.549160509635012;
             double y1L4 =  76.61069891718772 ;

             //1L5   27.55016694024663, 76.61059516301485
            double x1L5 =27.55016694024663 ;
             double y1L5 = 76.61059516301485;

             //1L6 27.550320627830004, 76.6102399503144
             double x1L6 = 27.550320627830004;
             double y1L6 = 76.6102399503144;

             //1L7 27.550753975257262, 76.60993872994325

             double x1L7 =27.550753975257262 ;
             double y1L7 =76.60993872994325 ;

             //1L8 27.55083963675448, 76.61036214348097

             double x1L8 = 27.55083963675448;
             double y1L8 =76.61036214348097 ;

             //1L9 27.550890025841547, 76.60993304653915

             double x1L9 =27.550890025841547 ;
             double y1L9 =76.60993304653915 ;

             //1L10 27.55104514892357, 76.61078899846456

             double x1L10 =27.55104514892357 ;
             double y1L10 = 76.61078899846456;

             //1L11 27.551211782236074, 76.61041863278045

             double x1L11 = 27.551211782236074;
             double y1L11 = 76.61041863278045;

             //1L12 27.551221584186255, 76.61092350938767

             double x1L12 = 27.551221584186255;
             double y1L12 = 76.61092350938767;

             //1L13 27.551682274912874, 76.61016250925023

             double x1L13 = 27.551682274912874;
             double y1L13 = 76.61016250925023;

             //1L14 27.552420573526543, 76.61115076758934

             double x1L14 = 27.552420573526543;
             double y1L14 = 76.61115076758934;

             //1L15 27.552492453691418, 76.61050585222546

             double x1L15 = 27.552492453691418;
             double y1L15 = 76.61050585222546;

             //1L16 27.553022089260878, 76.61169145811753

             double x1L16 = 27.553022089260878;
             double y1L16 = 76.61169145811753;

            //inside

             //1I1 27.55330599715133, 76.61199045755683

             double x1I1 =27.55330599715133 ;
             double y1I1 = 76.61199045755683;

             //1I2 27.550655690245666, 76.61178092213605

            double x1I2 = 27.550655690245666;
             double y1I2 = 76.61178092213605;

             //1I3 27.553139710680096, 76.61083648460658

             double x1I3 =27.553139710680096 ;
             double y1I3 = 76.61083648460658;

             //1I4 27.553538315667392, 76.61140953797334

             double x1I4 =27.553538315667392 ;
             double y1I4 = 76.61140953797334;



/////////////// SMD CIRCLE
            //SOUTH SIDE
            //2S1 27.55453720338865, 76.61298633428093

             double x2S1 = 27.55453720338865;
             double y2S1 = 76.61298633428093;

             //2S2  27.554226327167513, 76.61105776109433

            double x2S2 =  27.554226327167513 ;
             double y2S2 = 76.61105776109433 ;

             //2S3 27.554389119997357, 76.6110309280225

             double x2S3 = 27.554389119997357 ;
             double y2S3 = 76.6110309280225 ;

             //2S4 27.554377580029406, 76.61081778464282

             double x2S4 =  27.554377580029406 ;
             double y2S4 =  76.61081778464282 ;


             //2S5   27.554855478949836, 76.61154609994927

             double x2S5 = 27.554855478949836 ;
             double y2S5 = 76.61154609994927 ;

             //2S6      27.554938011741818, 76.61249635477473

             double x2S6 =27.554938011741818 ;
             double y2S6 = 76.61249635477473 ;

             //NORTH SIDE
             //2N1 27.556072343174225, 76.61256110067342

             double x2N1 = 27.556072343174225   ;
             double y2N1 =   76.61256110067342  ;

             //2N2   27.556748165647416, 76.6126327088986

            double x2N2 = 27.556748165647416   ;
             double y2N2 = 76.6126327088986   ;

             //2N3  27.556851788772352, 76.61201541937486


             double x2N3 = 27.556851788772352 ;
             double y2N3 =   76.61201541937486  ;

             //2N4  27.557288947766853, 76.61222727022194

             double x2N4 =  27.557288947766853  ;
             double y2N4 =  76.61222727022194  ;



        // W SIDE
             //2W1 27.556105071863016, 76.61162065643107

             double x2W1 = 27.556105071863016 ;
             double y2W1 =   76.61162065643107  ;

             //2W2   27.555625810831142, 76.6113394061747

            double x2W2 = 27.555625810831142  ;
             double y2W2 = 76.6113394061747 ;

             //2W3  27.555460659586462, 76.60982357691535

             double x2W3 = 27.555460659586462  ;
             double y2W3 =  76.60982357691535 ;

             //2W4   27.556216290254458, 76.61137044376899

             double x2W4 =  27.556216290254458 ;
             double y2W4 =  76.61137044376899 ;


        // E SIDE
            //2E1 27.55591459080853, 76.61438533414604
  
             double x2E1 =  27.55591459080853 ;
             double y2E1 = 76.61438533414604 ;

             //2E2    27.55568791316095, 76.6145168277724

            double x2E2 =    27.55568791316095 ;
             double y2E2 = 76.6145168277724 ;

             //2E3  27.55585954056061, 76.6158500269729


             double x2E3 =   27.55585954056061   ;
             double y2E3 =   76.6158500269729  ;

             //2E4  27.55417336861319, 76.61598525158102


             double x2E4 =   27.55417336861319   ;
             double y2E4 =  76.61598525158102   ;


             //2E5  27.556006231212713, 76.61625189139887

            double x2E5 =  27.556006231212713 ;
             double y2E5 =   76.61625189139887;

             //2E6  27.55006538666468, 76.61649749247027  

             double x2E6 =  27.55006538666468;
             double y2E6 =   76.61649749247027;

        //AT SIDE
            //2A1 27.555709751076638, 76.61234644911342
  
             double x2A1 =  27.555709751076638 ;
             double y2A1 =  76.61234644911342 ;

       
    
    //cab type function
        void cabtype(){
            cout<<GRN<<"\n\nCAB RIDE : \n\n"<<RESET;
            cout<<RE<<"A. MICRO \t B. MINI \t C.SHARE \n\n"<<RESET;
            cout<<GRN<<"Your Cab Car for your journey : "<<RESET;
            cin>>cabtp;
             if(cabtp=='A' || cabtp=='B'|| cabtp=='C' || cabtp=='a' || cabtp=='b' || cabtp=='c'){
                cout<<"\n";
            }
            else{
                cout<<"\n";
                cout<<RED<<"Try again and input right character like- A/a,B/b,C/c,D/d\n\n"<<RESET;
                cabtype();
             }
        }

        void perfectdloc1(){
            
            cout<<GRN<<"Enter your perfect location : ";
            cin>>stringdloc1;
            cout<<RESET;
            if(stringdloc1=="1r1" || stringdloc1=="1R1" || stringdloc1=="1r2" || stringdloc1=="1R2" || stringdloc1=="1r3" || stringdloc1=="1R3" ||stringdloc1=="1r4" || stringdloc1=="1R4" ||stringdloc1=="1r5" || stringdloc1=="1R5" ||stringdloc1=="1r6" || stringdloc1=="1R6" ||stringdloc1=="1r7" || stringdloc1=="1R7" ||stringdloc1=="1r8" || stringdloc1=="1R8" ||stringdloc1=="1r9" || stringdloc1=="1R9" ||stringdloc1=="1r10" || stringdloc1=="1R10" ||stringdloc1=="1r11" || stringdloc1=="1R11" ||stringdloc1=="1r12" || stringdloc1=="1R12" ||stringdloc1=="1r13" || stringdloc1=="1R14" ||stringdloc1=="1r15" || stringdloc1=="1R15" ||stringdloc1=="1r16" || stringdloc1=="1R16" ||stringdloc1=="1r17" || stringdloc1=="1R17" ||stringdloc1=="1r18" || stringdloc1=="1R18" ||stringdloc1=="1r19" || stringdloc1=="1R19" ||stringdloc1=="1r20" || stringdloc1=="1R20" ||stringdloc1=="1r21" || stringdloc1=="1R21" ||stringdloc1=="1r22" || stringdloc1=="1R22" ||stringdloc1=="1l1" || stringdloc1=="1L1" ||stringdloc1=="1l2" || stringdloc1=="1L2" ||stringdloc1=="1l3" || stringdloc1=="1L3" ||stringdloc1=="1l4" || stringdloc1=="1L4" ||stringdloc1=="1l5" || stringdloc1=="1L5" ||stringdloc1=="1l6" || stringdloc1=="1L6" ||stringdloc1=="1l7" || stringdloc1=="1L7" ||stringdloc1=="1l8" || stringdloc1=="1L8" ||stringdloc1=="1l9" || stringdloc1=="1L9" ||stringdloc1=="1l10" || stringdloc1=="1L10" ||stringdloc1=="1l11" || stringdloc1=="1L11" ||stringdloc1=="1l12" || stringdloc1=="1L12" ||stringdloc1=="1l13" || stringdloc1=="1L13" ||stringdloc1=="1l14" || stringdloc1=="1L14" ||stringdloc1=="1l15" || stringdloc1=="1L15" ||stringdloc1=="1l16" || stringdloc1=="1L16" ||stringdloc1=="1i1" || stringdloc1=="1I1" ||stringdloc1=="1i2" || stringdloc1=="1I2" ||stringdloc1=="1i3" || stringdloc1=="1I3" ||stringdloc1=="1i4" || stringdloc1=="1I4"){
                cout<<"";
            }
            else{
                cout<<RED<<"Please Enter correct  location point."<<RESET;
                perfectdloc1();
            }
        }

         void perfectdloc2(){

            cout<<GRN<<"Enter your perfect location : ";
            cin>>stringdloc2;
            cout<<RESET;
            if( stringdloc2 == "2s1" ||  stringdloc2 == "2S1" || stringdloc2 == "2s2" ||  stringdloc2 == "2S2" || stringdloc2 =="2s3"||  stringdloc2 =="2S3"||  stringdloc2 =="2s4"||  stringdloc2 =="2S4"||  stringdloc2 =="2s5"||  stringdloc2 =="2S5"||  stringdloc2 =="2s6"|| stringdloc2 =="2S6"|| stringdloc2 =="2n1"|| stringdloc2 =="2N1"|| stringdloc2 =="2n2"|| stringdloc2 =="2N2"|| stringdloc2 =="2n3"|| stringdloc2 =="2N3"|| stringdloc2 =="2n4"|| stringdloc2 =="2N4"|| stringdloc2 =="2w1"|| stringdloc2 =="2W1"|| stringdloc2 =="2w2"|| stringdloc2 =="2W2"|| stringdloc2 =="2w3"|| stringdloc2 =="2W3"|| stringdloc2 =="2w4"|| stringdloc2 =="2W4"||  stringdloc2 =="2e1"|| stringdloc2 =="2E1"|| stringdloc2 =="2e2"|| stringdloc2 =="2E2"|| stringdloc2 =="2e3"|| stringdloc2 =="2E3"|| stringdloc2 =="2e4"|| stringdloc2 =="2E4"|| stringdloc2 =="2e5"|| stringdloc2 =="2E5"|| stringdloc2 =="2e6" || stringdloc2 =="2E6"|| stringdloc2 =="2a1" || stringdloc2 =="2A1" ){
                cout<<"";
            }
            else{
                cout<<RED<<"Please Enter correct location point."<<RESET;
                perfectdloc2();
            }
        }




       void dmainlocation(){
           cout<<GRN<<"\n 1. Moti Dungari \t 2. SMD CIRCLE \n";
           cout<<"Choose an Option : ";
            cin>>dloc;
            cout<<RESET;
        
        cout<<"\n";
            if(dloc==1){
                    cout<<"\t s.no. \t palace \n";
                    //RIGHT SIDE
                    cout<<RE;
                    cout<<"\t 1R1 \t INDIRA GANDHI STADIUM \n";
                    cout<<"\t 1R2 \t JVVNL OFFICE \n";
                    cout<<"\t 1R3 \t K.V.(KENDRIYA VIDYALAYA NO.1) \n";
                    cout<<"\t 1R4 \t CAPTAIN CHUTTAN LAL MEENA HOSTEL \n";
                    cout<<"\t 1R5 \t CHILDREN PARK \n";
                    cout<<"\t 1R6 \t POLICE ANVESHAN BHAVAN \n";
                    cout<<"\t 1R7 \t HILL VIEW MARRIAGE GARDEN \n";
                    cout<<"\t 1R8 \t CRAZEOVER COFFEE \n";
                    cout<<"\t 1R9 \t HOTEL HILL VIEW \n";
                    cout<<"\t 1R10 \t THE COMFORT \n";
                    cout<<"\t 1R11 \t ALWAR SAHKARITA BHAWAN \n";
                    cout<<"\t 1R12 \t HANUMAN TEMPLE \n";
                    cout<<"\t 1R13 \t MOTI DUNGARI EXELLENCY \n";
                    cout<<"\t 1R14 \t DELHI WORLD PUBLIC SCHOOL \n";
                    cout<<"\t 1R15 \t POLICE QUARTES \n";
                    cout<<"\t 1R16 \t DSP OFFICE \n";
                    cout<<"\t 1R17 \t SHIV TEMPLE \n";
                    cout<<"\t 1R18 \t GIGIL RESTAURANT & BISTRO CAFE \n";
                    cout<<"\t 1R19 \t MOUNT LITERA ZEE SCHOOL \n";
                    cout<<"\t 1R20 \t TRAFFIC POLICE STATION \n";
                    cout<<"\t 1R21 \t KP CAMPUS \n";
                    cout<<"\t 1R22 \t HOTEL SAROOP VILAS PALACE \n";
                    //LEFT SIDE
                     cout<<"\t 1L1 \t UPKAR CAFE \n";
                    cout<<"\t 1L2. \t AAYKAR VIBHAG \n";
                    cout<<"\t 1L3. \t THE FOOD REPUBLIC \n";
                    cout<<"\t 1L4 \t GOPAL KI DUKAN \n";
                    cout<<"\t 1L5 \t MANU LIBRARY \n";
                    cout<<"\t 1L6 \t DOONGRI PUBLIC SCHOOL \n";
                    cout<<"\t 1L7 \t LIC OFFICE \n";
                    cout<<"\t 1L8 \t LEMONADE \n";
                    cout<<"\t 1L9 \t LIC OF INDIA, BRANCH OFFICE \n";
                    cout<<"\t 1L10 \t ASHISH KALRA IGP \n";
                    cout<<"\t 1L11 \t PREM PAVITRA BHOJNALYA \n";
                    cout<<"\t 1L12 \t AA AGROTECH \n";
                    cout<<"\t 1L13 \t RAJAWAT HOTEL \n";
                    cout<<"\t 1L14 \t KP CAMPUS \n";
                    cout<<"\t 1L15 \t MDG POST OFFICE \n";
                    cout<<"\t 1L16 \t SMART FASHION BOUTIQUE \n"; 

                    // IN SIDE
                     cout<<"\t 1I1 \t RAJIV GANDHI PARK \n";
                    cout<<"\t 1I2. \t MOTI DUNGRI HILL \n";
                    cout<<"\t 1I3. \t THE HUT A FAMILA RESTAURANT \n";
                    cout<<"\t 1I4 \t MATSYA IAS ACADEMY \n";

                    cout<<"\n\n\n\n";
                    cout<<RESET;
                    perfectdloc1();
            }
            else if(dloc==2){
                     cout<<"\t s.no. \t palace \n";
                     //SOUTH SIDE
                      cout<<RE;
                    cout<<"\t 2S1 \t  SMD GIRLS SCHOOL \n";
                    cout<<"\t 2S2. \t RAJASTHAN INSTITUTE \n";
                    cout<<"\t 2S3. \t B.S. PHOTO STATE \n";
                    cout<<"\t 2S4 \t SHIV TEMPLE \n";
                    cout<<"\t 2S5 \t RMSA OFFICE \n";
                    cout<<"\t 2S6 \t GOVT. GIRLS SR. HIGHER SECONDARY SCHOOL \n";


                    //NORTH SIDE
                    cout<<"\t 2N1 \t MAGISTRATE BUNGALOW  \n";
                    cout<<"\t 2N2. \t JIO CENTRE \n";
                    cout<<"\t 2N3. \t NETRA JYOTI HOSPITAL \n";
                    cout<<"\t 2N4 \t CRYSTAL TOWER  \n";

                    //WEST SIDE
                    cout<<"\t 2W1 \t NAV JYOTISH KENDRA  \n";
                    cout<<"\t 2W2. \t DELHI MAA TEMPLE \n";
                    cout<<"\t 2W3. \t GOVT. NEW LIBRARY \n";
                    cout<<"\t 2W4 \t SARA MARRIAGE HOME \n";

                     //EAST SIDE
                    cout<<"\t 2E1 \t AFC CHAT BAZAAR \n";
                    cout<<"\t 2E2. \t CHINA TOWN SHOP \n";
                    cout<<"\t 2E3. \t CHOWPATTY ROLL POINT \n";
                    cout<<"\t 2E4 \t RR COLLEGE GROUND \n";
                    cout<<"\t 2E5 \t NEHRU GARDEN \n";
                    cout<<"\t 2E6 \t RR COLLEGE \n";

                     //AT SIDE
                    cout<<"\t 2A1 \t SMD CIRCLE \n";


                    cout<<"\n\n\n\n";
                    cout<<RESET;
                    perfectdloc2();
            }
            else{
                cout<<"You Entered invalid Location! please Enter again.\n";
                dmainlocation();
            }
       }



 void pmainlocation(){
           cout<<"1. Moti Dungari  \t 2. SMD CIRCLE \n";
           cout<<"Choose an Option : ";
            cin>>ploc;
            cout<<endl;  
      

            if(ploc==1){
                    cout<<"\t s.no. \t palace \n";
                    //RIGHT SIDE
                    cout<<RE;
                    cout<<"\t 1R1 \t INDIRA GANDHI STADIUM \n";
                    cout<<"\t 1R2 \t JVVNL OFFICE \n";
                    cout<<"\t 1R3 \t K.V.(KENDRIYA VIDYALAYA NO.1) \n";
                    cout<<"\t 1R4 \t CAPTAIN CHUTTAN LAL MEENA HOSTEL \n";
                    cout<<"\t 1R5 \t CHILDREN PARK \n";
                    cout<<"\t 1R6 \t POLICE ANVESHAN BHAVAN \n";
                    cout<<"\t 1R7 \t HILL VIEW MARRIAGE GARDEN \n";
                    cout<<"\t 1R8 \t CRAZEOVER COFFEE \n";
                    cout<<"\t 1R9 \t HOTEL HILL VIEW \n";
                    cout<<"\t 1R10 \t THE COMFORT \n";
                    cout<<"\t 1R11 \t ALWAR SAHKARITA BHAWAN \n";
                    cout<<"\t 1R12 \t HANUMAN TEMPLE \n";
                    cout<<"\t 1R13 \t MOTI DUNGARI EXELLENCY \n";
                    cout<<"\t 1R14 \t DELHI WORLD PUBLIC SCHOOL \n";
                    cout<<"\t 1R15 \t POLICE QUARTES \n";
                    cout<<"\t 1R16 \t DSP OFFICE \n";
                    cout<<"\t 1R17 \t SHIV TEMPLE \n";
                    cout<<"\t 1R18 \t GIGIL RESTAURANT & BISTRO CAFE \n";
                    cout<<"\t 1R19 \t MOUNT LITERA ZEE SCHOOL \n";
                    cout<<"\t 1R20 \t TRAFFIC POLICE STATION \n";
                    cout<<"\t 1R21 \t KP CAMPUS \n";
                    cout<<"\t 1R22 \t HOTEL SAROOP VILAS PALACE \n";
                    //LEFT SIDE
                     cout<<"\t 1L1 \t UPKAR CAFE \n";
                    cout<<"\t 1L2. \t AAYKAR VIBHAG \n";
                    cout<<"\t 1L3. \t THE FOOD REPUBLIC \n";
                    cout<<"\t 1L4 \t GOPAL KI DUKAN \n";
                    cout<<"\t 1L5 \t MANU LIBRARY \n";
                    cout<<"\t 1L6 \t DOONGRI PUBLIC SCHOOL \n";
                    cout<<"\t 1L7 \t LIC OFFICE \n";
                    cout<<"\t 1L8 \t LEMONADE \n";
                    cout<<"\t 1L9 \t LIC OF INDIA, BRANCH OFFICE \n";
                    cout<<"\t 1L10 \t ASHISH KALRA IGP \n";
                    cout<<"\t 1L11 \t PREM PAVITRA BHOJNALYA \n";
                    cout<<"\t 1L12 \t AA AGROTECH \n";
                    cout<<"\t 1L13 \t RAJAWAT HOTEL \n";
                    cout<<"\t 1L14 \t KP CAMPUS \n";
                    cout<<"\t 1L15 \t MDG POST OFFICE \n";
                    cout<<"\t 1L16 \t SMART FASHION BOUTIQUE \n"; 

                    // IN SIDE
                     cout<<"\t 1I1 \t RAJIV GANDHI PARK \n";
                    cout<<"\t 1I2. \t MOTI DUNGRI HILL \n";
                    cout<<"\t 1I3. \t THE HUT A FAMILA RESTAURANT \n";
                    cout<<"\t 1I4 \t MATSYA IAS ACADEMY \n";

                    cout<<"\n\n\n\n";
                    cout<<RESET;
                    perfectdloc1();
            }
            else if(ploc==2){
                     cout<<"\t s.no. \t palace \n";
                     //SOUTH SIDE
                     cout<<RE;
                    cout<<"\t 2S1 \t  SMD GIRLS SCHOOL \n";
                    cout<<"\t 2S2. \t RAJASTHAN INSTITUTE \n";
                    cout<<"\t 2S3. \t B.S. PHOTO STATE \n";
                    cout<<"\t 2S4 \t SHIV TEMPLE \n";
                    cout<<"\t 2S5 \t RMSA OFFICE \n";
                    cout<<"\t 2S6 \t GOVT. GIRLS SR. HIGHER SECONDARY SCHOOL \n";


                    //NORTH SIDE
                    cout<<"\t 2N1 \t MAGISTRATE BUNGALOW  \n";
                    cout<<"\t 2N2. \t JIO CENTRE \n";
                    cout<<"\t 2N3. \t NETRA JYOTI HOSPITAL \n";
                    cout<<"\t 2N4 \t CRYSTAL TOWER  \n";

                    //WEST SIDE
                    cout<<"\t 2W1 \t NAV JYOTISH KENDRA  \n";
                    cout<<"\t 2W2. \t DELHI MAA TEMPLE \n";
                    cout<<"\t 2W3. \t GOVT. NEW LIBRARY \n";
                    cout<<"\t 2W4 \t SARA MARRIAGE HOME \n";

                     //EAST SIDE
                    cout<<"\t 2E1 \t AFC CHAT BAZAAR \n";
                    cout<<"\t 2E2. \t CHINA TOWN SHOP \n";
                    cout<<"\t 2E3. \t CHOWPATTY ROLL POINT \n";
                    cout<<"\t 2E4 \t RR COLLEGE GROUND \n";
                    cout<<"\t 2E5 \t NEHRU GARDEN \n";
                    cout<<"\t 2E6 \t RR COLLEGE \n";

                     //AT SIDE
                    cout<<"\t 2A1 \t SMD CIRCLE \n";


                    cout<<"\n\n\n\n";
                    cout<<RESET;
                    perfectdloc2();
            }
            else{
                cout<<"You Entered invalid Location! please Enter again.\n";
                pmainlocation();
            }
       }

     
       
        //homescreen function 
        void homescreen(){
            cout<<"\n\n\n";
            
            cout<<B_MAG<<BOLD<<"\t WELCOME TO CABRENT PORTAL \n\n"<<RESET;

            cout<<BLU<<" DROP LOCATION POINT : \n"<<RESET;
            dmainlocation();
            cout<<endl;
            cabtype();    

             
        }

       
};



class Cabbooking:public Homescreen{
    public:
    
    string name,pickuplocation,droplocation;
    int age,gender,m,h,day,month,year;
    string phnumber;
    double distance;
    int paymethod;
    float pay;
    

    
    void gender_dtl(){
        cout<<"Gender : \n 1. Male \t 2. Female \n";
        cout<<"Gender : ";
        cin>>gender;
        if(gender==1 || gender == 2){
            cout<<"\n";
        }
        else{
            cout<<"You Enter Invalid! Please enter a valid number \n";
            gender_dtl();
        }
    }

    void ptime()
    {
        cout<<"\nhour : ";
        cin>>h;
        cout<<"minute : ";
        cin>>m;
        if(h>=0 && h<=23 && m>=0 && m<=59){
            exit;
        }
        else{
            cout<<"You Enter time invalid! please Enter valid time.";
            ptime();
        }
        
        
    }

    void pdate(){
        cout<<endl;
        cout<<"day : ";
        cin>>day;
        cout<<"month : ";
        cin>>month;
        cout<<"year : ";
        cin>>year;

        
        
        //pending work..........
    }

    
    void phno(){
             cout<<"Phone NO. : ";
            cin>>phnumber;
            if(phnumber.length() == 10){

            for(int i=0;i<phnumber.length();i++){
                    if( phnumber[i] == '0' || phnumber[i] == '1' ||  phnumber[i] == '2' ||phnumber[i] == '3' || phnumber[i] == '4' || phnumber[i] == '5' || phnumber[i] == '5' || phnumber[i] == '6'  || phnumber[i] == '7' || phnumber[i] == '8' || phnumber[i] == '9')
                    {
                       cout<<"";
                    }
                     else{
                         cout<<RED<<"You Entered incorrect! please enter correct mob. no. : "<<RESET;
                         phno();
                     }
            }
        }  
        else{
            cout<<RED<<"You Entered incorrect! please enter correct mob. no. : "<<RESET;
            phno();
        }
    }



    void book_details(){
            
            cout<<B_MAG<<"\n\n\t PLEASE ENTER YOUR BOOKING DETAIL  \n\n"<<RESET;
            
            cout<<GRN;
            //name
            cout<<"Name : ";
            cin>>name;
            cout<<endl;
            //age
            cout<<"Age : ";
            cin>>age;
            cout<<endl;
            //gender detail
            gender_dtl();

            //phone numeber
            phno();
           
            //pickup location
            cout<<"\nPickup Location Point : \n";
            pmainlocation();
            
            //drop location automatic fill
            
            cout<<GRN<<"\n\nDrop Location Point : ";
            dmainlocation();

            
            //picup date and time
            cout<<GRN;
            cout<<"Pickup Date :";
            pdate();

            cout<<GRN;
            cout<<"\nPickup Time : ";
            ptime();
            cout<<RESET;
            
    }


//best part of program distance between two points
    void distancebtwnpoint(){
           int x1,x2,y1,y2;

           //perfect location pickup 
          if(ploc==1){
                if(stringdloc1=="1R1" || stringdloc2=="1r1"){
                    x1 = x1R1;
                    y1 = y1R1;
                }
                else if(stringdloc1=="1R2" || stringdloc2=="1r2"){
                    x1 = x1R2;
                    y1 = y1R2;
                }
                else if(stringdloc1=="1R3" || stringdloc2=="1r3"){
                    x1 = x1R3;
                    y1 = y1R3;
                }
                else if(stringdloc1=="1R4" || stringdloc2=="1r4"){
                    x1 = x1R4;
                    y1 = y1R4;
                }
                else if(stringdloc1=="1R5" || stringdloc2=="1r5"){
                    x1 = x1R5;
                    y1 = y1R5;
                }
                else if(stringdloc1=="1R6" || stringdloc2=="1r6"){
                    x1 = x1R6;
                    y1 = y1R6;
                }
                else if(stringdloc1=="1R7" || stringdloc2=="1r7"){
                    x1 = x1R7;
                    y1 = y1R7;
                }
                else if(stringdloc1=="1R8" || stringdloc2=="1r8"){
                    x1 = x1R8;
                    y1 = y1R8;
                }
                else if(stringdloc1=="1R9" || stringdloc2=="1r9"){
                    x1 = x1R9;
                    y1 = y1R9;
                }
                else if(stringdloc1=="1R10" || stringdloc2=="1r10"){
                    x1 = x1R10;
                    y1 = y1R10;
                }
                else if(stringdloc1=="1R11" || stringdloc2=="1r11"){
                    x1 = x1R11;
                    y1 = y1R11;
                }
                else if(stringdloc1=="1R12" || stringdloc2=="1r12"){
                    x1 = x1R12;
                    y1 = y1R12;
                }
                else if(stringdloc1=="1R13" || stringdloc2=="1r13"){
                    x1 = x1R13;
                    y1 = y1R13;
                }
                else if(stringdloc1=="1R14" || stringdloc2=="1r14"){
                    x1 = x1R14;
                    y1 = y1R14;
                }
                else if(stringdloc1=="1R15" || stringdloc2=="1r15"){
                    x1 = x1R15;
                    y1 = y1R15;
                }
                else if(stringdloc1=="1R16" || stringdloc2=="1r16"){
                    x1 = x1R16;
                    y1 = y1R16;
                }
                else if(stringdloc1=="1R17" || stringdloc2=="1r17"){
                    x1 = x1R17;
                    y1 = y1R17;
                }
                else if(stringdloc1=="1R18" || stringdloc2=="1r18"){
                    x1 = x1R18;
                    y1 = y1R18;
                }
                else if(stringdloc1=="1R19" || stringdloc2=="1r19"){
                    x1 = x1R19;
                    y1 = y1R19;
                }
                else if(stringdloc1=="1R20" || stringdloc2=="1r20"){
                    x1 = x1R20;
                    y1 = y1R20;
                }
                else if(stringdloc1=="1R20" || stringdloc2=="1r20"){
                    x1 = x1R20;
                    y1 = y1R20;
                }
                else if(stringdloc1=="1R20" || stringdloc2=="1r20"){
                    x1 = x1R20;
                    y1 = y1R20;
                } 
                else if(stringdloc1=="1L1" || stringdloc2=="1l1"){
                    x1 = x1L1;
                    y1 = y1L1;
                }
                else if(stringdloc1=="1L2" || stringdloc2=="1l2"){
                    x1 = x1L2;
                    y1 = y1L2;
                }
                else if(stringdloc1=="1L3" || stringdloc2=="1l3"){
                    x1 = x1L3;
                    y1 = y1L3;
                }
                else if(stringdloc1=="1L4" || stringdloc2=="1l4"){
                    x1 = x1L4;
                    y1 = y1L4;
                }
                else if(stringdloc1=="1L5" || stringdloc2=="1l5"){
                    x1 = x1L5;
                    y1 = y1L5;
                }
                else if(stringdloc1=="1L6" || stringdloc2=="1l6"){
                    x1 = x1L6;
                    y1 = y1L6;
                }
                else if(stringdloc1=="1L7" || stringdloc2=="1l7"){
                    x1 = x1L7;
                    y1 = y1L7;
                }
                else if(stringdloc1=="1L8" || stringdloc2=="1l8"){
                    x1 = x1L8;
                    y1 = y1L8;
                }
                else if(stringdloc1=="1L9" || stringdloc2=="1l9"){
                    x1 = x1L9;
                    y1 = y1L9;
                }
                else if(stringdloc1=="1L10" || stringdloc2=="1l10"){
                    x1 = x1L10;
                    y1 = y1L10;
                }
                else if(stringdloc1=="1L11" || stringdloc2=="1l11"){
                    x1 = x1L11;
                    y1 = y1L11;
                }
                else if(stringdloc1=="1L12" || stringdloc2=="1l12"){
                    x1 = x1L12;
                    y1 = y1L12;
                }
                else if(stringdloc1=="1L13" || stringdloc2=="1l13"){
                    x1 = x1L13;
                    y1 = y1L13;
                }
                else if(stringdloc1=="1L14" || stringdloc2=="1l14"){
                    x1 = x1L14;
                    y1 = y1L14;
                }
                else if(stringdloc1=="1L15" || stringdloc2=="1l15"){
                    x1 = x1L15;
                    y1 = y1L15;
                }
                else if(stringdloc1=="1L16" || stringdloc2=="1l16"){
                    x1 = x1L16;
                    y1 = y1L16;
                }
                 else if(stringdloc1=="1I1" || stringdloc2=="1i1"){
                    x1 = x1I1;
                    y1 = y1I1;
                }
                 else if(stringdloc1=="1I2" || stringdloc2=="1i2"){
                    x1 = x1I2;
                    y1 = y1I2;
                }
                 else if(stringdloc1=="1I3" || stringdloc2=="1i3"){
                    x1 = x1I3;
                    y1 = y1I3;
                }
                 else if(stringdloc1=="1I4" || stringdloc2=="1i4"){
                    x1 = x1I4;
                    y1 = y1I4;
                }
                else{
                    x1 =0;
                    y1 = 0;
                }
          }
          else if(ploc==2){
              //south side
                if(stringdloc2=="2S1" || stringdloc2=="2s1"){
                    x1 = x2S1;
                    y1 = y2S1;
                }
                else if(stringdloc2=="2S2" || stringdloc2=="2s2"){
                    x1 = x2S2;
                    y1 = y2S2;
                }
                else if(stringdloc2=="2S3" || stringdloc2=="2s3"){
                    x1 = x2S3;
                    y1 = y2S3;
                }
                else if(stringdloc2=="2S4" || stringdloc2=="2s4"){
                    x1 = x2S4;
                    y1 = y2S4;
                }
                else if(stringdloc2=="2S5" || stringdloc2=="2s5"){
                    x1 = x2S5;
                    y1 = y2S5;
                }
                else if(stringdloc2=="2S6" || stringdloc2=="2s6"){
                    x1 = x2S6;
                    y1 = y2S6;
                }
                else if(stringdloc2=="2N1" || stringdloc2=="2n1"){
                    x1 = x2N1;
                    y1 = y2N1;
                }
                else if(stringdloc2=="2N2" || stringdloc2=="2n2"){
                    x1 = x2N2;
                    y1 = y2N2;
                }
                else if(stringdloc2=="2N3" || stringdloc2=="2n3"){
                    x1 = x2N3;
                    y1 = y2N3;
                }
                else if(stringdloc2=="2N4" || stringdloc2=="2n4"){
                    x1 = x2N4;
                    y1 = y2N4;
                }
                else if(stringdloc2=="2W1" || stringdloc2=="2w1"){
                    x1 = x2W1;
                    y1 = y2W1;
                }
                else if(stringdloc2=="2W2" || stringdloc2=="2w2"){
                    x1 = x2W2;
                    y1 = y2W2;
                }
                else if(stringdloc2=="2W3" || stringdloc2=="2w3"){
                    x1 = x2W3;
                    y1 = y2W3;
                }
                else if(stringdloc2=="2W4" || stringdloc2=="2w4"){
                    x1 = x2W4;
                    y1 = y2W4;
                }
                else if(stringdloc2=="2E1" || stringdloc2=="2e1"){
                    x1 = x2E1;
                    y1 = y2E1;
                }
                 else if(stringdloc2=="2E2" || stringdloc2=="2e2"){
                    x1 = x2E2;
                    y1 = y2E2;
                }
                 else if(stringdloc2=="2E3" || stringdloc2=="2e3"){
                    x1 = x2E3;
                    y1 = y2E3;
                }
                 else if(stringdloc2=="2E4" || stringdloc2=="2e4"){
                    x1 = x2E4;
                    y1 = y2E4;
                }
                 else if(stringdloc2=="2E5" || stringdloc2=="2e5"){
                    x1 = x2E5;
                    y1 = y2E5;
                }
                 else if(stringdloc2=="2E6" || stringdloc2=="2e6"){
                    x1 = x2E6;
                    y1 = y2E6;
                }
                 else if(stringdloc2=="2A1" || stringdloc2=="2a1"){
                    x1 = x2A1;
                    y1 = y2A1;
                }
                else{
                    cout<<"";
                }

          }
          else{
              cout<<"";
          }

 //drop function 
          if(dloc==1){
                if(stringdloc1=="1R1" || stringdloc2=="1r1"){
                    x2 = x1R1;
                    y2 = y1R1;
                }
                else if(stringdloc1=="1R2" || stringdloc2=="1r2"){
                   x2 =  x1R2;
                    y2 =  y1R2;
                }
                else if(stringdloc1=="1R3" || stringdloc2=="1r3"){
                   x2 =  x1R3;
                    y2 =  y1R3;
                }
                else if(stringdloc1=="1R4" || stringdloc2=="1r4"){
                   x2 =  x1R4;
                    y2 =  y1R4;
                }
                else if(stringdloc1=="1R5" || stringdloc2=="1r5"){
                   x2 =  x1R5;
                    y2 =  y1R5;
                }
                else if(stringdloc1=="1R6" || stringdloc2=="1r6"){
                   x2 =  x1R6;
                    y2 =  y1R6;
                }
                else if(stringdloc1=="1R7" || stringdloc2=="1r7"){
                   x2 =  x1R7;
                    y2 =  y1R7;
                }
                else if(stringdloc1=="1R8" || stringdloc2=="1r8"){
                   x2 =  x1R8;
                    y2 =  y1R8;
                }
                else if(stringdloc1=="1R9" || stringdloc2=="1r9"){
                   x2 =  x1R9;
                    y2 =  y1R9;
                }
                else if(stringdloc1=="1R10" || stringdloc2=="1r10"){
                   x2 =  x1R10;
                    y2 =  y1R10;
                }
                else if(stringdloc1=="1R11" || stringdloc2=="1r11"){
                   x2 =  x1R11;
                    y2 =  y1R11;
                }
                else if(stringdloc1=="1R12" || stringdloc2=="1r12"){
                   x2 =  x1R12;
                    y2 =  y1R12;
                }
                else if(stringdloc1=="1R13" || stringdloc2=="1r13"){
                   x2 =  x1R13;
                    y2 =  y1R13;
                }
                else if(stringdloc1=="1R14" || stringdloc2=="1r14"){
                   x2 =  x1R14;
                    y2 =  y1R14;
                }
                else if(stringdloc1=="1R15" || stringdloc2=="1r15"){
                   x2 =  x1R15;
                    y2 =  y1R15;
                }
                else if(stringdloc1=="1R16" || stringdloc2=="1r16"){
                   x2 =  x1R16;
                    y2 =  y1R16;
                }
                else if(stringdloc1=="1R17" || stringdloc2=="1r17"){
                   x2 =  x1R17;
                    y2 =  y1R17;
                }
                else if(stringdloc1=="1R18" || stringdloc2=="1r18"){
                   x2 =  x1R18;
                    y2 =  y1R18;
                }
                else if(stringdloc1=="1R19" || stringdloc2=="1r19"){
                   x2 =  x1R19;
                    y2 =  y1R19;
                }
                else if(stringdloc1=="1R20" || stringdloc2=="1r20"){
                   x2 =  x1R20;
                    y2 =  y1R20;
                }
                else if(stringdloc1=="1R20" || stringdloc2=="1r20"){
                   x2 =  x1R20;
                    y2 =  y1R20;
                }
                else if(stringdloc1=="1R20" || stringdloc2=="1r20"){
                   x2 =  x1R20;
                    y2 =  y1R20;
                } 
                else if(stringdloc1=="1L1" || stringdloc2=="1l1"){
                   x2 =  x1L1;
                    y2 =  y1L1;
                }
                else if(stringdloc1=="1L2" || stringdloc2=="1l2"){
                   x2 =  x1L2;
                    y2 =  y1L2;
                }
                else if(stringdloc1=="1L3" || stringdloc2=="1l3"){
                   x2 =  x1L3;
                    y2 =  y1L3;
                }
                else if(stringdloc1=="1L4" || stringdloc2=="1l4"){
                   x2 =  x1L4;
                    y2 =  y1L4;
                }
                else if(stringdloc1=="1L5" || stringdloc2=="1l5"){
                   x2 =  x1L5;
                    y2 =  y1L5;
                }
                else if(stringdloc1=="1L6" || stringdloc2=="1l6"){
                   x2 =  x1L6;
                    y2 =  y1L6;
                }
                else if(stringdloc1=="1L7" || stringdloc2=="1l7"){
                   x2 =  x1L7;
                    y2 =  y1L7;
                }
                else if(stringdloc1=="1L8" || stringdloc2=="1l8"){
                   x2 =  x1L8;
                    y2 =  y1L8;
                }
                else if(stringdloc1=="1L9" || stringdloc2=="1l9"){
                   x2 =  x1L9;
                    y2 =  y1L9;
                }
                else if(stringdloc1=="1L10" || stringdloc2=="1l10"){
                   x2 =  x1L10;
                    y2 =  y1L10;
                }
                else if(stringdloc1=="1L11" || stringdloc2=="1l11"){
                   x2 =  x1L11;
                    y2 =  y1L11;
                }
                else if(stringdloc1=="1L12" || stringdloc2=="1l12"){
                   x2 =  x1L12;
                    y2 =  y1L12;
                }
                else if(stringdloc1=="1L13" || stringdloc2=="1l13"){
                   x2 =  x1L13;
                    y2 =  y1L13;
                }
                else if(stringdloc1=="1L14" || stringdloc2=="1l14"){
                   x2 =  x1L14;
                    y2 =  y1L14;
                }
                else if(stringdloc1=="1L15" || stringdloc2=="1l15"){
                   x2 =  x1L15;
                    y2 =  y1L15;
                }
                else if(stringdloc1=="1L16" || stringdloc2=="1l16"){
                   x2 =  x1L16;
                    y2 =  y1L16;
                }
                 else if(stringdloc1=="1I1" || stringdloc2=="1i1"){
                   x2 =  x1I1;
                    y2 =  y1I1;
                }
                 else if(stringdloc1=="1I2" || stringdloc2=="1i2"){
                   x2 =  x1I2;
                    y2 =  y1I2;
                }
                 else if(stringdloc1=="1I3" || stringdloc2=="1i3"){
                   x2 =  x1I3;
                    y2 =  y1I3;
                }
                 else if(stringdloc1=="1I4" || stringdloc2=="1i4"){
                   x2 =  x1I4;
                    y2 =  y1I4;
                }
                else{
                   x2 = 0;
                    y2 =  0;
                }
          }
          else if(dloc==2){
                if(stringdloc2=="2S1" || stringdloc2=="2s1"){
                    x2 = x2S1;
                    y2 =  y2S1;
                }
                else if(stringdloc2=="2S2" || stringdloc2=="2s2"){
                    x2 = x2S2;
                    y2 =  y2S2;
                }
                else if(stringdloc2=="2S3" || stringdloc2=="2s3"){
                    x2 = x2S3;
                    y2 =  y2S3;
                }
                else if(stringdloc2=="2S4" || stringdloc2=="2s4"){
                    x2 = x2S4;
                    y2 =  y2S4;
                }
                else if(stringdloc2=="2S5" || stringdloc2=="2s5"){
                    x2 = x2S5;
                    y2 =  y2S5;
                }
                else if(stringdloc2=="2S6" || stringdloc2=="2s6"){
                    x2 = x2S6;
                    y2 =  y2S6;
                }
                else if(stringdloc2=="2N1" || stringdloc2=="2n1"){
                    x2 = x2N1;
                    y2 =  y2N1;
                }
                else if(stringdloc2=="2N2" || stringdloc2=="2n2"){
                    x2 = x2N2;
                    y2 =  y2N2;
                }
                else if(stringdloc2=="2N3" || stringdloc2=="2n3"){
                    x2 = x2N3;
                    y2 =  y2N3;
                }
                else if(stringdloc2=="2N4" || stringdloc2=="2n4"){
                    x2 = x2N4;
                    y2 =  y2N4;
                }
                else if(stringdloc2=="2W1" || stringdloc2=="2w1"){
                    x2 = x2W1;
                    y2 =  y2W1;
                }
                else if(stringdloc2=="2W2" || stringdloc2=="2w2"){
                    x2 = x2W2;
                    y2 =  y2W2;
                }
                else if(stringdloc2=="2W3" || stringdloc2=="2w3"){
                    x2 = x2W3;
                    y2 =  y2W3;
                }
                else if(stringdloc2=="2W4" || stringdloc2=="2w4"){
                    x2 = x2W4;
                    y2 =  y2W4;
                }
                else if(stringdloc2=="2E1" || stringdloc2=="2e1"){
                    x2 = x2E1;
                    y2 =  y2E1;
                }
                 else if(stringdloc2=="2E2" || stringdloc2=="2e2"){
                    x2 = x2E2;
                    y2 =  y2E2;
                }
                 else if(stringdloc2=="2E3" || stringdloc2=="2e3"){
                    x2 = x2E3;
                    y2 =  y2E3;
                }
                 else if(stringdloc2=="2E4" || stringdloc2=="2e4"){
                    x2 = x2E4;
                    y2 =  y2E4;
                }
                 else if(stringdloc2=="2E5" || stringdloc2=="2e5"){
                    x2 = x2E5;
                    y2 =  y2E5;
                }
                 else if(stringdloc2=="2E6" || stringdloc2=="2e6"){
                    x2 = x2E6;
                    y2 =  y2E6;
                }
                 else if(stringdloc2=="2A1" || stringdloc2=="2a1"){
                    x2 = x2A1;
                    y2 =  y2A1;
                }
                else{
                    x2 =0;
                    y2 =0;
                    cout<<"";
                }
          }
          else{
              cout<<"";
          }

        distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2)*1.0);
        // cout<<distance;
    }


    //payment method function
     void paymentmethod(){
        pay = (distance*9)/1000;
        cout<<GRN;
        cout<<"\n\nYou will pay : "<<pay<<"Rs"<<endl;

                cout<<"\n\nUPI PAYMENT : ";
                cout<<"1. GOOGLE PAY \n 2. PHONE PAY \n 3. PAYTM \n 4. AMAZON PAY \n";
                cout<<"Choose an Option : ";
                cin>>paymethod; 
            if(paymethod==1){
                cout<<"\nGOOGLE PAY \n";
                cout<<"SCAN CODE AND PAY.\n";
            }
            else if(paymethod==2){
                cout<<"\nPHONE PAY \n";
                cout<<"SCAN CODE AND PAY.\n";
            }
            else if(paymethod==3){
                cout<<"\nPAYTM PAY \n";
                cout<<"SCAN CODE AND PAY.\n";
            }
            else if(paymethod==4){
                cout<<"\nAMAZON PAY \n";
                cout<<"SCAN CODE AND PAY.\n";
            }
            else{
                cout<<"\nTry Again!\n";
                paymentmethod();
            }
                
        }


};






//service profile class
class Service{
    public:
    void driverprofile(){
        cout<<"\n\n\nDRIVER PROFILE\n";
        cout<<"rating : 4.5 star\n";
        cout<<"status : Exellent\n";
        cout<<"Name : Rajendra kumar \n";
        cout<<"Age : 34 year\n";
    }
    void cardetail(){
        cout<<"\n\nCAR DETAIL";
        cout<<"\nCar-Model : Hundai Amaze \n";
        cout<<"Car-Color : Red \n";
        cout<<"Car-Number : Rj02 sd 3420 \n";
    }
};


//FEEDBACK BY USER
class Feedback{
    public:
    int issuecin;
    string description;
    int star;
    
    
    void submitfeedback(){
  
    cout<<"\n\n\tHOW MUCH YOU LIKE OUR SERVICE \n";
    cout<<"\t 1star \t 2star \t 3star \t 4star \t 5star\n";
    cout<<"Enter Star Choice : ";
    cin>>star;
    }
    
};


//driver code

int main()
{
    
    // string loc;
    // char cabtp;

    //login signup screen
    Login_signup ls;
    ls.lsscreen();

    //homescreen 
    Homescreen hs;
    hs.homescreen();


    //cabbooking 
    Cabbooking cb;
    cb.book_details();
    cb.distancebtwnpoint();
    //payment method
   
    cb.paymentmethod();


    //service profile
    Service s;
    //driver profile
    s.driverprofile();
    s.cardetail();
    

    // destination detail 


    //feedback  
    Feedback fdbk;
    fdbk.submitfeedback();  


    cout<<"\n\tThank You";
    return 0;
}
