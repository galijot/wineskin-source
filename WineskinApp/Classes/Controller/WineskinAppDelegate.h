//
//  WineskinAppDelegate.h
//  Wineskin
//
//  Copyright 2011-2013 by The Wineskin Project and Urge Software LLC All rights reserved.
//  Licensed for use under the LGPL <http://www.gnu.org/licenses/lgpl-2.1.txt>
//

#import <Cocoa/Cocoa.h>

#import "NSPortManager.h"
#import "NSDropIconView.h"

@interface WineskinAppDelegate : NSObject // <NSOutlineViewDataSource> //<NSApplicationDelegate>
{
    NSPortManager* portManager;
    
	int disableButtonCounter;
	BOOL disableXButton;
	BOOL winetricksDone;
	BOOL usingAdvancedWindow;
	
	//main window
    IBOutlet NSWindow *__unsafe_unretained window;
	IBOutlet NSWindow *chooseExeWindow;
	IBOutlet NSPopUpButton *exeChoicePopUp;
	IBOutlet NSWindow *helpWindow;
	IBOutlet NSWindow *aboutWindow;
	IBOutlet NSWindow *installerWindow;
	IBOutlet NSTextField *aboutWindowVersionNumber;
    
	//advanced menu
	IBOutlet NSWindow *advancedWindow;
    IBOutlet NSButton *winetricksButton;
	IBOutlet NSButton *testRunButton;
	IBOutlet NSButton *advancedInstallSoftwareButton;
	IBOutlet NSProgressIndicator *toolRunningPI;
	IBOutlet NSTextField *toolRunningPIText;
	IBOutlet NSTabView *tab;
	IBOutlet NSTextField *wrapperVersionText;
	IBOutlet NSTextField *engineVersionText;
	
	//advanced menu - Configuration Tab
	IBOutlet NSTextField *windowsExeTextField;
	IBOutlet NSTextField *menubarNameTextField;
	IBOutlet NSTextField *versionTextField;
	IBOutlet NSTextField *wineDebugTextField;
	IBOutlet NSTextField *customCommandsTextField;
	IBOutlet NSDropIconView *iconImageView;
	IBOutlet NSButton *exeBrowseButton;
	IBOutlet NSButton *iconBrowseButton;
	IBOutlet NSPopUpButton *extPopUpButton;
	IBOutlet NSButton *extEditButton;
    IBOutlet NSButton *extPlusButton;
	IBOutlet NSButton *extMinusButton;
    IBOutlet NSButton *gptkCheckBoxButton;
    
	//advanced menu - Tools Tab
	IBOutlet NSButton *winecfgButton;
	IBOutlet NSButton *regeditButton;
	IBOutlet NSButton *taskmgrButton;
    //cmd
    IBOutlet NSButton *uninstallerButton;
    IBOutlet NSButton *customExeButton;
    IBOutlet NSButton *logsButtonPressed;
    IBOutlet NSButton *commandLineWineTestButton;
    //kill wineskin processes
    IBOutlet NSButton *refreshWrapperButton;
	IBOutlet NSButton *rebuildWrapperButton;
    IBOutlet NSButton *updateWrapperButton;
    IBOutlet NSButton *changeEngineButton;
	IBOutlet NSTextField *currentVersionTextField;
	
	//advanced menu - Options Tab
	IBOutlet NSButton *alwaysMakeLogFilesCheckBoxButton;
	IBOutlet NSButton *mapUserFoldersCheckBoxButton;
	IBOutlet NSButton *modifyMappingsButton;
	IBOutlet NSButton *confirmQuitCheckBoxButton;
    IBOutlet NSButton *fntoggleCheckBoxButton;
    IBOutlet NSButton *commandCheckBoxButton;
    IBOutlet NSButton *optionCheckBoxButton;
    IBOutlet NSButton *esyncCheckBoxButton;
    IBOutlet NSButton *msyncCheckBoxButton;
    
    //advanced menu - Advanced Tab
    IBOutlet NSButton *WinetricksNoLogsButton;
    IBOutlet NSButton *disableCPUsCheckBoxButton;
    IBOutlet NSButton *winedbgDisabledButton;
    IBOutlet NSButton *geckoCheckBoxButton;
    IBOutlet NSButtonCell *monoCheckBoxButton;
    IBOutlet NSButton *metalhudCheckBoxButton;
    IBOutlet NSButton *fastmathCheckBoxButton;
    IBOutlet NSButton *cxmoltenvkCheckBoxButton;
    
	//change engine window
	IBOutlet NSWindow *changeEngineWindow;
	IBOutlet NSPopUpButton *changeEngineWindowPopUpButton;
	IBOutlet NSButton *engineWindowOkButton;
	
	//busy window
	IBOutlet NSWindow *busyWindow;
	IBOutlet NSProgressIndicator *waitWheel;
	
