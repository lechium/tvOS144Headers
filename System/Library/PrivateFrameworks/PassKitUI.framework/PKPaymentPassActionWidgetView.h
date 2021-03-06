/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPaymentPassActionWidgetViewDelegate;
@class NSArray, NSString, PKFamilyMember, PKPeerPaymentAccount, PKPaymentPass;

@interface PKPaymentPassActionWidgetView : UIView {

	NSArray* _displayableWidgets;
	NSString* _phoneNumber;
	NSString* _website;
	NSString* _email;
	PKFamilyMember* _currentUser;
	unsigned long long _widgetViewStyle;
	BOOL _usesAccessibilityLayout;
	unsigned long long _numberOfWidgetsPerRow;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPaymentPass* _paymentPass;
	id<PKPaymentPassActionWidgetViewDelegate> _delegate;

}

@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;                              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                            //@synthesize paymentPass=_paymentPass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentPassActionWidgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKFamilyMember * currentUser;                                           //@synthesize currentUser=_currentUser - In the implementation block
-(id<PKPaymentPassActionWidgetViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentPassActionWidgetViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKFamilyMember *)currentUser;
-(void)setCurrentUser:(PKFamilyMember *)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)numberOfRows;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowBounds:(CGRect)arg2 ;
-(CGRect)widgetBoundsForRowWithBounds:(CGRect)arg1 ;
-(void)updateNumberOfWidgetsPerRow;
-(double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 ;
-(BOOL)hasSingleColumnLayout;
-(void)cleanUpExistingWidgets;
-(id)_createButtonForTitle:(id)arg1 image:(id)arg2 ;
-(id)_titleForAddMoneyWidgetForActions:(id)arg1 ;
-(void)updateUseAccessibilityLayout;
-(void)updateWidgetsAccessibilityLayoutState;
-(unsigned long long)numberOfWidgetsPerRowWithSize:(CGSize)arg1 ;
-(unsigned long long)numberOfRowsWithWidgetsPerRow:(unsigned long long)arg1 ;
-(void)_determineWidgetContentWithAvailableWidgets;
-(double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowSize:(CGSize)arg2 ;
@end

