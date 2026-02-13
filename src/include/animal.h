#ifndef animal_h
    #define animal_h

    struct animal {
        char * speech;
        void * (*speak)(struct animal*);
    };

    struct animal * animal_constructor(struct animal * animal, char * speech);

    void * animal_speak(struct animal * animal);

#endif
