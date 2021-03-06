/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSString, NSArray, UINavigationController, UITableViewController, UIViewController;

@interface UIReferenceLibraryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate> {

	NSString* _term;
	NSArray* _definitionValues;
	UINavigationController* _baseNavController;
	UITableViewController* _multiDefViewController;
	UIViewController* _longDefViewController;
	long long _oldPopoverStyle;
	BOOL _enableRotation;
	BOOL _previousIgnoreOrientation;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,copy) id dismissCompletionHandler;              //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundColor;
+(id)_foregroundColor;
+(id)_colorAttributes;
+(id)_diddlyDoViewLineColor;
+(id)_defaultButtonImage;
+(id)_pressedButtonImage;
+(id)_localizedDictionaryTitleAttributes;
+(id)_dictionaryDefinitionAttributes;
+(BOOL)_shouldShowDefineForTerm:(id)arg1 ;
+(BOOL)_shouldShowDefineForTermOfLength:(long long)arg1 ;
+(BOOL)dictionaryHasDefinitionForTerm:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)_backgroundColor;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_foregroundColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutorotate;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(id)dismissCompletionHandler;
-(void)_setPopoverController:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(id)_colorAttributes;
-(void)_dismissModalReferenceView:(id)arg1 ;
-(void)setEnableRotation:(BOOL)arg1 ;
-(void)pushDownloadManager:(id)arg1 ;
-(void)_searchWeb:(id)arg1 ;
-(void)_installDoneButtonOnViewControllerIfNeeded:(id)arg1 ;
-(void)_installRequiredElementsOnViewController:(id)arg1 ;
-(id)_diddlyDoViewLineColor;
-(id)_defaultButtonImage;
-(id)_pressedButtonImage;
-(id)_localizedDictionaryTitleAttributes;
-(id)_dictionaryDefinitionAttributes;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(id)initWithTerm:(id)arg1 ;
-(BOOL)enableRotation;
@end

