class EconomyBankClass : JCLS_ScriptComponentClass {}

class EconomyBank : JCLS_ScriptComponent
{
    map<int, int> accounts = new map<int, int>();

    int GetAllMoney(int divise = 1)
    {
        int sum = 0;

        foreach (int i : accounts.Values)
        {
            sum += i;
        }

        if (divise)
            return sum / divise;
            
        return sum;
    };

};

class EconomyPlayerClass : JCLS_ScriptComponentClass {};

class EconomyPlayer : JCLS_ScriptComponentClass
{
    [RplProp()]
    int money;

    [Rpc(Rpc_MyMethod, parameter1, parameter2)]
    bool PossibleToPay(int amount)
    {
        return (money - amount) > 0;
    };

    bool Pay(int amount)
    {
       money -= amount;
    };
};