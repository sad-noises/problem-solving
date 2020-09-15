class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int sum = 0;
        for(int i = 0; i < ops.size(); i++) {
            if(ops[i] != "+" && ops[i]!= "C" && ops[i]!= "D") {
                string t = ops[i];
                int val = stoi(t);
                cout << val;
                st.push(val);
                sum+=val;
                cout << "s " << sum << endl;
                
            }
            else {
                if(ops[i] == "D") {
                    int val = st.top();
                    cout << ops[i] << " " << 2*val << endl;
                    sum+= 2*val;
                    cout << "sumd " << sum << endl;
                    //st.pop();
                    st.push(2*val);
                }
                else if(ops[i] == "C") {
                    int val = st.top();
                    cout << "sumc " << sum << endl;
                    cout << ops[i] << " " << val << endl;
                    sum-=val;
                    cout << "sumc " << sum << endl;
                    st.pop();
                }
                else if(ops[i] == "+") {
                    int val1 = st.top();
                    st.pop();
                    int val2 = st.top();
                    st.push(val1);
                    cout<< ops[i] << " " <<val1 << " " << val2 << endl;
                    cout << "sum+ " << sum << endl;
                    sum += val1+val2;
                    st.push(val1+val2);
                }
            }
        }
        
        return sum;
    }
};
