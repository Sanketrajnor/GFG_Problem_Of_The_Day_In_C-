class Tree
{
    public ArrayList<Integer> reverseLevelOrder(Node node) 
    {
        Stack<Node> st = new Stack<Node>();
        Queue<Node> q = new LinkedList<Node>();
        ArrayList<Integer> ans = new ArrayList<Integer>();
        if(node!=null){
            q.add(node);
            st.push(node);
        }
        while(q.size() > 0){
            Node temp = q.remove();
            if(temp.right != null){
                q.add(temp.right);
                st.push(temp.right);
            }
            if(temp.left != null){
                q.add(temp.left);
                st.push(temp.left);
            }
        }
        while(st.size() > 0){
            Node temp = st.pop();
            ans.add(temp.data);
        }
        return ans;
    }
}      
