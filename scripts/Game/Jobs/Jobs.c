/*

Fondation
 - JobsManager
    - Pole-Emploi
    - EntrepriseManager
 - ShopManager
    - Shop
    - CreateShop
 - EconomyManager
    - BankManager
 - HoursManager
 - CharacterCreateManager
 - CharacterManager
      - Save Position
      - WeaponManager
      - ClothingManager
      
 - Car Manager
   - Save Position
 - SimulationManager
 - FarmManager
 - PlacementObjectManager
 - ClearManager

 - AdminManager
 - EditorInGame
 - ComunicationManager
   - Telephone

 - GameModeLife


 - GovernmentManager

 == Gestion des données ==
    RestApi ?
    Dbd ?
    Save file ?

 == autre idée ==
    - Train
    - Tour de control Air


*/

[ComponentEditorProps(category: "LifeMod/Jobs", description: "Jobs", color: "0 0 255 255")]
class JobsComponentClass : JCLS_ScriptComponentClass {}
class JobsComponent : JCLS_ScriptComponent
{
    JobsType j_type;

    JobsType WhatIs()
    {
        return j_type;
    };

    void SetType(JobsType type)
    {
        j_type = type;
    };

    string GetName(){
        return j_type.ToString();
    }
};