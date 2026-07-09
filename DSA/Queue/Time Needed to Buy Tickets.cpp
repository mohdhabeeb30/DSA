class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int time=0;
        int n=tickets.size();
        for(int i=0;i<n;i++){
            q.push(i);
        }
        while(tickets[k]!=0){
            int curr_front=q.front();// store karana hoga nhi toh pop krte hi 1st element hamesha ke liye gayab ho jayega 
            tickets[curr_front]--;
             q.pop();
             time++;
            if(tickets[curr_front]>0){
                q.push(curr_front);

            }

        }
        return time;
        
    }
};