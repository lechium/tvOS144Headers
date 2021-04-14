/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <UIKit/UITableViewDataSource.h>

@class UITextField, AlphanumericPINTableViewCell, UITableView, NSString;

@interface PSTextFieldPINView : PINView <UITableViewDataSource> {

	UITextField* _passcodeField;
	AlphanumericPINTableViewCell* _cell;
	UITableView* _table;
	BOOL _usesNumericKeyboard;

}

@property (assign,nonatomic) BOOL usesNumericKeyboard;              //@synthesize usesNumericKeyboard=_usesNumericKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setBlocked:(BOOL)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)layoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTextFieldKeyboardType:(long long)arg1 ;
-(void)setTextFieldKeyboardAppearance:(long long)arg1 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)deleteLastCharacter;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(void)okButtonPressed:(id)arg1 ;
-(void)setUsesNumericKeyboard:(BOOL)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(BOOL)usesNumericKeyboard;
@end

