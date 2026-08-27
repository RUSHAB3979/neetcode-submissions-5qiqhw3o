class Solution {
    public:
        int lastStoneWeight(std::vector<int>& stones) {
                // Initialize max-heap with all stone weights
                        std::priority_queue<int> maxHeap(stones.begin(), stones.end());

                                // Smash the two largest stones until at most one remains
                                        while (maxHeap.size() > 1) {
                                                    int y = maxHeap.top(); // Heaviest stone
                                                                maxHeap.pop();
                                                                            int x = maxHeap.top(); // Second heaviest stone
                                                                                        maxHeap.pop();

                                                                                                    if (y > x) {
                                                                                                                    maxHeap.push(y - x);
                                                                                                                                }
                                                                                                                                        }

                                                                                                                                                return maxHeap.empty() ? 0 : maxHeap.top();
                                                                                                                                                    }
                                                                                                                                                    };