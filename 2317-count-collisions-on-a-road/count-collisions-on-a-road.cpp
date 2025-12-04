class Solution {
public:
    int countCollisions(string directions) {
        stack<char>st;
         int collisions=0;
         for(char car:directions){
            if(car=='L'){
                if(!st.empty()&&st.top()=='R'){
                    collisions+=2;
                    st.pop();

                    while(!st.empty()&& st.top()=='R'){
                        collisions++;
                        st.pop();

                    }
                    st.push('S');
                }
                else if(!st.empty()&&st.top()=='S'){
                    collisions++;
                    st.push('S');
                }
                else{
                    st.push('L');
                }
            }
            else if(car=='S'){
                while(!st.empty()&&st.top()=='R'){
                    collisions++;
                    st.pop();
                }
                st.push('S');
            }
            else{
                st.push('R');
            }
         }
             return collisions;
    }
};