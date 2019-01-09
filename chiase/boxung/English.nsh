;Language: English (1033)
;By Joost Verburg

!insertmacro LANGFILE "English" "English"

!ifdef MUI_WELCOMEPAGE
  ${LangFileString} MUI_TEXT_WELCOME_INFO_TITLE "Chao mung ban den voi Trinh cai dat $(^NameDA)"
  ${LangFileString} MUI_TEXT_WELCOME_INFO_TEXT "Cua so nay huong dan ban cai dat $(^NameDA).$\r$\n$\r$\nChu y: Ban nen dong tat ca cac ung dng khac truoc khi thuc hien viec cai dat. Viec nay se cho phep cap nhat tep he thong ma khong can phai khoi dong lai he thong.$\r$\n$\r$\n$_CLICK"
!endif

!ifdef MUI_UNWELCOMEPAGE
  ${LangFileString} MUI_UNTEXT_WELCOME_INFO_TITLE "Chao mung ban den voi Trinh go bo $(^NameDA)"
  ${LangFileString} MUI_UNTEXT_WELCOME_INFO_TEXT "Cua so nay huong dan ban go bo $(^NameDA).$\r$\n$\r$\n Truoc khi bat dau go bo, hay dong chuong trinh $(^NameDA).$\r$\n$\r$\n$_CLICK"
!endif

!ifdef MUI_LICENSEPAGE
  ${LangFileString} MUI_TEXT_LICENSE_TITLE "Thoa thuan giay phep"
  ${LangFileString} MUI_TEXT_LICENSE_SUBTITLE "Vui long xem cac dieu kien thoa thuan truoc khi cai dat $(^NameDA)."
  ${LangFileString} MUI_INNERTEXT_LICENSE_BOTTOM "Neu ban chap nhan cac dieu kien cua thoa thuan, chon nut Toi dong y de tiep tuc. Ban phai dong y thoa thuan de cai dat phan mem $(^NameDA)."
  ${LangFileString} MUI_INNERTEXT_LICENSE_BOTTOM_CHECKBOX "Neu ban chap nhan cac dieu kien cua thoa thuan, hay chon muc ben duoi. Ban phai dong y thoa thuan de cai dat phan mem $(^NameDA). $_CLICK"
  ${LangFileString} MUI_INNERTEXT_LICENSE_BOTTOM_RADIOBUTTONS "Neu ban chap nhan cac dieu kien cua thoa thuan, hay chon muc dau tien ben duoi. Ban phai dong y thoa thuan de cai dat phan mem $(^NameDA). $_CLICK"
!endif

!ifdef MUI_UNLICENSEPAGE
  ${LangFileString} MUI_UNTEXT_LICENSE_TITLE "Thoa thuan giay phep"
  ${LangFileString} MUI_UNTEXT_LICENSE_SUBTITLE "Vui long xem cac dieu kien thoa thuan truoc khi go bo $(^NameDA)."
  ${LangFileString} MUI_UNINNERTEXT_LICENSE_BOTTOM "Neu ban chap nhan cac dieu kien cua thoa thuan, chon nut Toi dong y de tiep tuc. Ban phai dong y thoa thuan de go bo phan mem $(^NameDA)."
  ${LangFileString} MUI_UNINNERTEXT_LICENSE_BOTTOM_CHECKBOX "Neu ban chap nhan cac dieu kien cua thoa thuan, hay chon muc ben duoi. Ban phai dong y thoa thuan de go bo phan mem $(^NameDA). $_CLICK"
  ${LangFileString} MUI_UNINNERTEXT_LICENSE_BOTTOM_RADIOBUTTONS "Neu ban chap nhan cac dieu kien cua thoa thuan, hay chon muc dau tien ben duoi. Ban phai dong y thoa thuan de go bo phan mem $(^NameDA). $_CLICK"
!endif

!ifdef MUI_LICENSEPAGE | MUI_UNLICENSEPAGE
  ${LangFileString} MUI_INNERTEXT_LICENSE_TOP "An phim Page Down de xem toan bo thoa thuan."
