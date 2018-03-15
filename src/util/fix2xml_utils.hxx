#pragma once

//------------------------------------------------
/* Utility class that cascades two key extractor
 * From Boost example
 */
template<class KeyExtractor1,class KeyExtractor2>
struct key_from_key
{
public:
  typedef typename KeyExtractor1::result_type result_type;

  key_from_key(
               const KeyExtractor1& key1_=KeyExtractor1(),
               const KeyExtractor2& key2_=KeyExtractor2()):
    key1(key1_),key2(key2_)
  {}

  template<typename Arg>
  result_type operator()(Arg& arg)const
  {
    return key1(key2(arg));
  }

private:
  KeyExtractor1 key1;
  KeyExtractor2 key2;
};
