stack<pair<Node*, int>>st;
    vector<int>pre,in,post;
    st.push({root, 0});
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
                if(it.first->left !=NULL)
                    st.push({it.first->left,1})
          }
         else if(it.second==2){
             in.push_back(it.first->val);
             it.second++;
             st.push(it);
             if(it.first->right!=NULL)
                 st.push({it.first->right,2})
         }
        else{
            post.push_back(it.first->val);
        }
