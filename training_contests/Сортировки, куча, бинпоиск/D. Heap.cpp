#include <bits/stdc++.h>
using namespace std;
struct Heap{
    int heap[100001];
    int cur_idx = 0;
    void Insert(int x){
        heap[cur_idx] = x; // insert element at the end of the heap
        int idx = cur_idx;
        while(idx > 0){ // while el is not the root
            if(heap[idx] > heap[(idx-1)/2]){ // comparing with parent
                swap(heap[idx], heap[(idx-1)/2]);
                idx = (idx-1)/2; // making el the parent
            }
            else break; // position found
        }
        cur_idx++; // moving end of heap forward
    }
    int getMaxAndDelete(){
        if (cur_idx == 0) return 0; // return 0 if heap is empty
        
        int max = heap[0]; // remembering maximum
        heap[0] = heap[cur_idx-1]; //moving last el to the root
        cur_idx--; // moving end of heap back
        int idx = 0; // index of the el we moved to the root

        while(idx*2+1 < cur_idx){ // while child exists
            int left = idx*2+1; // left child
            int right = idx*2+2; // right child

            // index of the maximum among el and its chikdren
            int max_idx = idx;
            
            // changing value of max_idx depending on values 
            // of el and its children
            if(heap[left] > heap[max_idx]) max_idx = left;
            if(right < cur_idx && heap[right] > heap[max_idx]) max_idx = right;
            if(max_idx == idx) break;
            swap(heap[idx], heap[max_idx]);
            
            idx = max_idx;
        }
        return max;
    }
};

int main(){
    // creating a heap
    Heap h;
    int n; // count of operations
    cin >> n;
    while (n--){
        int op;
        cin >> op;
        // processing queries
        if (op == 0){
            int x;
            cin >> x;
            h.Insert(x);
        }
        else{
            cout << h.getMaxAndDelete() << '\n';
        }
    }
}