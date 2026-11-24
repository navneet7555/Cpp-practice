#include<iostream>
class Log{
    public:
    const int LogLevelError=0;
    const int LogLevelwarning=1;
    const int LogLevelInfo=2;

    private:
    int m_LogLevel= LogLevelError;
    
    public:
    void setLevel(int level){
        m_LogLevel = level;
    }

    void error(const char *message){
        if(m_LogLevel>=LogLevelError){
            std::cout<<"[Error]: "<<message<<"\n";
        }
    }

    void warn(const char *message){
        if(m_LogLevel>=LogLevelwarning){
            std::cout<<"[Warning]: "<<message<<"\n";
        }

    }

    void info(const char *message){
        if(m_LogLevel>=LogLevelInfo){
            std::cout<<"[INFO]: "<<message<<"\n";
        }

    }

};

int main(){
    Log log;
    log.setLevel(log.LogLevelInfo);
    log.warn("Hello!");
    log.info("Hello!");
    log.error("Hello!");

}