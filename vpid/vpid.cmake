#========================================================================================
# vpid.cmake
#
#
# Этот файл сгенерирован автоматически.
#
# Вносить изменения можно между строк:
#   #<<< Start your code here
#   Сохраненный код.
#   #>>> Stop your code here
# Все остальные изменения будут перезаписаны.
#
#========================================================================================


#========================================================================================

if ( NOT  VPID_INCLUDED )
    set ( VPID_INCLUDED TRUE )

    message( "Include vpid..." )

    #<<< Start your code here -----------------------------------------------------------
    #>>> Stop your code here ------------------------------------------------------------

    include_directories( "${VLIBS_DIR}/vpid/")

    
    set(V_HEADERS ${V_HEADERS} "${VLIBS_DIR}/vpid/vpid_saver.h") 
    
    set(V_SOURCES ${V_SOURCES} "${VLIBS_DIR}/vpid/vpid_saver.cpp") 

    message( "vpid included" )

endif()
# vpid.cmake
#========================================================================================
