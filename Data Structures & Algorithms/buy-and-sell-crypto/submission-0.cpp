class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Edge case: Liste boşsa kâr 0'dır.
        if (prices.empty()) return 0;

        int minPrice = prices[0]; // Şu ana kadar gördüğümüz en düşük fiyat
        int maxProfit = 0;        // Elde edilen en yüksek kâr

        for (int i = 1; i < prices.size(); i++) {
            // 1. Daha düşük bir fiyat bulursak "alım" noktamızı güncelliyoruz.
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } 
            // 2. Mevcut fiyat ile en düşük fiyat arasındaki farkı kontrol ediyoruz.
            else {
                int currentProfit = prices[i] - minPrice;
                if (currentProfit > maxProfit) {
                    maxProfit = currentProfit;
                }
            }
        }

        return maxProfit;
    }
};