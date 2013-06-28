TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += block.cpp \
  config.cpp \
  graphics.cpp \
  log.cpp \
  main.cpp \
  player.cpp \
  vector2D.cpp \
  zombie.cpp


unix: LIBS += -L$$PWD/ -lIrrlicht

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix: PRE_TARGETDEPS += $$PWD/libIrrlicht.a

unix: LIBS += -lGL
unix: LIBS += -lSDL2

unix: LIBS += -lXxf86vm

unix: LIBS += -lXxf86vm

unix: LIBS += -xf86vm
unix: LIBS += -lXext
unix: LIBS += -lX11
unix: LIBS += -lXcursor

HEADERS += \
    block.hpp \
    config.hpp \
    graphics.hpp \
    log.hpp \
    player.hpp \
    vector2D.hpp \
    zombie.hpp.h \
    weapons/weapon.hpp \
    weapons/zombie_claw.hpp

OTHER_FILES += \
    README.md
