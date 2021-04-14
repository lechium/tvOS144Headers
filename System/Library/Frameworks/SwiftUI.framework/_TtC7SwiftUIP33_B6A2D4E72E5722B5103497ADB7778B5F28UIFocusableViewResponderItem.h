/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SwiftUI/SwiftUI-Structs.h>
#import <UIKit/UIFocusItem.h>
#import <libobjc.A.dylib/_UIFocusRegionContainer.h>

@class NSArray;

@interface _TtC7SwiftUIP33_B6A2D4E72E5722B5103497ADB7778B5F28UIFocusableViewResponderItem : NSObject <UIFocusItem, _UIFocusRegionContainer> {

	 base;
	 host;

}

@property (readonly,nonatomic) CGRect frame; 
@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) id<UIFocusItemContainer> focusItemContainer; 
-(id)init;
-(CGRect)frame;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(NSArray *)preferredFocusEnvironments;
-(void)updateFocusIfNeeded;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_preferredFocusRegionCoordinateSpace;
@end

