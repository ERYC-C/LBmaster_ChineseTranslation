class CfgPatches
{
	class LBmaster_BetterCodelock_CN
	{
		requiredAddons[] = { "LBmaster_BetterCodelock" };
	};
};

class CfgAddons
{
    class PreloadAddons
    {
        class LBmaster_BetterCodelock_CN
        {
            list[]={};
        };
    };
};

class CfgMods
{
    class LBmaster_BetterCodelock_CN
    {
        name="";
        dir="LBmaster_BetterCodelock_CN";
        author="ERYC";
		type = "mod";
        defines[] = {};
		dependencies[] =
		{
			"Game", "World", "Mission"
		};

        class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class widgetStyles
			{
				files[]= {};
			};

			class engineScriptModule 
			{ 
				files[] = { "LBmaster_BetterCodelock_CN/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "LBmaster_BetterCodelock_CN/Scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "LBmaster_BetterCodelock_CN/Scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "LBmaster_BetterCodelock_CN/Scripts/5_Mission" };
			};
		};
    };
};