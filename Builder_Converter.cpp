#include "Builder_Converter.h"

Builder &Html_Builder::add_child(std::string tag, std::string val) {
  str_ += "<" + tag + ">" + val + R"("<\")" + tag + ">\n";
  return *this;
}

std::string Html_Builder::str() { return str_; }

Builder &Json_Builder::add_child(std::string tag, std::string val) {
  str_ += R"(")" + tag + R"(")" + ":" + val;
  return *this;
}

std::string Json_Builder::str() { return str_; }
