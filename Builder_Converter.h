#include <string>

class Builder {
public:
	virtual Builder& add_child(std::string tag, std::string val) = 0;
};
                            

class Html_Builder : public Builder {
public:
	Builder& add_child(std::string tag, std::string val) override;
	std::string str();
private:
	std::string str_;
}; 


class Json_Builder : public Builder {
public:
	Builder&  add_child(std::string tag, std::string val) override;
	std::string str();
private:
	std::string str_;
};
