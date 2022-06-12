int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> ans;
    int count=0;
    int coins[]={1,2,5,10,20,50,100,500,1000};
    for(int i=8;i>=0;--i){
        while(amount>=coins[i]){
            amount-=coins[i];
            ++count;
        }
    }
    return count;
}
