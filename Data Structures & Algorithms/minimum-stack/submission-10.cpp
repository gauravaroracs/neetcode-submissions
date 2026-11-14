class MinStack {
   private:
    vector<int> temp;
    vector<int> min_so_far;
    int min_element;

   public:
    MinStack() : temp(), min_element(INT_MAX) {}

    void push(int val) {
        if (val <= min_element) {
            min_element = val;
        }
        min_so_far.push_back(min_element);

        temp.push_back(val);
    }

    void pop() {
        if (temp.size() > 0 && min_so_far.size() > 0) {
            temp.pop_back();
            min_so_far.pop_back();
            if (min_so_far.size() > 0) {
                min_element = min_so_far.back();
            } else {
                min_element = INT_MAX;
            };
        } else {
            return;
        }
    }

    int top() { return temp.back(); }

    int getMin() { return min_so_far.back(); }
};
