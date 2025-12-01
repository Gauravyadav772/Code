#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int asteroid : asteroids) {

            bool destroyed = false;

            // Jab tak collision possible hai:
            while (!st.empty() && st.top() > 0 && asteroid < 0) {

                if (abs(st.top()) < abs(asteroid)) {
                    // Stack top chhota hai → woh ud jaayega
                    st.pop();
                    continue;  // current asteroid abhi bhi zinda, aage aur check karo
                } 
                else if (abs(st.top()) == abs(asteroid)) {
                    // Dono same size → dono ud jaayenge
                    st.pop();
                    destroyed = true; // current bhi destroy
                    break;
                } 
                else {
                    // Stack top bada hai → current asteroid ud jaayega
                    destroyed = true;
                    break;
                }
            }

            // Agar current asteroid bach gaya to stack me daalo
            if (!destroyed) {
                st.push(asteroid);
            }
        }

        // Stack se result vector banana (reverse order me nikalke)
        vector<int> result(st.size());
        for (int i = (int)st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};


