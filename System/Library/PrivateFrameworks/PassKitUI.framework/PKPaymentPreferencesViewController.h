/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKAddressEditorViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class PKPassSnapshotter, UITextField, NSIndexPath, PKPaymentPreferenceButtonCell, PKPaymentPass, UISwitch, NSArray, PKContactFormatValidator, UITableView, NSString;

@interface PKPaymentPreferencesViewController : UIViewController <UITextFieldDelegate, PKAddressEditorViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	PKPassSnapshotter* _passSnapshotter;
	UITextField* _currentEditingField;
	NSIndexPath* _currentEditingIndexPath;
	PKPaymentPreferenceButtonCell* _sizingButtonCell;
	PKPaymentPass* _paymentPassForBillingErrors;
	PKPaymentPass* _currentlySelectedPaymentPass;
	UISwitch* _peerPaymentAccountPaymentSwitch;
	NSArray* _latestPreferences;
	BOOL _keyboardVisible;
	unsigned short _layoutRecursionCounter;
	BOOL _preferredContentSizeUpdateDeferred;
	PKContactFormatValidator* _contactFormatValidator;
	BOOL _isEditingFieldThatWasOriginallyInvalid;
	NSArray* _preferences;
	long long _style;
	UITableView* _tableView;
	/*^block*/id _handler;
	id _pickedContactPropertyHandler;
	id _pickedContactHandler;

}

@property (nonatomic,copy) id pickedContactPropertyHandler;              //@synthesize pickedContactPropertyHandler=_pickedContactPropertyHandler - In the implementation block
@property (nonatomic,copy) id pickedContactHandler;                      //@synthesize pickedContactHandler=_pickedContactHandler - In the implementation block
@property (nonatomic,retain) NSArray * preferences;                      //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,readonly) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setHandler:(id)arg1 ;
-(long long)style;
-(id)handler;
-(NSArray *)preferences;
-(void)setPreferences:(NSArray *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITableView *)tableView;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(id)pk_childrenForAppearance;
-(id)initWithStyle:(long long)arg1 preferences:(id)arg2 title:(id)arg3 handler:(/*^block*/id)arg4 contactFormatValidator:(id)arg5 ;
-(void)addressSearcherViewControllerDidCancel:(id)arg1 ;
-(void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2 ;
-(void)addressEditorViewControllerDidCancel:(id)arg1 ;
-(void)setErrors:(id)arg1 animated:(BOOL)arg2 ;
-(void)setErrors:(id)arg1 selectedPass:(id)arg2 animated:(BOOL)arg3 ;
-(void)setErrors:(id)arg1 otherPass:(id)arg2 animated:(BOOL)arg3 ;
-(void)textDidChange:(id)arg1 ;
-(BOOL)_isPaymentStyle;
-(BOOL)_isViewTranslucent;
-(void)_updateNavigationBarButtons;
-(void)hideTextField:(id)arg1 ;
-(BOOL)_shouldUpdatePreferredContentSize;
-(void)_updateContactAndForceSelection:(BOOL)arg1 ;
-(void)_cleanupInlineEdits;
-(void)applePayCashSwitchValueChanged:(id)arg1 ;
-(id)_cellOfClass:(Class)arg1 ;
-(id)_peerPaymentAccountPaymentSwitch;
-(id)_cellForNamePreference:(id)arg1 row:(unsigned long long)arg2 ;
-(id)_cellForPreference:(id)arg1 row:(unsigned long long)arg2 ;
-(void)_showAddressPickerForPreference:(id)arg1 ;
-(void)_startInlineEditingForPreference:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)_showContactsPickerForPreference:(id)arg1 ;
-(id)_hyperlinkFooterViewForPreference:(id)arg1 ;
-(void)_editPreferenceAtIndexPath:(id)arg1 ;
-(id)_requiredKeysForPreference:(id)arg1 contact:(id)arg2 ;
-(void)_showAddressEditorForContact:(id)arg1 title:(id)arg2 requiredKeys:(id)arg3 highlightedKeys:(id)arg4 errors:(id)arg5 ;
-(void)_presentMeCardAlertControllerWithContact:(id)arg1 contactKey:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_checkFormatOfTextField:(id)arg1 forBeginEditing:(BOOL)arg2 ;
-(BOOL)_saveUpdatedContact:(id)arg1 contactKey:(id)arg2 preference:(id)arg3 atIndex:(long long)arg4 ;
-(BOOL)_updateMeCardWithNewContact:(id)arg1 oldContact:(id)arg2 forKey:(id)arg3 usingPreference:(id)arg4 ;
-(void)_savePickedContact:(id)arg1 inPreference:(id)arg2 ;
-(void)setPickedContactHandler:(id)arg1 ;
-(void)setPickedContactPropertyHandler:(id)arg1 ;
-(void)clearErrorsForPreference:(Class)arg1 ;
-(void)_setContactHandlersForPreference:(id)arg1 ;
-(id)pickedContactPropertyHandler;
-(id)pickedContactHandler;
@end

