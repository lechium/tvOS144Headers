/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate, CNPresenterDelegate;
@class UIResponder, CNPropertyGroupItem;

@interface CNPropertyCell : CNLabeledCell {

	BOOL _allowsEditing;
	BOOL _ignoreSuggested;
	BOOL _forceSuggested;
	id _property;
	UIResponder* _firstResponderItem;
	double _labelWidth;
	id<CNPropertyCellDelegate> _delegate;
	id<CNPresenterDelegate> _presentingDelegate;

}

@property (assign,nonatomic,__weak) id property;                                             //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UIResponder * firstResponderItem;                             //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                             //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL ignoreSuggested;                                           //@synthesize ignoreSuggested=_ignoreSuggested - In the implementation block
@property (assign,nonatomic) BOOL forceSuggested;                                            //@synthesize forceSuggested=_forceSuggested - In the implementation block
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (assign,nonatomic) double labelWidth;                                              //@synthesize labelWidth=_labelWidth - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)property;
-(void)setProperty:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)labelString;
-(void)copy:(id)arg1 ;
-(BOOL)isSuggested;
-(id)valueString;
-(CNPropertyGroupItem *)propertyItem;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(void)performDefaultAction;
-(void)performAccessoryAction;
-(UIResponder *)firstResponderItem;
-(id<CNPresenterDelegate>)presentingDelegate;
-(void)setIgnoreSuggested:(BOOL)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)setForceSuggested:(BOOL)arg1 ;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)setLabelWidth:(double)arg1 ;
-(BOOL)forceSuggested;
-(BOOL)ignoreSuggested;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
-(double)labelWidth;
@end

