#include <iostream>

using namespace std;

class Animal
{
  public:
    virtual void make_sound () const = 0;
};

void poke (Animal const & animal)
{ animal.make_sound(); }

class Cow : public Animal
{
  public:
    virtual void make_sound () const override
    { cout << "moo" << endl; }
};

class FullCow : public Cow
{
  public:
    void make_sound () const override
    { cout << "Ooof - I ate too much" << endl; }
};

// New Classes added from derived Animal
class HalfFullCow : public Animal
{
  public:
    virtual void make_sound() const override
    { cout << "I'm still hungry" << endl; }
};

// New Classes added from derived Animal
class NotFullCow: public Animal
{
  public:
    virtual void make_sound() const override
    { cout << "I need food" << endl;}
};

int main ()
{
  Cow c;
  FullCow fc;
  HalfFullCow hfc;
  NotFullCow Nfc;

  poke(c);
  poke(fc);
  poke(hfc);
  poke(Nfc);

  return 0;
}

