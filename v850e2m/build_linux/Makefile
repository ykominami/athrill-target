START_DIR = .
include $(START_DIR)/Makefile.env

LIBCUI		:= libcui.a
LIBCPU		:= libcpu.a
LIBDEVICE	:= libdevice.a
LIBBUS		:= libbus.a
LIBMPU		:= libmpu.a
LIBLOADER	:= libloader.a
LIBSTD		:= libstd.a
LIBMAIN		:= libmain.a
LIBMROS		:= libmros.a


AROBJS		:= $(LIBMAIN)
AROBJS		+= $(LIBCUI)
AROBJS		+= $(LIBCPU)
AROBJS		+= $(LIBBUS)
AROBJS		+= $(LIBMPU)
AROBJS		+= $(LIBDEVICE)
AROBJS		+= $(LIBLOADER)
AROBJS		+= $(LIBSTD)
AROBJS		+= $(LIBMROS)

OBJ_DEBUG = OBJ_DEBUG

all: $(AROBJS)
	$(RANLIB) $(AROBJS)
	$(GCC) -O3 $(LFLAGS) $(AROBJS) -o $(TARGET)  $(LIBS) -lm
	$(CP) $(TARGET) $(INSTALL_DIR)/
	chmod +x $(INSTALL_DIR)/$(TARGET)
	$(CP) $(TARGET) $(INSTALL_DIR)/$(TARGET_NORMAL)
	chmod +x $(INSTALL_DIR)/$(TARGET_NORMAL)
	$(NM) -n $(TARGET) > $(TARGET).syms

debug_all:
	cd $(OBJ_DEBUG); START_DIR=.. make all

build_all:
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.main all
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.cui all
	START_DIR=$(START_DIR) make -f $(TARGET_MKDIR)/Makefile.cpu all
	START_DIR=$(START_DIR) make -f $(TARGET_MKDIR)/Makefile.device all
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.bus all
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.loader all
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.mpu all
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.std all
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.mros all
	$(RANLIB) $(AROBJS)
	$(GCC) -O3 $(LFLAGS) $(AROBJS) -o $(TARGET)  $(LIBS)
	$(CP) $(TARGET) $(INSTALL_DIR)/
	chmod +x $(INSTALL_DIR)/$(TARGET)
	$(CP) $(TARGET) $(INSTALL_DIR)/$(TARGET_NORMAL)
	chmod +x $(INSTALL_DIR)/$(TARGET_NORMAL)

debug_build_all:
	cd $(OBJ_DEBUG); START_DIR=.. make build_all

$(LIBMAIN):
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.main all

$(LIBCUI): 
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.cui all

$(LIBCPU): 
	START_DIR=$(START_DIR) make -f $(TARGET_MKDIR)/Makefile.cpu all

$(LIBDEVICE): 
	START_DIR=$(START_DIR) make -f $(TARGET_MKDIR)/Makefile.device all

$(LIBBUS): 
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.bus all

$(LIBLOADER):
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.loader all

$(LIBMPU): 
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.mpu all

$(LIBSTD):
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.std all

$(LIBMROS):
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.mros all

clean:
	START_DIR=$(START_DIR) make -f $(TARGET_MKDIR)/Makefile.cpu clean
	START_DIR=$(START_DIR) make -f $(TARGET_MKDIR)/Makefile.device clean
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.bus clean
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.cui clean
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.loader clean
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.mpu clean
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.std clean
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.main clean
	START_DIR=$(START_DIR) make -f $(CORE_MKDIR)/Makefile.mros clean
	$(RM) -f $(TARGET) 
	$(RM) -f $(INSTALL_DIR)/$(TARGET)

debug_clean:
	cd $(OBJ_DEBUG); START_DIR=.. make clean

list:
	@echo $(AROBJS)

