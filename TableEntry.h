#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

template <typename V> 
class TableEntry {
    public:
  std::string key;
  V value;

  TableEntry(std::string key, V value)
  {
    this->key = key;
    this->value = value;
  }
  //Constr
  TableEntry(std::string key)
  {
    this->key = key;
  } //Constr solo con 
  TableEntry()
  {
    key = "";
    value = NULL;
  } //Constr Vacio

  friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2)
    {
      if(te1.key == te2.key)
	return true;
      return false;

    }

  friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2)
  {
    if(te1.key != te2.key)
      return true;
    return false;


  }

  friend std::ostream& operator<<(std::ostream &out, const TableEntry<V> &te)
  {
    out<<te.key<<"->"<<te.value<<"\n";
    return out;
  }

  
  
    
};

#endif
