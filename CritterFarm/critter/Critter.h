#include <string>
using namespace std;

class Critter
{
    friend void Peek(const Critter& critter);
    friend ostream& operator<<(ostream& os, const Critter& critter);
    private:
        string mName;
    public:
        Critter(const string& aName = "");
        string GetName() const;

};

Critter::Critter(const string& aName):mName(aName)
{}

inline string Critter::GetName() const
{
    return mName;
}