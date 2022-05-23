class JCLS_ScriptComponentClass : ScriptComponentClass
{
};
class JCLS_ScriptComponent : ScriptComponent
{
    static JobsComponent FindComponentBy(IEntity _ientity)
    {
        return JobsComponent.Cast(_ientity.FindComponent(JobsComponent));
    }
}

class JCLS_GenericEntityClass : GenericEntityClass
{
};
class JCLS_GenericEntity : GenericEntity
{
    static JCLS_GenericEntity FindComponentBy(IEntity _ientity)
    {
        return JCLS_GenericEntity.Cast(_ientity.FindComponent(JCLS_GenericEntity));
    }
}