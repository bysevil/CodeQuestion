#include<iostream>
#include<list>
#include<stack>
#include<vector>
#include<string>

int main() {
    int n, m, s;
    std::cin >> n >> m >> s;

    std::vector<std::list<char>> p;
    p.resize(m);

    std::string str;
    int i = 0;
    while (i < n) {
        std::cin >> str;
        for (const auto& e : str) {
            p[i + 1].push_back(e);
        }
        i++;
    }

    std::stack<char> st;
    std::list<char> ans;
    while (std::cin >> i) {
        if (i == -1) break;
        if (i) {
            if (st.size() >= s) {
                //std::cout << "st.pop" << st.top() << std::endl;
                ans.push_back(st.top());
                st.pop();
            }
            //std::cout << "st.push: " << i << ' ' << p[i].front() << std::endl;
            st.push(p[i].front());
            p[i].pop_front();
        }
        else {
            ans.push_back(st.top());
            //std::cout << "st.pop: "  << st.top() << std::endl;
            st.pop();
        }
        //std::cout << "Ans: ";
        for (const auto& e : ans) {
            std::cout << e;
        }
        std::cout << std::endl;
    }
    return 0;
}