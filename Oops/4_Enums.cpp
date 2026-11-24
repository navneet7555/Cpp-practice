// enums= A user-defined data type that consists of paired named-integer
    //   constants.
    //   Great if have a set of potential options.
#include<iostream>

    // enum Example{
    //     A,B,C
    // };

    // int a=0;
    // int b=1;
    // int c=2;

    // int main(){
    //     // Example value= C;
    //     std::cout<<C<<"\n";
    //     std::cout<<B<<"\n";
    //     std::cout<<A<<"\n";

    // }

// enum day{Sunday=0, Monday=1, Tuesday=2, Wednesday=3,
//             Thursday=4, Friday=5, Saturday=6};

// int main(){
//     day today=Sunday;
//     // std::cout<<"Enter the name of week day: ";
//     // std::cin >> today;
//     // Use (static_cast<day>(today));


//     switch(today){
//         case Sunday: std::cout<<"It's Sunday!\n";
//         break;

//         case Monday: std::cout<<"It's Monday!\n";
//         break;

//         case Tuesday: std::cout<<"It's Tuesday!\n";
//         break;

//         case Wednesday: std::cout<<"It's Wednesday!\n";
//         break;

//         case Thursday: std::cout<<"It's Thursday!\n";
//         break;

//         case Friday: std::cout<<"It's Friday!\n";
//         break;

//         case Saturday: std::cout<<"It's Saturday!\n";
//         break;

//         default:
//         std::cout<<"You Entered Wrong! Try again\n";
//         return 0;

//     }   
// }

class Log{
public:
    enum Level{
        Error=0, Warning, Info
    };

private:
    Level m_logLevel= Info;

public:
    void SetLevel(Level level){
        m_logLevel= level;
    }

    void error(){
        if(m_logLevel<=Error){
            std::cout<< "[Error]: \n";
        }
    }

    void warning(){
        if(m_logLevel<=Warning){
            std::cout<<"[Warning]: \n";
        }
    }

    void info(){
        if(m_logLevel<=Info){
            std::cout<<"[Info]: \n";
        }
    }
};

int main(){
    Log log;
    log.SetLevel(Log::Error);
    log.error();
    log.warning();
    log.info();
}