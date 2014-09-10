// Sanctum 2 random loadout generator

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
	char *CharacterList[] = { "Skye Autumn", "Sweet Autumn", "Simo", "Haigen Hawkins", "Tsygan" };
	
	char *WeaponList[] = { "Assault Rifle", "Rex", "Sniper Rifle", "Shotgun", "Ballista", "Voltaic Hand Cannon", "Battle Rifle", "Tesla Rifle", "Sub Mini-Gun", "Gatling Laser", "Circle Saw", "Nailgun", "Drone Launcher", "Grenade Launcher", "Plasma Rifle", "Smatter Band" };
	
	char *TowerList[] = { "Cannon", "Gatling", "Lightning", "AR Mine Dispenser", "ACP", "Kairos", "Drone", "Violator", "Rocket", "Amp Spire", "Scatter Laser", "Focus", "Slowfield Dispenser", "Range Spire", "Makeshift Cannon", "Rupture Mine Dispenser", "Friendship Laser", "Mind Control Spire", "Anti Air", "Orbital Strike Relay" };
	
	char *PerkList[] = { "Hollowpoint Rounds", "Static Discharge", "Resilient Core", "Unstable Core", "Marksman", "Hip Fire", "Corpse Explosion", "Phoenix", "Rymdskor", "Plumber Shoes", "Overcharge", "Against All Odds", "Adrenaline Rush", "Tactical Juxtapositin", "Shocking Revelation", "Exposure Rounds", "Slowing Presence", "Engineer", "Penetrator Rounds", "Slowing Rounds", "Comsuming Rage", "Core-Tower Synergy", "Long Range Specialization", "Synergy", "Core Guardian", "G-2 Companion", "Trickster", "Tinkerer", "Electrical Outburst", "Fast Hands", "Spiked Armor", "Explosive Exchange", "Thor Module", "Long Range Superiority", "Parthian Tactics", "Desperate Measures", "Bloodletter", "Collateral Damage", "Zeus Module", "Frightening Visage", "Headache", "Reinforcements", "Best Friends Forever", "Tech Junkie", "Armor Shredder", "Roboticist", "Overkill", "Hydra Blood", "Steady Aim", "Spray N Pray", "Biological Warfare", "Upper Class", "Warming Up" };
	
	srand(time(NULL));
	
	int index_Character = rand() % 5;
	int index_Weapon1 	= rand() % 16;
	int index_Weapon2 	= rand() % 16;
	int index_Tower1 	= rand() % 20;
	int index_Tower2 	= rand() % 20;
	int index_Tower3 	= rand() % 20;
	int index_Tower4 	= rand() % 20;
	int index_Perk1 	= rand() % 53;
	int index_Perk2 	= rand() % 53;
	int index_Perk3 	= rand() % 53;

	printf("Character: %s\n", CharacterList[index_Character]);
	printf("Primary Weapon: %s\n", WeaponList[index_Weapon1]);
	printf("Secondary Weapon: %s\n", WeaponList[index_Weapon2]);

	printf("Towers: %s", TowerList[index_Tower1]);
	printf(", %s", TowerList[index_Tower2]);
	printf(", %s", TowerList[index_Tower3]);
	printf(", %s\n", TowerList[index_Tower4]);

	printf("Perks: %s", PerkList[index_Perk1]);
	printf(", %s", PerkList[index_Perk2]);
	printf(", %s\n", PerkList[index_Perk3]);

	return 0;
}
