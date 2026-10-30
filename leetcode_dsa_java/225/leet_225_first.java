class MyStack {
    Queue<Integer> r1 = new LinkedList<>();

    public MyStack() {

    }

    public void push(int x) {
        r1.offer(x);
        int n = r1.size();
        for(int i = 0; i<n-1 ;i++){
            r1.offer(r1.peek());
            r1.poll();
        }
    }

    public int pop() {

        return r1.poll();
    }

    public int top() {
        return r1.peek();
    }

    public boolean empty() {
        return r1.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */