#XDEBUG 		:= 1

#STARTX_DIR=$(PWD)

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
	$(GCC) -O3 $(LFLAGS) $(AROBJS) -o $(TARGET_DEBUG)  $(LIBS) -lc -lm
	$(CP) $(TARGET_DEBUG) $(INSTALL_DIR)/$(TARGET_DEBUG)
	chmod +x $(INSTALL_DIR)/$(TARGET_DEBUG)

build_all:
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.main all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.cui all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(TARGET_MKDIR)/Makefile.cpu all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(TARGET_MKDIR)/Makefile.device all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.bus all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.loader all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.mpu all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.std all
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.mros all
	$(RANLIB) $(AROBJS)
	$(GCC) -O3 $(LFLAGS) $(AROBJS) -o $(TARGET_DEBUG)  $(LIBS) -lc -lm
	$(CP) $(TARGET_DEBUG) $(INSTALL_DIR)/$(TARGET_DEBUG)
	chmod +x $(INSTALL_DIR)/$(TARGET_DEBUG)

$(LIBMAIN):
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.main all

$(LIBCUI): 
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.cui all

$(LIBCPU): 
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(TARGET_MKDIR)/Makefile.cpu all

$(LIBDEVICE): 
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(TARGET_MKDIR)/Makefile.device all

$(LIBBUS): 
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make  -f $(CORE_MKDIR)/Makefile.bus all

$(LIBLOADER):
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.loader all

$(LIBMPU): 
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.mpu all

$(LIBSTD):
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.std all

$(LIBMROS):
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.mros all

clean:
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(TARGET_MKDIR)/Makefile.cpu clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(TARGET_MKDIR)/Makefile.device clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.bus clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.cui clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.loader clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.mpu clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.std clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.main clean
	STARTX_DIR=$(STARTX_DIR) XDEBUG=$(XDEBUG) make -f $(CORE_MKDIR)/Makefile.mros clean
	$(RM) -f $(TARGET_DEBUG) 
	$(RM) -f $(INSTALL_DIR)/$(TARGET_DEBUG)

list:
	@echo $(AROBJS)

