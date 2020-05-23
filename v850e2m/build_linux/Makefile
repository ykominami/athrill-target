XDEBUG			:= ""
STARTX_DIR=$(PWD)
#START_DIR = .
include $(STARTX_DIR)/Makefile.env

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
	$(GCC) -O3 $(LFLAGS) $(AROBJS) -o $(TARGET)  $(LIBS) -lc -lm
	$(CP) $(TARGET) $(INSTALL_DIR)/
	chmod +x $(INSTALL_DIR)/$(TARGET)
	$(CP) $(TARGET) $(INSTALL_DIR)/$(TARGET_NORMAL)
	chmod +x $(INSTALL_DIR)/$(TARGET_NORMAL)
	$(NM) -n $(TARGET) > $(TARGET).syms

debug_all:
	cd $(OBJ_DEBUG); STARTX_DIR=$(STARTX_DIR) XDEBUG=1 make all

build_all:
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.main all
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.cui all
	STARTX_DIR=$(STARTX_DIR) make -f $(TARGET_MKDIR)/Makefile.cpu all
	STARTX_DIR=$(STARTX_DIR) make -f $(TARGET_MKDIR)/Makefile.device all
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.bus all
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.loader all
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.mpu all
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.std all
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.mros all
	$(RANLIB) $(AROBJS)
	$(GCC) -O3 $(LFLAGS) $(AROBJS) -o $(TARGET)  $(LIBS) -lc -lm
	$(CP) $(TARGET) $(INSTALL_DIR)/
	chmod +x $(INSTALL_DIR)/$(TARGET)
	$(CP) $(TARGET) $(INSTALL_DIR)/$(TARGET_NORMAL)
	chmod +x $(INSTALL_DIR)/$(TARGET_NORMAL)

debug_build_all:
	cd $(OBJ_DEBUG); STARTX_DIR=$(STARTX_DIR) XDEBUG=1 make build_all

$(LIBMAIN):
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.main all

$(LIBCUI): 
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.cui all

$(LIBCPU): 
	STARTX_DIR=$(STARTX_DIR) make -f $(TARGET_MKDIR)/Makefile.cpu all

$(LIBDEVICE): 
	STARTX_DIR=$(STARTX_DIR) make -f $(TARGET_MKDIR)/Makefile.device all

$(LIBBUS): 
	STARTX_DIR=$(STARTX_DIR) make  -f $(CORE_MKDIR)/Makefile.bus all

$(LIBLOADER):
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.loader all

$(LIBMPU): 
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.mpu all

$(LIBSTD):
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.std all

$(LIBMROS):
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.mros all

clean:
	STARTX_DIR=$(STARTX_DIR) make -f $(TARGET_MKDIR)/Makefile.cpu clean
	STARTX_DIR=$(STARTX_DIR) make -f $(TARGET_MKDIR)/Makefile.device clean
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.bus clean
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.cui clean
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.loader clean
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.mpu clean
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.std clean
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.main clean
	STARTX_DIR=$(STARTX_DIR) make -f $(CORE_MKDIR)/Makefile.mros clean
	$(RM) -f $(TARGET) 
	$(RM) -f $(INSTALL_DIR)/$(TARGET)

debug_clean:
	cd $(OBJ_DEBUG); STARTX_DIR=$(STARTX_DIR) make clean

list:
	@echo $(AROBJS)

