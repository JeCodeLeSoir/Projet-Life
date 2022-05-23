class ShopEntityClass : GenericEntityClass
{
};
class ShopEntity : GenericEntity
{

    void Show(PlayerEntity player)
    {
        // proto external Managed FindComponent(typename typeName);
        /*
            class Managed
            {
            };

            Missing Component Class for 'JobsComponentClass' for Component 'JobsComponent'


            [ComponentEditorProps(category: "GameScripted/Physics", description: "Component that automatically handles switching of between static and dynamic physics of the object", color: "0 0 255 255")]
            class SCR_HybridPhysicsComponentClass: ScriptComponentClass
            {
            };
        */
        JobsComponent jobs = JobsComponent.FindComponentBy(player);
        JobsType type = jobs.WhatIs();
        if (type == JobsType.Police)
        {
        }
    };
};