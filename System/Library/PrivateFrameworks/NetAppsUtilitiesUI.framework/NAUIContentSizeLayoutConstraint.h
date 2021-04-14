/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/NSLayoutConstraint.h>

@class NAUITextStyleDescriptor, NSString;

@interface NAUIContentSizeLayoutConstraint : NSLayoutConstraint {

	id _autoitem;
	id _preferredContentSizeDidChangeObserver;
	BOOL _isConstantUpdatingConstraint;
	NAUITextStyleDescriptor* _dynamicTextStyleDescriptor;
	BOOL _allowsAccessibilityTextStyleSizes;
	double _textStyleDefaultBodyLeading;
	BOOL _autoUpdatingConstantShrinks;
	double _defaultConstant;
	double _additionalConstant;
	NSString* _textStyle;
	/*^block*/id _constantLoadingBlock;

}

@property (nonatomic,copy) id constantLoadingBlock;                         //@synthesize constantLoadingBlock=_constantLoadingBlock - In the implementation block
@property (assign,nonatomic) BOOL autoUpdatingConstantShrinks;              //@synthesize autoUpdatingConstantShrinks=_autoUpdatingConstantShrinks - In the implementation block
@property (assign,nonatomic) double defaultConstant;                        //@synthesize defaultConstant=_defaultConstant - In the implementation block
@property (assign,nonatomic) double additionalConstant;                     //@synthesize additionalConstant=_additionalConstant - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                            //@synthesize textStyle=_textStyle - In the implementation block
+(id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8 additionalConstant:(double)arg9 initialize:(BOOL)arg10 ;
+(double)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2 ;
+(id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantLoadingBlock:(/*^block*/id)arg3 ;
+(id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8 ;
+(id)constraintForAutoitem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 defaultConstant:(double)arg7 ;
+(id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantWidthSizingStringsLoadingBlock:(/*^block*/id)arg3 ;
+(id)baselineConstraintForAutoitem:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 defaultConstant:(double)arg5 ;
+(id)baselineConstraintForView:(id)arg1 attribute:(long long)arg2 relation:(long long)arg3 toAutoitem:(id)arg4 defaultConstant:(double)arg5 ;
-(void)dealloc;
-(void)setTextStyle:(NSString *)arg1 ;
-(NSString *)textStyle;
-(void)setDefaultConstant:(double)arg1 ;
-(double)defaultConstant;
-(void)_updatePreferredContentSize;
-(double)_defaultConstantByFixingUpDefaultConstant:(double)arg1 ;
-(void)_forceUpdatePreferredContentSize;
-(void)setConstantLoadingBlock:(id)arg1 ;
-(void)_reloadPreferredContentSize:(BOOL)arg1 ;
-(void)setAutoUpdatingConstantShrinks:(BOOL)arg1 ;
-(BOOL)autoUpdatingConstantShrinks;
-(double)additionalConstant;
-(void)setAdditionalConstant:(double)arg1 ;
-(id)constantLoadingBlock;
@end

