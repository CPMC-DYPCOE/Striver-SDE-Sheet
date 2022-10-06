https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/
int miniCoins(int v){
    vector<int>coins{1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n=coins.size()-1;
    int numberOfCoins=0;
    for(int i=n;i>=0;i--){
        while(v>=coins[i]){
            v-=coins[i];
            numberOfCoins++;
        }
    }
    return numberOfCoins;
}
