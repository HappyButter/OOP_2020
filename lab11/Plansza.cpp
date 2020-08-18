#include "Plansza.h"
#include <algorithm>


void Plansza::dodaj(std::shared_ptr<Postac> x)
{
    if (x->posX() < m_sizeX && x->posY() < m_sizeY)
    {
        std::cout << x->opis() << std::endl;
        m_people.push_back(x);
    }
    else 
    {
        std::cout << "Postac: " << x->opis() << " jest poza plansza!\n";
        x.reset();
    }
}

void Plansza::dodaj(Goomba* x)
{
    std::cout << x->opis() << std::endl;
    std::shared_ptr<Goomba> newGoomba(x);
    m_people.push_back(newGoomba);
}

void Plansza::listaPostaci()
{
    for(const auto& x : m_people)
        std::cout << x->opis() << std::endl;
}

int Plansza::policzGoomby()
{
    int countGoombas = 0;
    for(const auto& x : m_people)
        if(typeid(*x) == typeid(Goomba))
            countGoombas++;
        
    return countGoombas; 
}

void Plansza::zabijGoomby()
{
    std::vector<std::shared_ptr<Postac>> newList{};
    for(auto& x : m_people)
        if(typeid(*x) != typeid(Goomba))
            newList.push_back(x);
            
    m_people = newList;
}    

std::vector<std::shared_ptr<Postac>> Plansza::postacie()
{
    return m_people;
}

std::vector<std::string> Plansza::przygotujLegende() const 
{
    std::vector<std::string> bohaterowie{};
    bohaterowie.push_back("Bohaterowie:");
    

    for(const auto& x : m_people)
    {
        if(std::find_if(bohaterowie.begin(), bohaterowie.end(), containsPerson(x->imie())) == bohaterowie.end())
        {
            if (dynamic_cast<Bohater*>(x.get()) != nullptr )
                bohaterowie.push_back(x->imie());
        }
    }
    bohaterowie.push_back("");
    bohaterowie.push_back("Wrogowie:");
    
    for(const auto& x : m_people)
    {
        if(std::find_if(bohaterowie.begin(), bohaterowie.end(), containsPerson(x->imie())) == bohaterowie.end())
        {
            if (dynamic_cast<Wrog*>(x.get()) != nullptr )
                bohaterowie.push_back(x->imie());
        }
    }
    
    
    return bohaterowie;    
}

bool compare(std::shared_ptr<Postac> x, std::shared_ptr<Postac> y)
{
    return x->posX() > y->posX();
}

void Plansza::sortuj(bool flag)
{
    std::sort(m_people.begin(), m_people.end(), compare);
}
