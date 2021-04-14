/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualSeparatorDisplaying.h>
#import <UIKit/UIInterfaceActionVisualSectionSeparatorDisplaying.h>

@class _UIInterfaceActionSeparatorConstraintController, NSString;

@interface _UIInterfaceActionVibrantSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> {

	double _horizontalLineLeadingInset;
	_UIInterfaceActionSeparatorConstraintController* _separatorViewConstraints;

}

@property (nonatomic,retain,readonly) _UIInterfaceActionSeparatorConstraintController * separatorViewConstraints;              //@synthesize separatorViewConstraints=_separatorViewConstraints - In the implementation block
@property (assign,nonatomic) double constantAxisDimension; 
@property (assign,nonatomic) double horizontalLineLeadingInset;                                                                //@synthesize horizontalLineLeadingInset=_horizontalLineLeadingInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)updateConstraints;
-(void)setHorizontalLineLeadingInset:(double)arg1 ;
-(void)setConstantAxisDimension:(double)arg1 ;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(double)constantAxisDimension;
-(long long)constantSizedAxis;
-(void)_updateContentDirectionalInsets;
-(double)horizontalLineLeadingInset;
-(_UIInterfaceActionSeparatorConstraintController *)separatorViewConstraints;
-(void)_setupEffectView;
@end

