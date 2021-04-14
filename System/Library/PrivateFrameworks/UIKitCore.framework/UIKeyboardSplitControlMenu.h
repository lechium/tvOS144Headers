/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>
#import <UIKitCore/_UIInputSwitcherSplitMenu.h>

@class NSArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView <_UIInputSwitcherSplitMenu> {

	CGSize m_preferredSize;
	NSArray* _items;
	/*^block*/id _finishSplitTransitionBlock;

}

@property (nonatomic,copy) id finishSplitTransitionBlock;              //@synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)numberOfItems;
-(CGSize)preferredSize;
-(id)finishSplitTransitionBlock;
-(void)setFinishSplitTransitionBlock:(id)arg1 ;
-(unsigned long long)defaultSelectedIndex;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(void)didFinishSplitTransition;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)arg1 ;
-(int)visibleItemForIndex:(unsigned long long)arg1 ;
-(void)actionForItem:(id)arg1 ;
-(void)setSplitAndUndocked:(BOOL)arg1 ;
@end
