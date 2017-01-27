
class NoDefault {
    public:
	NoDefault(int i = 0) { }
};

class C {
    public:
	C(int i = 0) : item(i) { }
    private:
	NoDefault item;
};