	//cexe window
	IBOutlet NSWindow *cEXEWindow;
	IBOutlet NSTextField *cEXENameToUseTextField;
	IBOutlet NSTextField *cEXEWindowsExeTextField;
	IBOutlet NSDropIconView *cEXEIconImageView;
	IBOutlet NSButton *cEXEBrowseButton;
	IBOutlet NSButton *cEXEIconBrowseButton;
	IBOutlet NSMatrix *cEXEautoOrOvverrideDesktopToggle;
	IBOutlet NSPopUpButton *cEXEColorDepth;
	IBOutlet NSPopUpButton *cEXESwitchPause;
	IBOutlet NSSlider *cEXEGammaSlider;
	
	//Winetricks window
	IBOutlet NSWindow *winetricksWindow;
	IBOutlet NSButton *winetricksRunButton;
	IBOutlet NSButton *winetricksCancelButton;
	IBOutlet NSButton *winetricksUpdateButton;
	IBOutlet NSButton *winetricksRefreshButton;
	IBOutlet NSButton *winetricksDoneButton;
	IBOutlet NSProgressIndicator *winetricksWaitWheel;
	IBOutlet NSTextView *winetricksOutputText;
	IBOutlet NSScrollView *winetricksOutputTextScrollView;
	IBOutlet NSOutlineView *winetricksOutlineView;
	IBOutlet NSTabView *winetricksTabView;
	IBOutlet NSTabViewItem *winetricksTabList;
	NSMutableArray *shPIDs;
	BOOL winetricksCanceled;
	NSDictionary *winetricksList;
	NSDictionary *winetricksFilteredList;
	NSMutableDictionary *winetricksSelectedList;
	NSArray *winetricksInstalledList;
	NSArray *winetricksCachedList;
	IBOutlet NSTableColumn *winetricksTableColumnRun;
	IBOutlet NSTableColumn *winetricksTableColumnInstalled;
	IBOutlet NSTableColumn *winetricksTableColumnDownloaded;
	IBOutlet NSTableColumn *winetricksTableColumnName;
	IBOutlet NSTableColumn *winetricksTableColumnDescription;
	IBOutlet NSSearchField *winetricksSearchField;
    IBOutlet NSButton *enableWinetricksSilentButton;
	IBOutlet NSButton *winetricksCustomCheckbox;
	IBOutlet NSTextField *winetricksCustomLine;
	IBOutlet NSTextField *winetricksCustomLineLabel;
	IBOutlet NSButton *winetricksActionPopup;
	IBOutlet NSMenuItem *winetricksShowDownloadedColumn;
	IBOutlet NSMenuItem *winetricksShowInstalledColumn;

	//extensions window
	IBOutlet NSWindow *extAddEditWindow;
	IBOutlet NSTextField *extExtensionTextField;
	IBOutlet NSTextField *extCommandTextField;
	
	//Modify Mappings Window
	IBOutlet NSWindow *modifyMappingsWindow;
	IBOutlet NSTextField *modifyMappingsMyDocumentsTextField;
	IBOutlet NSTextField *modifyMappingsDesktopTextField;
	IBOutlet NSTextField *modifyMappingsMyVideosTextField;
	IBOutlet NSTextField *modifyMappingsMyMusicTextField;
	IBOutlet NSTextField *modifyMappingsMyPicturesTextField;
    IBOutlet NSTextField *modifyMappingsDownloadsTextField;
    IBOutlet NSTextField *modifyMappingsTemplatesTextField;
}

@property (unsafe_unretained) IBOutlet NSWindow *window;
@property (strong) NSDictionary *winetricksList;
@property (strong) NSDictionary *winetricksFilteredList;
@property (strong) NSMutableDictionary *winetricksSelectedList;
@property (strong) NSArray *winetricksInstalledList;
@property (strong) NSArray *winetricksCachedList;

- (void)sleepWithRunLoopForSeconds:(NSInteger)seconds;
- (void)enableButtons;
- (void)disableButtons;
- (void)systemCommand:(NSString *)commandToRun withArgs:(NSArray *)args;
- (NSString *)systemCommandWithOutputReturned:(NSString *)command;
- (IBAction)topMenuHelpSelected:(id)sender;
- (IBAction)aboutWindow:(id)sender;

//main menu methods
- (IBAction)wineskinWebsiteButtonPressed:(id)sender;
- (IBAction)installWindowsSoftwareButtonPressed:(id)sender;
- (IBAction)chooseExeOKButtonPressed:(id)sender;
- (IBAction)advancedButtonPressed:(id)sender;
- (IBAction)esyncButtonPressed:(id)sender;
- (IBAction)msyncButtonPressed:(id)sender;

//Installer window methods
- (IBAction)chooseSetupExecutableButtonPressed:(id)sender;
- (IBAction)copyAFolderInsideButtonPressed:(id)sender;
- (IBAction)moveAFolderInsideButtonPressed:(id)sender;
- (IBAction)installerCancelButtonPressed:(id)sender;

//advanced menu
- (IBAction)testRunButtonPressed:(id)sender;
- (IBAction)commandLineWineTestButtonPressed:(id)sender;
- (void)runATestRun;
- (IBAction)killWineskinProcessesButtonPressed:(id)sender;

