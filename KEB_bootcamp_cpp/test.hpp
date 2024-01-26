class RandomNumber{
    private:
        int low;
        int high;
        int value;
    public:
        RandomNumber(int low, int high);
        ~RandomNumber();
        RandomNumber(const RandomNumber& random) = delete; //합성 복사생성자 막기
        void print() const;
};

