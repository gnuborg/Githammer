#pragma once

#include "BWAPI.h"
#include <cassert>

namespace Config
{
    namespace ConfigFile
    {
        extern bool ConfigFileFound;
        extern bool ConfigFileParsed;
        extern std::string ConfigFileLocation;
    }

    namespace Modules
    {
        extern bool UsingStrategyIO;			
    }
    
    namespace BotInfo
    {
        extern std::string BotName;
        extern std::string Authors;
        extern bool PrintInfoOnStart;
    }

    namespace Strategy
    {
        extern std::string StrategyName;
        extern std::string ReadDir;
        extern std::string WriteDir;
        extern bool ScoutHarassEnemy;
        extern bool UseEnemySpecificStrategy;
        extern bool FoundEnemySpecificStrategy;
    }

    namespace BWAPIOptions
    {
        extern int SetLocalSpeed;
        extern int SetFrameSkip;
        extern bool EnableUserInput;
        extern bool EnableCompleteMapInformation;
    }

    namespace Tournament
    {
        extern int GameEndFrame;	
    }

    namespace Debug
    {
        extern bool DrawGameInfo;
		extern bool DrawStrategySketch;
		extern bool DrawBuildOrderSearchInfo;
        extern bool DrawUnitHealthBars;
        extern bool DrawResourceInfo;
        extern bool DrawProductionInfo;
        extern bool DrawScoutInfo;
        extern bool DrawWorkerInfo;
        extern bool DrawModuleTimers;
        extern bool DrawReservedBuildingTiles;
        extern bool DrawCombatSimulationInfo;
        extern bool DrawBuildingInfo;
        extern bool DrawMouseCursorInfo;
        extern bool DrawEnemyUnitInfo;
        extern bool DrawBWTAInfo;
        extern bool DrawMapGrid;
		extern bool DrawBaseInfo;
		extern bool DrawStrategyBossInfo;
		extern bool DrawUnitTargetInfo;
        extern bool DrawSquadInfo;
        extern bool DrawBOSSStateInfo;

        extern std::string ErrorLogFilename;
        extern bool LogAssertToErrorFile;

        extern BWAPI::Color ColorLineTarget;
        extern BWAPI::Color ColorLineMineral;
        extern BWAPI::Color ColorUnitNearEnemy;
        extern BWAPI::Color ColorUnitNotNearEnemy;
    }

    namespace Micro
    {
        extern bool UseSparcraftSimulation;
        extern bool KiteWithRangedUnits;
        extern std::set<BWAPI::UnitType> KiteLongerRangedUnits;
        extern bool WorkersDefendRush;
        extern int RetreatMeleeUnitShields;
        extern int RetreatMeleeUnitHP;
        extern int CombatRegroupRadius;         
        extern int UnitNearEnemyRadius;         
		extern int ScoutDefenseRadius;
	}
    
    namespace Macro
    {
        extern int BOSSFrameLimit;
        extern int WorkersPerRefinery;
		extern double WorkersPerPatch;
        extern int BuildingSpacing;
        extern int PylonSpacing;
    }

    namespace Tools
    {
        extern int MAP_GRID_SIZE;
    }
}