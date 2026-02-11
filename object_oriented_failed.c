struct person {

    int age;

    void (* setter_age)(int);


};


void setter_age(int age) {



}


int main() {

    struct person person;

    person.setter_age = setter_age;

    person.setter_age(1);


}
