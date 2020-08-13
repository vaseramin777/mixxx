#pragma once

#include "preferences/usersettings.h"
#include "skin/legacyskinparser.h"
#include "skin/skincontext.h"

class ImgSource;

class ColorSchemeParser {
  public:
    static void setupLegacyColorSchemes(
            QDomElement docElem,
            UserSettingsPointer pConfig,
            QString* pStyle,
            SkinContext* pContext);
  private:
    static ImgSource* parseFilters(QDomNode filter);
    ColorSchemeParser() { }
    ~ColorSchemeParser() { }
};
