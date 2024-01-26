class Account{
    private:
        long accNumber;
        double balance;
        static int base;

    public:
        Account(double bal);
        ~Account();
        void checkBalance() const;
        void deposit(double amount);
        void withdraw(double amount);
};