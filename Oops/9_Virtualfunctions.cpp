#include<iostream>
#include<string>

class Entity{
    public:
    virtual std::string GetName()const{
        return "Entity";
    }
};

class Player: public Entity{
    private:
    std::string m_name;
    public:
    // Player(const std::string& name): m_name(name) {}
    Player(const std::string& nam){
        m_name= nam;
    }

    std::string GetName() const override{
        return m_name;
    };
};
int main(){
    Entity *e = new Entity();
    std::cout<<e->GetName() <<std::endl;

    Player *p= new Player("Cherno");
    std::cout<< p->GetName()<<std::endl;

    Entity *s= new Player("Abcxd");
    std::cout<< s->GetName()<<std::endl;
}