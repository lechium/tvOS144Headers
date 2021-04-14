/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIPrintPanelViewController, NSString, UIPrinterAttributesService, UIPrintPreviewViewController, UIPrinterBrowserViewController, _UIPrintMessageAndSpinnerView;

@interface UIPrintPanelTableViewController : UITableViewController <UITextFieldDelegate> {

	UIPrintPanelViewController* _printPanelViewController;
	long long _settingsRow;
	long long _rangeRow;
	long long _copiesRow;
	long long _duplexRow;
	long long _grayscaleRow;
	long long _stapleRow;
	long long _punchRow;
	long long _paperRow;
	long long _jobAccountIDRow;
	long long _annotationsRow;
	long long _settingsSection;
	BOOL _contactingPrinter;
	NSString* _printerWarning;
	UIPrinterAttributesService* _printerAttributesService;
	BOOL _settingsExpanded;
	CGRect _savedViewFrame;
	UIPrintPreviewViewController* _printPreviewViewController;
	UIPrinterBrowserViewController* _browserController;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keyCommands;
-(unsigned long long)supportedInterfaceOrientations;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)accessibilityPerformMagicTap;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)showCancelButton;
-(void)updateCopies:(id)arg1 ;
-(void)stopPrinterWarningPolling;
-(void)updateStaple:(id)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)_updatePrintTableView;
-(BOOL)shouldEnablePrintButton;
-(void)showContacting;
-(void)startPrinterWarningPoll;
-(double)heightOfPreviewView;
-(void)showPreviewGenerating;
-(void)setShowPreviewGenerating:(BOOL)arg1 ;
-(void)_updateTableFooterViewSize;
-(void)printButtonPressed:(id)arg1 ;
-(void)updateDuplex:(id)arg1 ;
-(void)updateGrayscale:(id)arg1 ;
-(void)updatePunch:(id)arg1 ;
-(void)updateAnnotations:(id)arg1 ;
-(void)updateJobAccountID:(id)arg1 ;
-(id)textForSettings;
-(void)updateSettingsSummaryText;
-(id)jobAccountTextField;
-(void)selectJobAccountID;
-(void)dismissKeyboardIfNeccessary;
-(void)promptForJobAccountID;
-(void)setShowContactingPrinter:(BOOL)arg1 ;
-(void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3 ;
-(id)pdfFileURL;
-(void)clearPrintPanelViewController;
-(void)moreButtonPushed:(id)arg1 ;
-(void)updatePageRange:(NSRange)arg1 ;
-(void)updatePageRangeText;
@end