//advanced menu - Configuration Tab
- (void)saveAllData;
- (void)loadAllData;
- (IBAction)windowsExeBrowseButtonPressed:(id)sender;
- (IBAction)extPlusButtonPressed:(id)sender;
- (IBAction)extMinusButtonPressed:(id)sender;
- (IBAction)extEditButtonPressed:(id)sender;

//advanced menu - Tools Tab
- (IBAction)winecfgButtonPressed:(id)sender;
- (void)runWinecfg;
- (IBAction)uninstallerButtonPressed:(id)sender;
- (void)runUninstaller;
- (IBAction)regeditButtonPressed:(id)sender;
- (void)runRegedit;
- (IBAction)taskmgrButtonPressed:(id)sender;
- (void)runTaskmgr;
- (IBAction)rebuildWrapperButtonPressed:(id)sender;
- (IBAction)refreshWrapperButtonPressed:(id)sender;
- (IBAction)changeEngineUsedButtonPressed:(id)sender;
- (void)setEngineList:(NSString *)theFilter;
- (IBAction)changeEngineUsedOkButtonPressed:(id)sender;
- (IBAction)changeEngineUsedCancelButtonPressed:(id)sender;
- (IBAction)changeEngineSearchFilter:(id)sender;
- (IBAction)updateWrapperButtonPressed:(id)sender;
- (IBAction)logsButtonPressed:(id)sender;
- (IBAction)commandLineShellButtonPressed:(id)sender;
- (void)runCmd;

//advanced menu - Options Tab
- (IBAction)alwaysMakeLogFilesCheckBoxButtonPressed:(id)sender;
- (IBAction)mapUserFoldersCheckBoxButtonPressed:(id)sender;
- (IBAction)confirmQuitCheckBoxButtonPressed:(id)sender;
- (IBAction)modifyMappingsButtonPressed:(id)sender;
- (IBAction)fntoggleCheckBoxButton:(id)sender;
- (IBAction)commandCheckBoxButton:(id)sender;
- (IBAction)optionCheckBoxButton:(id)sender;

//advanced menu - Advanced Tab
- (IBAction)WinetricksNoLogsButtonPressed:(id)sender;
- (IBAction)disableCPUsButtonPressed:(id)sender;
- (IBAction)winedbgDisabledButtonPressed:(id)sender;
- (IBAction)geckoButtonPressed:(id)sender;
- (IBAction)monoButtonPressed:(id)sender;
- (IBAction)metahudButtonPress:(id)sender;
- (IBAction)fastmathButtonPress:(id)sender;
- (IBAction)cxmoltenvkButtonPress:(id)sender;

//Winetricks
- (IBAction)winetricksButtonPressed:(id)sender;
- (IBAction)winetricksDoneButtonPressed:(id)sender;
- (IBAction)winetricksRefreshButtonPressed:(id)sender;
- (IBAction)winetricksUpdateButtonPressed:(id)sender;
- (IBAction)winetricksRunButtonPressed:(id)sender;
- (IBAction)winetricksCancelButtonPressed:(id)sender;
- (IBAction)winetricksSelectAllButtonPressed:(id)sender;
- (IBAction)winetricksSelectNoneButtonPressed:(id)sender;
- (IBAction)winetricksSearchFilter:(id)sender;
- (IBAction)enableWinetricksSilentButtonPressed:(id)sender;
- (IBAction)winetricksCustomCommandToggled:(id)sender;
- (IBAction)winetricksToggleColumn:(id)sender;
- (void)winetricksLoadPackageLists;
- (void)setWinetricksBusy:(BOOL)busy;
- (void)runWinetrick;
- (void)doTheDangUpdate;
- (void)winetricksWriteFinished;
- (void)updateWinetrickOutput;
- (NSArray *)makePIDArray:(NSString *)processToLookFor;
// cexe maker
- (IBAction)createCustomExeLauncherButtonPressed:(id)sender;
- (IBAction)cEXESaveButtonPressed:(id)sender;
- (IBAction)cEXECancelButtonPressed:(id)sender;
- (IBAction)cEXEBrowseButtonPressed:(id)sender;
- (IBAction)cEXEIconBrowseButtonPressed:(id)sender;
- (IBAction)cEXEAutomaticButtonPressed:(id)sender;
- (IBAction)cEXEOverrideButtonPressed:(id)sender;
//extensions window
- (IBAction)extSaveButtonPressed:(id)sender;
- (IBAction)extCancelButtonPressed:(id)sender;
//modify mappings window
- (IBAction)modifyMappingsSaveButtonPressed:(id)sender;
- (IBAction)modifyMappingsCancelButtonPressed:(id)sender;
- (IBAction)modifyMappingsResetButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyDocumentsBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyDesktopBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyVideosBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyMusicBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsMyPicturesBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsDownloadsBrowseButtonPressed:(id)sender;
- (IBAction)modifyMappingsTemplatesBrowseButtonPressed:(id)sender;
//ICE
- (void)installEngine;

@end
