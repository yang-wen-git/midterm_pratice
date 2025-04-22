#include <iostream>

void copy(int *into, int *from, int count);

void reverse(int *into, int *from, int count);

int *add_each_element(int *a, int *b, int count);

int main() {
    int into[7];
    int from[7];
    int count = 7;
    from[0] = 33;
    from[1] = 56;
    from[2] = 78;
    from[3] = 107;
    from[4] = 245;
    from[5] = 3534;
    from[6] = 1241;      
    
    copy(into, from, count);

    std::cout << "Before reverse" << std::endl;

    for(int each = 0; each < count; each++){
        std::cout << into[each] << ' ';
    }
    std::cout << std::endl;
    
    std::cout << "After reverse" << std::endl;

    reverse(into, from, count);
    for(int each = 0; each < count; each++){
        std::cout << into[each] << ' ';
    }
    std::cout << std::endl;

    int *p = add_each_element(into, from, count);
    
    std::cout << "Add function: " << std::endl;

    for(int each = 0; each < count; each++) {
        std::cout << p[each] << ' ';
    }
    std::cout << std::endl;

    delete[] p; 
    return 0;

}

void copy(int *into, int *from, int count){
    for (int i = 0; i < count; i++){
        into[i] = from[i];
    }
}

void reverse(int *into, int *from, int count){
   int temp;
   for(int i = 0; i < count / 2; i++){
    temp = from[i];
    into[i] = from[count - i - 1];
    into[count - i - 1] = temp;
   } 
}

int *add_each_element(int *a, int *b, int count){
    int *p = new int[count];
    for(int i = 0; i < count; i++) {
        p[i] = a[i] + b[i];
    }
    return p;
}