!endif

!ifdef MUI_COMPONENTSPAGE
  ${LangFileString} MUI_TEXT_COMPONENTS_TITLE "Chon thanh phan"
  ${LangFileString} MUI_TEXT_COMPONENTS_SUBTITLE "Chon tinh nang cua $(^NameDA) ban muon cai dat."
!endif

!ifdef MUI_UNCOMPONENTSPAGE
  ${LangFileString} MUI_UNTEXT_COMPONENTS_TITLE "Chon thanh phan"
  ${LangFileString} MUI_UNTEXT_COMPONENTS_SUBTITLE "Chon tin nang cua $(^NameDA) ban muon go bo."
!endif

!ifdef MUI_COMPONENTSPAGE | MUI_UNCOMPONENTSPAGE
  ${LangFileString} MUI_INNERTEXT_COMPONENTS_DESCRIPTION_TITLE "Mo ta"
  !ifndef NSIS_CONFIG_COMPONENTPAGE_ALTERNATIVE
    ${LangFileString} MUI_INNERTEXT_COMPONENTS_DESCRIPTION_INFO "Dua con tro den vi tri thanh phan de xem mo ta chi tiet."
  !else
    ${LangFileString} MUI_INNERTEXT_COMPONENTS_DESCRIPTION_INFO "Dua con tro den vi tri thanh phan de xem mo ta chi tiet."
  !endif
!endif

!ifdef MUI_DIRECTORYPAGE
  ${LangFileString} MUI_TEXT_DIRECTORY_TITLE "Chon thu muc cai dat"
  ${LangFileString} MUI_TEXT_DIRECTORY_SUBTITLE "Chon thu muc cai dat $(^NameDA)."
!endif

!ifdef MUI_UNDIRECTORYPAGE
  ${LangFileString} MUI_UNTEXT_DIRECTORY_TITLE "Chon thu muc go bo"
  ${LangFileString} MUI_UNTEXT_DIRECTORY_SUBTITLE "Chon thu muc go bo $(^NameDA)."
!endif

!ifdef MUI_INSTFILESPAGE
  ${LangFileString} MUI_TEXT_INSTALLING_TITLE "Dang cai dat"
  ${LangFileString} MUI_TEXT_INSTALLING_SUBTITLE "Vui long doi trong khi $(^NameDA) duoc cai dat."
  ${LangFileString} MUI_TEXT_FINISH_TITLE "Hoan thanh viec cai dat"
  ${LangFileString} MUI_TEXT_FINISH_SUBTITLE "Qua trinh cai dat thanh cong."
  ${LangFileString} MUI_TEXT_ABORT_TITLE "Huy qua trinh cai dat"
  ${LangFileString} MUI_TEXT_ABORT_SUBTITLE "Qua trinh cai dat khong thanh cong."
!endif

!ifdef MUI_UNINSTFILESPAGE
  ${LangFileString} MUI_UNTEXT_UNINSTALLING_TITLE "Dang go bo"
  ${LangFileString} MUI_UNTEXT_UNINSTALLING_SUBTITLE "Vui long doi trong khi $(^NameDA) duoc go bo."
  ${LangFileString} MUI_UNTEXT_FINISH_TITLE "Go bo hoan tat"
  ${LangFileString} MUI_UNTEXT_FINISH_SUBTITLE "Go bo hoan thanh."
  ${LangFileString} MUI_UNTEXT_ABORT_TITLE "Huy qua trinh go bo"
  ${LangFileString} MUI_UNTEXT_ABORT_SUBTITLE "Go bo khong duoc hoan tat."
!endif

!ifdef MUI_FINISHPAGE
  ${LangFileString} MUI_TEXT_FINISH_INFO_TITLE "Hoan thanh qua trinh cai dat $(^NameDA)"
  ${LangFileString} MUI_TEXT_FINISH_INFO_TEXT "$(^NameDA) da duoc cai dat vao may tinh cua ban.$\r$\n$\r$\n Chon nut Ket thuc de dong cua so nay."
  ${LangFileString} MUI_TEXT_FINISH_INFO_REBOOT "May tinh cua ban phai khoi dong lai de hoan thanh qua tirnh cai dat $(^NameDA). Ban co muon khoi dong lai ngay bay gio?"
