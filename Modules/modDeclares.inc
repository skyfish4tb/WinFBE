

''  Control identifiers
#Define IDC_SCINTILLA 100
#Define IDC_FRMMAIN_TOPTABCONTROL  1000
#Define IDC_FRMMAIN_TOOLBAR  1001
#Define IDC_FRMMAIN_REBAR  1002
#Define IDC_FRMMAIN_STATUSBAR  1003
#Define IDC_FRMOPTIONS_LABEL1  1000
#Define IDC_FRMOPTIONS_CMDCANCEL  1001
#Define IDC_FRMOPTIONS_LBLCATEGORY  1002
#Define IDC_FRMOPTIONS_CMDOK  1003
#Define IDC_FRMOPTIONS_TVWCATEGORIES  1004
#Define IDC_FRMOPTIONSEDITOR_LBLTABSIZE  1000
#Define IDC_FRMOPTIONSEDITOR_TXTTABSIZE  1001
#Define IDC_FRMOPTIONSEDITOR_LBLKEYWORDCASE  1002
#Define IDC_FRMOPTIONSEDITOR_COMBOCASE  1003
#Define IDC_FRMOPTIONSEDITOR_CHKCODETIPS  1004
#Define IDC_FRMOPTIONSEDITOR_CHKSHOWLEFTMARGIN  1005
#Define IDC_FRMOPTIONSEDITOR_CHKSYNTAXHIGHLIGHTING  1006
#Define IDC_FRMOPTIONSEDITOR_CHKCURRENTLINE  1007
#Define IDC_FRMOPTIONSEDITOR_CHKLINENUMBERING  1008
#Define IDC_FRMOPTIONSEDITOR_CHKCONFINECARET  1009
#Define IDC_FRMOPTIONSEDITOR_LBLLOCALIZATION  1010
#Define IDC_FRMOPTIONSEDITOR_CMDLOCALIZATION  1011
#Define IDC_FRMOPTIONSEDITOR_FRAMELOCALIZATION  1012
#Define IDC_FRMOPTIONSEDITOR_CHKTABTOSPACES  1013
#Define IDC_FRMOPTIONSEDITOR_CHKMULTIPLEINSTANCES  1014
#Define IDC_FRMOPTIONSEDITOR_CHKAUTOINDENTATION  1015
#Define IDC_FRMOPTIONSEDITOR_CHKSHOWFOLDMARGIN  1016
#Define IDC_FRMOPTIONSEDITOR_CHKCOMPILEAUTOSAVE  1017
#Define IDC_FRMOPTIONSEDITOR_CHKINDENTGUIDES  1018
#Define IDC_FRMOPTIONSCOLORS_LSTCOLORS  1000
#Define IDC_FRMOPTIONSCOLORS_FRMCOLORS  1001
#Define IDC_FRMOPTIONSCOLORS_LBLFOREGROUND  1002
#Define IDC_FRMOPTIONSCOLORS_LBLBACKGROUND  1003
#Define IDC_FRMOPTIONSCOLORS_FRMFONT  1004
#Define IDC_FRMOPTIONSCOLORS_CBCOLOR1  1005
#Define IDC_FRMOPTIONSCOLORS_CBCOLOR2  1006
#Define IDC_FRMOPTIONSCOLORS_COMBOFONTNAME  1007
#Define IDC_FRMOPTIONSCOLORS_COMBOFONTSIZE  1008
#Define IDC_FRMOPTIONSCOLORS_LSTCOLORS  1000
#Define IDC_FRMOPTIONSCOLORS_FRMCOLORS  1001
#Define IDC_FRMOPTIONSCOLORS_LBLFOREGROUND  1002
#Define IDC_FRMOPTIONSCOLORS_LBLBACKGROUND  1003
#Define IDC_FRMOPTIONSCOLORS_FRMFONT  1004
#Define IDC_FRMOPTIONSCOLORS_CBCOLOR1  1005
#Define IDC_FRMOPTIONSCOLORS_CBCOLOR2  1006
#Define IDC_FRMOPTIONSCOLORS_COMBOFONTNAME  1007
#Define IDC_FRMOPTIONSCOLORS_COMBOFONTSIZE  1008
#Define IDC_FRMOPTIONSCOMPILER_CMDFBWIN32  1009
#Define IDC_FRMOPTIONSCOMPILER_LBLSWITCHES  1010
#Define IDC_FRMOPTIONSCOMPILER_LBLFBC32  1011
#Define IDC_FRMOPTIONSCOMPILER_TXTFBWIN32  1012
#Define IDC_FRMOPTIONSCOMPILER_TXTFBSWITCHES  1013
#Define IDC_FRMOPTIONSCOMPILER_LBLFBHELP  1014
#Define IDC_FRMOPTIONSCOMPILER_TXTFBHELPFILE  1015
#Define IDC_FRMOPTIONSCOMPILER_CMDFBHELPFILE  1016
#Define IDC_FRMOPTIONSCOMPILER_CMDFBWIN64  1017
#Define IDC_FRMOPTIONSCOMPILER_LBLFBC64  1018
#Define IDC_FRMOPTIONSCOMPILER_TXTFBWIN64  1019
#Define IDC_FRMOPTIONSCOMPILER_CMDAPIHELPPATH  1020
#Define IDC_FRMOPTIONSCOMPILER_LBLAPIHELP  1021
#Define IDC_FRMOPTIONSCOMPILER_TXTWIN32HELPPATH  1022
#Define IDC_FRMTEMPLATES_LISTBOX  1000
#Define IDC_FRMCOMPILERESULTS_LISTVIEW 1000
#Define IDC_FRMFIND_LBLFINDWHAT  1000
#Define IDC_FRMFIND_COMBOFIND  1001
#Define IDC_FRMFIND_CHKWHOLEWORDS  1004
#Define IDC_FRMFIND_CHKMATCHCASE  1005
#Define IDC_FRMFIND_FRAMESCOPE  1006
#Define IDC_FRMFIND_OPTSCOPE1  1007
#Define IDC_FRMFIND_OPTSCOPE2  1008
#Define IDC_FRMFIND_FRAMEOPTIONS  1009
#Define IDC_FRMREPLACE_LBLFINDWHAT  1000
#Define IDC_FRMREPLACE_COMBOFIND  1001
#Define IDC_FRMREPLACE_CHKWHOLEWORDS  1004
#Define IDC_FRMREPLACE_CHKMATCHCASE  1005
#Define IDC_FRMREPLACE_FRAMESCOPE  1006
#Define IDC_FRMREPLACE_OPTSCOPE1  1007
#Define IDC_FRMREPLACE_OPTSCOPE2  1008
#Define IDC_FRMREPLACE_FRAMEOPTIONS  1009
#Define IDC_FRMREPLACE_LBLREPLACEWITH  1010
#Define IDC_FRMREPLACE_COMBOREPLACE  1011
#Define IDC_FRMREPLACE_CMDREPLACE  1012
#Define IDC_FRMREPLACE_CMDREPLACEALL  1013
#Define IDC_FRMREPLACE_LBLSTATUS  1014
#Define IDC_FRMGOTO_LBLLASTLINE  1000
#Define IDC_FRMGOTO_LBLCURRENTLINE  1001
#Define IDC_FRMGOTO_LBLGOTOLINE  1002
#Define IDC_FRMGOTO_TXTLINE  1003
#Define IDC_FRMGOTO_LBLLASTVALUE  1004
#Define IDC_FRMGOTO_LBLCURRENTVALUE  1005

