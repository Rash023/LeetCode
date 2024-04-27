class Solution {
public:
    int findRotateSteps(string ring, string key) {
        std::array<std::vector<int>, 26> charToPos;
        int ringLen = ring.length();

        for (auto i = 0; i != ring.length(); ++i) {
            charToPos[ring[i] - 'a'].push_back(i);
        }

        // flattened {index, cost} pairs
        std::vector<int> curLetterCosts, nextLetterCosts;

        curLetterCosts.push_back(0);
        curLetterCosts.push_back(0);

        for (auto nextC: key) {
            const auto& nextCharPositions{charToPos[nextC - 'a']};
            nextLetterCosts.clear();

            for (auto nextPos: nextCharPositions) {
                nextLetterCosts.push_back(nextPos);
                nextLetterCosts.push_back(std::numeric_limits<int>::max());

                auto& minCost = nextLetterCosts.back();

                for (auto i = 0; i != curLetterCosts.size(); i += 2) {
                    auto curPos{curLetterCosts[i]};
                    auto curCost{curLetterCosts[i+1]};

                    auto diff = std::abs(curPos - nextPos);
                    diff = std::min(diff, ringLen - diff);

                    minCost = std::min(minCost, diff + curCost);
                }

                ++minCost;
            }

            std::swap(curLetterCosts, nextLetterCosts);
        }

        auto res{std::numeric_limits<int>::max()};

        for (auto i = 0; i != curLetterCosts.size(); i += 2) {
            res = std::min(res, curLetterCosts[i+1]);
        }

        return res;
    }
};