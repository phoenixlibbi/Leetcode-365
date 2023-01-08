class Solution {
    const double eps = 1e-5;
    bool CmpDoubles(double lhs, double rhs) const {
        return std::fabs(lhs - rhs) < eps;
    }
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = static_cast<int>(points.size());
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            std::vector<double> tan_k;
            int inf_cnt = 0;
            const auto& main_point = points[i];
            for (int j = i + 1; j < n; ++j) {
                const auto& point = points[j];
                auto dy = static_cast<double>(main_point[1]) - point[1];
                auto dx = static_cast<double>(main_point[0]) - point[0];
                if (CmpDoubles(dx, 0)) {
                    ++inf_cnt;
                } else {
                    tan_k.push_back(dy / dx);
                }
            }
            ans = std::max(ans, inf_cnt);
            if (tan_k.empty()) {
                continue;
            }
            std::sort(tan_k.begin(), tan_k.end());
            double prev_k = tan_k[0];
            int cnt = 0;
            for (auto k : tan_k) {
                if (CmpDoubles(prev_k, k)) {
                    ++cnt;
                } else {
                    cnt = 1;
                }
                ans = std::max(ans, cnt);
                prev_k = k;
            }
        }
        return ans + 1;
    }
};