Const DELIM = Chr(1)    ' character used as delimiter for Find/Replace text strings  
Const IDC_MRUBASE = 5000           ' Windows id of MRU items 1 to 10 (located under File menu)


''  Menu message identifiers
Enum
''  Custom messages
   MSG_USER_SETFOCUS = 10000
   IDM_FILE, IDM_FILENEW 
   IDM_FILEOPEN, IDM_FILECLOSE, IDM_FILECLOSEALL, IDM_FILESAVE, IDM_FILESAVEAS, IDM_FILESAVEALL
   IDM_MRU, IDM_OPENINCLUDE, IDM_COMMAND, IDM_EXIT
   IDM_EDIT
   IDM_UNDO, IDM_REDO, IDM_CUT, IDM_COPY, IDM_PASTE, IDM_DELETELINE, IDM_INSERTFILE
   IDM_INDENTBLOCK, IDM_UNINDENTBLOCK, IDM_COMMENTBLOCK, IDM_UNCOMMENTBLOCK
   IDM_DUPLICATELINE, IDM_MOVELINEUP, IDM_MOVELINEDOWN, IDM_TOUPPERCASE, IDM_TOLOWERCASE
   IDM_TOMIXEDCASE, IDM_EOLTOCRLF, IDM_EOLTOCR, IDM_EOLTOLF, IDM_SELECTALL, IDM_SELECTLINE
   IDM_SPACESTOTABS, IDM_TABSTOSPACES
   IDM_SEARCH
   IDM_FIND, IDM_FINDNEXT, IDM_FINDPREV, IDM_REPLACE, IDM_DEFINITION, IDM_LASTPOSITION
   IDM_GOTO, IDM_BOOKMARKTOGGLE, IDM_BOOKMARKNEXT, IDM_BOOKMARKPREV, IDM_BOOKMARKCLEARALL
   IDM_VIEW
   IDM_FOLDTOGGLE, IDM_FOLDBELOW, IDM_FOLDALL, IDM_UNFOLDALL, IDM_ZOOMIN, IDM_ZOOMOUT, IDM_RESTOREMAIN
   IDM_OPTIONS
   IDM_PROJECTLIST
   IDM_BUILDEXECUTE, IDM_COMPILE, IDM_RUNEXE, IDM_COMMANDLINE, IDM_USE32BIT, IDM_USE64BIT
   IDM_GUI, IDM_CONSOLE
   IDM_HELP, IDM_ABOUT
