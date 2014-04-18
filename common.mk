# Audio
PRODUCT_PACKAGES += \
   libasound \
   libalsactrl \
   libmmprobe \
   #audio_policy.montblanc \
   audio.primary.montblanc \

# STE Display 
PRODUCT_PACKAGES += \
   lights.montblanc \
   gralloc.montblanc \
   copybit.montblanc

# STE Media
PRODUCT_PACKAGES += \
   libstagefrighthw \
   libomxil-bellagio \
   libstelpcutils \
   libtrace

# WLAN
PRODUCT_PACKAGES += \
   libnetcmdiface \
   libnl_2

# Modem
PRODUCT_PACKAGES += \
   ste_mad \
   msa \
   libisimessage \
   libmalat \
   libmalcs \
   libmalftd \
   libmalgpds \
   libmalgss \
   libmalmce \
   libmalmis \
   libmalmon \
   libmalmte \
   libmalnet \
   libmalnvd \
   libmalpipe \
   libmalrf \
   libmalsms \
   libmaluicc \
   libmalutil \
   libshmnetlnk \
   libphonet

# cspsa
PRODUCT_PACKAGES += \
   cspsa-server \
   libcspsa \
   cspsa.conf \
   cspsa-cmd \
   libcspsa-core \
   libcspsa-ll-file

# cg2900
PRODUCT_PACKAGES += \
   ste-cg29xx_ctrl

# psdata
PRODUCT_PACKAGES += \
   libstecom \
   libmpl \
   libpscc \
   libsterc \
   stercd

PRODUCT_PACKAGES += \
   chargemode \
   dbus-daemon \
   watchdog-kicker

PRODUCT_PACKAGES += \
   libdbus \
   libarchive \
   libarchive_fe
