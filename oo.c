#include <stdlib.h> /*malloc*/
#include <stdio.h>


struct class {

    int data;

    void (* setter)(struct class *, int);

    void (* function)();

};


void setter(struct class * object, int data) {

    object->data = data;

    (* object).data = data;

}


void function() {

    printf("Hello !\n");

}


struct class * constructor() {

    struct class * object = (struct class *)malloc(sizeof * object);

    object->setter = setter;

    (* object).setter = setter;

    object->function = function;

    return object;

}


struct class * new_object() {
    return constructor();
}


int main() {

    struct class * object1 = constructor();

    /*
    Dog myDog = new Dog();
    */
    struct class * object2 = new_object();

    object1->setter(object1, 1);

    setter(object1, 2);

    object1->data = 3; 

    object1->function();

    function();

    free(object1);
    free(object2);

    return 0;

}