End Enum


Declare Function frmMain_UpdateLineCol(HWnd As HWnd) As Long
Declare Function frmMain_ChangeTopMenuStates() As Long
Declare Function frmMain_PositionWindows( ByVal HWnd As HWnd ) As LRESULT
Declare Function OnCommand_FileSaveAll( ByVal HWnd As HWnd ) As LRESULT
Declare Function frmCompileResults_Show( ByVal hWndParent As HWnd, ByVal nCmdShow As Long = 0 ) As Long
Declare Function SetDocumentErrorPosition( ByVal hLV As HWnd ) As Long
Declare Function frmMain_MenuSetCompiler( ByVal wID As Long ) As Long
Declare Function Find_UpOrDown( ByVal flagUpDown As Long, _
                                 ByVal findFlags  As Long, _
                                 ByVal flagSearchCurrentOnly As BOOLEAN, _
                                 ByVal hWndDialog As HWnd _
                                 ) As Long
Declare Function UpdateMRUMenu( ByVal hMenu As HMENU ) As Long
Declare Function UpdateMRUList( ByVal wzFilename As WString Ptr ) As Long
Declare Function ProcessToCurdrive( ByVal pswzIn As WString Ptr ) As Long
Declare Function ProcessFromCurdrive( ByVal pswzIn As WString Ptr ) As Long
Declare Function LoadLocalizationFile( ByVal pwszName As WString Ptr ) As BOOLEAN


''
''  Save information related to Find/Replace operations
''
Type FINDREPLACE_TYPE
   txtFind         As String
   txtReplace      As String
   txtFindCombo    As String
   txtReplaceCombo As String
   txtLastFind     As String
   nWholeWord      As Long          ' checkmark for find/replace whole word search
   nMatchCase      As Long          ' match case when searching
   nScopeFind      As Long          ' identifier of OptionButton that is checked
   nScopeReplace   As Long          ' identifier of OptionButton that is checked
End Type
Dim Shared gFind As FINDREPLACE_TYPE


