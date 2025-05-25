'''
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
'''

def maxProfit(prices):
    if len(prices) < 2:
        return 0
    current_profit = 0
    max_profit = 0
    min_element = prices[0]
    for i in range(1, len(prices)):
        if prices[i] < min_element:
            min_element = prices[i]
            current_profit = 0
        else:
            current_profit = prices[i] - min_element
            if current_profit > max_profit:
                max_profit = current_profit
    return max_profit