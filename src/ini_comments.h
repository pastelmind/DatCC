#pragma once
#include <string>

namespace datcc {

typedef std::string (*CommentFunc)(int, size_t);

std::string makeCommentPadding(const char *flagStr, size_t keyStrSize);

//Value describes data from text files
std::string makeUnitComment   (int unitId,    size_t keyStrSize);
std::string makeWeaponComment (int weaponId,  size_t keyStrSize);
std::string makeFlingyComment (int unitId,    size_t keyStrSize);
std::string makeSpriteComment (int spriteId,  size_t keyStrSize);
std::string makeImageComment  (int imageId,   size_t keyStrSize);
std::string makeUpgradeComment(int upgradeId, size_t keyStrSize);
std::string makeTechComment   (int techId,    size_t keyStrSize);
std::string makeOrderComment  (int orderId,   size_t keyStrSize);
std::string makeIconNameComment(int iconId,   size_t keyStrSize);

//Value is an index of a TBL file
std::string makeStatTxtTblComment (int stringIndex, size_t keyStrSize);
std::string makeImagesTblComment  (int stringIndex, size_t keyStrSize);
std::string makeSfxdataTblComment (int stringIndex, size_t keyStrSize);

//Value has other meanings
std::string makeTimeComment     (int time,    size_t keyStrSize);
std::string makeHpAmountComment (int hp,      size_t keyStrSize);
std::string makeSpeedComment    (int speed,   size_t keyStrSize);
std::string makeSupplyComment   (int supply,  size_t keyStrSize);
std::string makeWeaponRangeComment(int weaponRange, size_t keyStrSize);
std::string makeAngleComment    (int brad,    size_t keyStrSize);

std::string makeDrawingFunctionComment(int id, size_t keyStrSize);
std::string makeRemappingComment      (int id, size_t keyStrSize);

std::string makeDamageTypeComment(int id, size_t keyStrSize);
std::string makeWeaponFlingyActionComment(int id, size_t keyStrSize);
std::string makeWeaponEffectComment(int id, size_t keyStrSize);

std::string makeFlingyControlTypeComment(int id, size_t keyStrSize);
std::string makeIscriptAnimComment(int id, size_t keyStrSize);

} //datcc
