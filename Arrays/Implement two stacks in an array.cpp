//Question Link -   https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1

// Required Function

void twoStacks :: push1(int v) {
    if (top1 + 1 < top2) arr[++top1] = v;
}

void twoStacks ::push2(int v) {
    if (top2 - 1 > top1) arr[--top2] = v;
}

int twoStacks ::pop1() {
    if (top1 >= 0) return arr[top1--];
    return -1;
}

int twoStacks :: pop2() {
    if (top2 < size) return arr[top2++];
    return -1;
}