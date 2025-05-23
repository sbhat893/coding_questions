/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

int maxProfit(vector<int>& prices) {
    if(prices.size() < 2) {
        return 0;
    }
    int max_profit = 0;
    int current_profit = 0;
    int min_element = prices[0];

    for(int i = 1; i < prices.size(); i++){
        if(prices[i] < min_element) {
            min_element = prices[i];
            current_profit = 0;
        } else {
            current_profit = prices[i] - min_element;
            if(current_profit > max_profit){
                max_profit = current_profit;
            }
        }
    }
    return max_profit;
}