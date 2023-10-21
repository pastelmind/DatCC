#pragma once
#include <SimpleIni.h>
#include <string>
#include "../types.h"
#include "../ini_comments.h"

namespace datcc {

class IniProcessor {
  public:
    /// Sets the current section of the INI file and optionally adds a comment.
    /// @return Error code (0 for no error)
    virtual int setSection(const std::string &section, const std::string &comment) = 0;
    
    //template <class T>
    //int process(T &t, const std::string &key);

    //template <class T>
    //int process(T &t, const std::string &key, CommentFunc commenter);

    //template <class T>
    //int process(T &t, const std::string &key, FlagNames<T> &flagNames);

    //template <class T>
    //int processFlags(T &t, const std::string &key);

  protected:
    std::string currentSection;
    CSimpleIniCaseA ini;
};

} //datcc
