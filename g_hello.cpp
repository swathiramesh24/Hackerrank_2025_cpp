//method 1


class Solution {
  public:
    void helloWorld() {

        cout << "Hello World";
    }
};

//method 2


class Solution {
  public:
    void helloWorld() {

        char hello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
        cout << hello;
    }
};
