#========================================================================================
# vmacroses.pri
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
isEmpty(qi_vmacroses) {
    qi_vmacroses = 1;
    isEmpty(qi_not_print_pri_messages): message("=== vmacroses appended ===")

    isEmpty(VLIBS_DIR): error("vmacroses: Need VLIBS_DIR correct path.")


    #<<< Start your code here -----------------------------------------------------------
    #>>> Stop your code here ------------------------------------------------------------

    INCLUDEPATH += $$VLIBS_DIR/vmacroses

    
    HEADERS     += $$VLIBS_DIR/vmacroses/vcompiler.h 
    
}
# vmacroses.pri
#========================================================================================