!endif

!ifdef MUI_UNFINISHPAGE
  ${LangFileString} MUI_UNTEXT_FINISH_INFO_TITLE "Hoan tat qua trinh go bo $(^NameDA)"
  ${LangFileString} MUI_UNTEXT_FINISH_INFO_TEXT "$(^NameDA) da duoc go bo khoi may tinh cua ban.$\r$\n$\r$\n Chon nut Ket thuc de dong cua so."
  ${LangFileString} MUI_UNTEXT_FINISH_INFO_REBOOT "May tinh cua ban phai khoi dong lai de hoan thanh qua trinh go bo $(^NameDA). Ban co muon khoi dong lai ngay bay gio khong?"
!endif

!ifdef MUI_FINISHPAGE | MUI_UNFINISHPAGE
  ${LangFileString} MUI_TEXT_FINISH_REBOOTNOW "Khoi dong lai ngay"
  ${LangFileString} MUI_TEXT_FINISH_REBOOTLATER "Toi muon khoi dong lai sau"
  ${LangFileString} MUI_TEXT_FINISH_RUN "&Chay $(^NameDA)"
  ${LangFileString} MUI_TEXT_FINISH_SHOWREADME "&Hien tep Readme.txt"
  ${LangFileString} MUI_BUTTONTEXT_FINISH "&Ket thuc"  
!endif

!ifdef MUI_STARTMENUPAGE
  ${LangFileString} MUI_TEXT_STARTMENU_TITLE "Chon thu muc Menu Bat dau"
  ${LangFileString} MUI_TEXT_STARTMENU_SUBTITLE "Chon thu muc menu bat dau cho bieu tuong $(^NameDA)."
  ${LangFileString} MUI_INNERTEXT_STARTMENU_TOP "Chon thu muc Menu Bat dau ma ban muon tao bieu tuong cua chuong trinh. Ban co the nhap ten de tao thu muc mo."
  ${LangFileString} MUI_INNERTEXT_STARTMENU_CHECKBOX "Khong tao bieu tuong"
!endif

!ifdef MUI_UNCONFIRMPAGE
  ${LangFileString} MUI_UNTEXT_CONFIRM_TITLE "Dang go bo $(^NameDA)"
  ${LangFileString} MUI_UNTEXT_CONFIRM_SUBTITLE "Go bo $(^NameDA) khoi may tinh."
!endif

!ifdef MUI_ABORTWARNING
  ${LangFileString} MUI_TEXT_ABORTWARNING "Ban co chac muon thoat trinh cai dat $(^Name)?"
!endif

!ifdef MUI_UNABORTWARNING
  ${LangFileString} MUI_UNTEXT_ABORTWARNING "Ban muon thoat trinh go bo $(^Name)?"
!endif

!ifdef MULTIUSER_INSTALLMODEPAGE
  ${LangFileString} MULTIUSER_TEXT_INSTALLMODE_TITLE "Chon tai khoan nguoi dung"
  ${LangFileString} MULTIUSER_TEXT_INSTALLMODE_SUBTITLE "Chon nguoi dung ma ban muon thuc hien cai dat $(^NameDA)."
  ${LangFileString} MULTIUSER_INNERTEXT_INSTALLMODE_TOP "Chon muc nay neu ban muon cai dat $(^NameDA) cho rieng ban hoac cho tat ca moi nguoi su dung may tinh nay. $(^ClickNext)"
  ${LangFileString} MULTIUSER_INNERTEXT_INSTALLMODE_ALLUSERS "Cai dat cho bat cu ai sung dung may tinh nay"
  ${LangFileString} MULTIUSER_INNERTEXT_INSTALLMODE_CURRENTUSER "Cai dat cho rieng toi"
!endif
