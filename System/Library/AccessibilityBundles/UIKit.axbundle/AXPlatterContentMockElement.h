/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIView;

@interface AXPlatterContentMockElement : UIAccessibilityElement {

	id _sourceElement;
	UIView* _sourceView;

}

@property (nonatomic,retain) id sourceElement;                 //@synthesize sourceElement=_sourceElement - In the implementation block
@property (nonatomic,retain) UIView * sourceView;              //@synthesize sourceView=_sourceView - In the implementation block
-(id)description;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(CGRect)accessibilityFrame;
-(void)setSourceView:(UIView *)arg1 ;
-(UIView *)sourceView;
-(BOOL)accessibilityRespondsToUserInteraction;
-(id)sourceElement;
-(void)setSourceElement:(id)arg1 ;
@end