Type clsDocument
   Private:
      m_hWindow      As HWnd
      m_IsNewFlag    As BOOLEAN
      m_sFilename    As WString * MAX_PATH
      m_DateFileTime As Double
      m_pSci         As Any Ptr      
      
   Public:
      Declare Property hWindow( ByVal _HWnd As HWnd)
      Declare Property hWindow() As HWnd
      Declare Property IsNewFlag( ByVal nValue As BOOLEAN)
      Declare Property IsNewFlag() As BOOLEAN
      Declare Property DateFileTime( ByVal nValue As Double)
      Declare Property DateFileTime() As Double
      Declare Property DiskFilename( ByVal wValue As WString Ptr)
      Declare Property DiskFilename() As WString Ptr
      Declare Function CreateCodeWindow( ByVal hWndParent As HWnd, ByVal IsNewFile As BOOLEAN, ByVal IsTemplate As BOOLEAN = False, ByVal pwszFile As WString Ptr = 0 ) As HWnd
      Declare Function FindReplace( ByVal strFindText As String, ByVal strReplaceText As String ) As Long
      Declare Function InsertFile() As BOOLEAN
      Declare Function SaveFile(ByVal bSaveAs As BOOLEAN = False) As BOOLEAN
      Declare Function ApplyProperties() As Long
      Declare Function GetTextRange( ByVal cpMin As Long, ByVal cpMax As Long) As String
      Declare Function ChangeSelectionCase( ByVal fCase As Long) As Long 
      Declare Function GetCurrentLineNumber() As Long
      Declare Function SelectLine( ByVal nLineNum As Long ) As Long
      Declare Function GetLine( ByVal nLine As Long) As String
      Declare Function GetSelText() As String
      Declare Function GetText() As String
      Declare Function SetText( ByRef sText As Const String ) As Long 
      Declare Function GetSelectedLineRange( ByRef startLine As Long, ByRef endLine As Long, ByRef startPos As Long, ByRef endPos As Long ) As Long 
      Declare Function BlockComment( ByVal flagBlock As BOOLEAN ) As Long
      Declare Function CurrentLineUp() As Long
      Declare Function CurrentLineDown() As Long
      Declare Function MoveCurrentLines( ByVal flagMoveDown As BOOLEAN ) As Long
      Declare Function ToggleBookmark( ByVal nLine As Long ) As Long
      Declare Function NextBookmark() As Long 
      Declare Function PrevBookmark() As Long 
      Declare Function FoldToggle( ByVal nLine As Long ) As Long
      Declare Function FoldAll() As Long
      Declare Function UnFoldAll() As Long
      Declare Function FoldToggleOnwards( ByVal nLine As Long) As Long
      Declare Function ConvertEOL( ByVal nMode As Long) As Long
      Declare Function DisplayStats() As Long
      declare Function TabsToSpaces() As Long
      Declare Constructor
      Declare Destructor
End Type

Type clsTopTabCtl
   Private:
      m_hWindow   As HWnd
      
   Public:
      Declare Property hWindow( ByVal _HWnd As HWnd)
      Declare Property hWindow() As HWnd
      Declare Function AddTab( ByVal pDoc As clsDocument Ptr ) As Long
      Declare Function GetTabIndexFromFilename( ByVal pwszName As WString Ptr ) As Long
      declare Function SetTabIndexByDocumentPtr( ByVal pDocIn As clsDocument Ptr ) As Long
      Declare Function SetFocusTab( ByVal idx As Long ) As Long
      Declare Function GetActiveDocumentPtr() As clsDocument Ptr
      Declare Function GetDocumentPtr( ByVal idx As Long ) As clsDocument Ptr
      Declare Function DisplayScintilla( ByVal idx As Long, ByVal bShow As BOOLEAN ) As Long
      Declare Function SetTabText( ByVal idx As Long ) As Long
      
End Type


Type clsApp
   Private:
      m_ActiveProject     As Long
'      m_arrProjects(Any)  as clsProject  
      m_IncludeFilename   As String
      m_arrDocuments(Any) As clsDocument Ptr
   
   Public:
      Declare Function LoadKeywords() As Long

'      Declare Function AddProject() As Long
'      Declare Sub      SetActiveProject( ByVal nValue as Long)
'      Declare Function GetActiveProject() ByRef as clsProject
'      Declare Property ActiveProject( ByVal nValue as Long )
'      Declare Property ActiveProject() as Long

      Declare Function AddDocument( ByVal pDoc As clsDocument Ptr ) As Long
      Declare Function RemoveDocument( ByVal pDoc As clsDocument Ptr ) As Long
      Declare Function GetDocumentCount() As Long
      Declare Function GetDocumentPtr( ByVal idx As Long ) As clsDocument Ptr
      Declare Property IncludeFilename( ByVal sFilename As String)
      Declare Property IncludeFilename() As String

      Declare Constructor()
      Declare Destructor()
      
      FBKeywords As String 
      
      Declare Function Debug() As Long
      
End Type

'  Global App class that controls everything related to projects and documents
Dim Shared gpApp As clsApp Ptr

