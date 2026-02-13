#include "include/animal.h"


void * animal_speak(struct animal *) {


}


struct animal * animal_constructor(struct animal * animal, char * speech) {

    animal->speech = speech;

    animal->speak  = animal_speak;

}


int main() {

    struct animal * animal;

    return 0;

}
