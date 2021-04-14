/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@protocol PKSwitchSpinnerTableCellDelegate;
@class UIActivityIndicatorView, UISwitch;

@interface PKSwitchSpinnerTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	UISwitch* _switch;
	BOOL _showSpinner;
	id<PKSwitchSpinnerTableCellDelegate> _delegate;

}
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)_updateSubviews;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)_switchToggled:(id)arg1 ;
-(void)setSwitchIsOn:(BOOL)arg1 ;
@end
