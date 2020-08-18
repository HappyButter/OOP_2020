#pragma once
#include "Postacie.h"
#include <iostream>
#include <vector>
#include <memory>


class Plansza
{
public:
    void dodaj(std::shared_ptr<Postac>);
    void dodaj(Goomba*);
    void listaPostaci();
    int policzGoomby();
    void zabijGoomby();
    std::vector<std::shared_ptr<Postac>> postacie();
    std::vector<std::string> przygotujLegende() const ;
    void sortuj(bool);
    
private:
    std::vector<std::shared_ptr<Postac>> m_people{};
    int m_sizeX = 10;
    int m_sizeY = 10;
};

struct containsPerson
{
    containsPerson(std::string name) : m_name(name) 
    {}
    bool operator()(std::string x)
    {   return m_name.compare(x) == 0; }
    
    std::string m_name;
};