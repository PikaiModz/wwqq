class CfgPatches
{
	class tas_hangar
	{
		units[]=
		{
			"Land_tas_hangar_cafe",
			"Land_TAS_hangar_multi"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F"
		};
	};
};
class CfgVehicleClasses
{
	class roldan_hangars
	{
		displayName="[ROYALLIFE] Edificios";
	};
};
class CfgVehicles
{
	class House;
	class House_F;
	class Land_tas_hangar_cafe: House_F
	{
		model="TAS_hangar_multi\tas_hangar_cafe";
		scope=2;
		displayName="Almacen Hangar";
		vehicleClass="roldan_hangars";
		mapSize=0.1;
		author="RoyalRevolution";
		cost=100;
		armor=100000;
		animated=1;
		class AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class fast_func
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			// class Zeroanimation
			// {
			// 	source="user";
			// 	animPeriod=0;
			// 	initPhase=0;
			// };
			// class Door_1_source
			// {
			// 	source="user";
			// 	initPhase=0;
			// 	animPeriod=1;
			// 	sound="RollDoorsSound";
			// };
			// class Door_2_source: Door_1_source
			// {
			// };
			// class Door_3_source: Door_1_source
			// {
			// };
			// class Door_4_source: Door_1_source
			// {
			// };
			// class Door_5_source
			// {
			// 	source="user";
			// 	initPhase=0;
			// 	animPeriod=1;
			// 	sound="GenericDoorsSound";
			// };
			// class Door_6_source: Door_5_source
			// {
			// };
			// class Door_7_source: Door_5_source
			// {
			// };
			// class Door_8_source: Door_5_source
			// {
			// };
		};
		class UserActions
		{
			class OpenSideDoor_1
			{
				
				displayName="Abrir puerta";
				position="Door_1_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_1"" < 0.5";
				statement="this animate [""ani_sideDoor_1"", 3.7]";
			};
			class CloseSideDoor_1
			{
				
				displayName="Cerrar puerta";
				position="Door_1_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_1"" >= 0.5";
				statement="this animate [""ani_sideDoor_1"", 0]";
			};
			class OpenSideDoor_2
			{
				
				displayName="Abrir puerta";
				position="Door_2_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_2"" < 0.5";
				statement="this animate [""ani_sideDoor_2"", 3.7]";
			};
			class CloseSideDoor_2
			{
				
				displayName="Cerrar puerta";
				position="Door_2_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_2"" >= 0.5";
				statement="this animate [""ani_sideDoor_2"", 0]";
			};
			class OpenSideDoor_3
			{
				
				displayName="Abrir puerta";
				position="Door_3_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_3"" < 0.5";
				statement="this animate [""ani_sideDoor_3"", 3.7]";
			};
			class CloseSideDoor_3
			{
				
				displayName="Cerrar puerta";
				position="Door_3_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_3"" >= 0.5";
				statement="this animate [""ani_sideDoor_3"", 0]";
			};
			class OpenSideDoor_4
			{
				
				displayName="Abrir puerta";
				position="Door_4_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_4"" < 0.5";
				statement="this animate [""ani_sideDoor_4"", 3.2]";
			};
			class CloseSideDoor_4
			{
				
				displayName="Cerrar puerta";
				position="Door_4_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_4"" >= 0.5";
				statement="this animate [""ani_sideDoor_4"", 0]";
			};
			class OpenSideDoor_5
			{
				
				displayName="Abrir puerta";
				position="Door_5_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_5"" < 0.5";
				statement="this animate [""ani_sideDoor_5"", 1]";
			};
			class CloseSideDoor_5
			{
				
				displayName="Cerrar puerta";
				position="Door_5_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_5"" >= 0.5";
				statement="this animate [""ani_sideDoor_5"", 0]";
			};
			class OpenSideDoor_6
			{
				
				displayName="Abrir puerta";
				position="Door_6_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_6"" < 0.5";
				statement="this animate [""ani_sideDoor_6"", 1]";
			};
			class CloseSideDoor_6
			{
				
				displayName="Cerrar puerta";
				position="Door_6_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_6"" >= 0.5";
				statement="this animate [""ani_sideDoor_6"", 0]";
			};
			class OpenSideDoor_7
			{
				
				displayName="Abrir puerta";
				position="Door_7_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_7"" < 0.5";
				statement="this animate [""ani_sideDoor_7"", 1]";
			};
			class CloseSideDoor_7
			{
				
				displayName="Cerrar puerta";
				position="Door_7_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_7"" >= 0.5";
				statement="this animate [""ani_sideDoor_7"", 0]";
			};
			class OpenSideDoor_8
			{
				
				displayName="Abrir puerta";
				position="Door_8_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_8"" < 0.5";
				statement="this animate [""ani_sideDoor_8"", 1]";
			};
			class CloseSideDoor_8
			{
				
				displayName="Cerrar puerta";
				position="Door_8_trigger";
				radius=1.5;
				onlyForplayer="true";
				condition="this animationPhase ""ani_sideDoor_8"" >= 0.5";
				statement="this animate [""ani_sideDoor_8"", 0]";
			};
		};
		actionBegin1="CloseSideDoor1";
		actionEnd1="CloseSideDoor1";
		actionBegin2="OpenSideDoor_2";
		actionEnd2="OpenSideDoor_2";
		actionBegin3="OpenDoor_3";
		actionEnd3="OpenDoor_3";
		actionBegin4="OpenDoor_4";
		actionEnd4="OpenDoor_4";
		actionBegin5="OpenDoor_5";
		actionEnd5="OpenDoor_5";
		actionBegin6="OpenDoor_6";
		actionEnd6="OpenDoor_6";
		actionBegin7="OpenDoor_7";
		actionEnd7="OpenDoor_7";
		actionBegin8="OpenDoor_8";
		actionEnd8="OpenDoor_8";
		numberOfDoors=8;
	};
	class Land_TAS_hangar_multi: Land_tas_hangar_cafe
	{
		model="TAS_hangar_multi\tas_hangar_cafe";
		displayName="Almacen Hangar 2";
	};	
};
