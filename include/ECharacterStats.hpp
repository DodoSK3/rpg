#ifndef ECHARACTERSTATS_HPP
#define ECHARACTERSTATS_HPP

#include <map>

using namespace std;

enum class ECharacterStats : int
{
    NAME,
    HP,
    DMG,
};

static inline map<ECharacterStats, string> StatToStringMap
{ 
	{ECharacterStats::NAME,	"NAME"}, 
	{ECharacterStats::HP,	"HP"}, 
	{ECharacterStats::DMG,	"DMG"}
};

static inline string ToString(const ECharacterStats& stat)
{
	switch (stat)
	{
		case ECharacterStats::NAME: return "NAME";
		case ECharacterStats::HP:	return "HP";
		case ECharacterStats::DMG:	return "DMG";
	}

	return "NO DEFINED!";
}

#endif // CHARACTERSTATS
