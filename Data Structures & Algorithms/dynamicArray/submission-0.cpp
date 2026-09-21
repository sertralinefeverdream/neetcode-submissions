#include <array>
#include <assert.h>

class DynamicArray {
    private:
        int* arr_ { nullptr };
        int size_ {};
        int capacity_ {};

    public:

        DynamicArray(int capacity)
            : capacity_{capacity} {
            assert(capacity > 0);
            arr_ = new int[capacity_];
        }

        int get(int i) { 
            return arr_[i];
        }

        void set(int i, int n) {
            arr_[i] = n;
        }

        void pushback(int n) { 
            if (size_ == capacity_) { 
                resize();
            }
            
            set(size_, n);
            size_++;
        }

        int popback() {
            if (size_ > 0) {
                size_--;
            }
            return arr_[size_];
        }

        void resize() {
            int new_capacity {capacity_ * 2};
            int* arr_new {new int[new_capacity]};
            
            for (auto i {0zu}; i < size_; ++i) {
                arr_new[i] = get(i);
            }
            
            delete[] arr_;
            arr_ = arr_new;
            capacity_ = new_capacity;
        }

        int getSize() {
            return size_;
        }

        int getCapacity() {
            return capacity_;
        }
};
