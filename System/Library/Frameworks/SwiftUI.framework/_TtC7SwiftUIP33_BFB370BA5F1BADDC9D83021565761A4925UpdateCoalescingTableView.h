/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SwiftUI/SwiftUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface _TtC7SwiftUIP33_BFB370BA5F1BADDC9D83021565761A4925UpdateCoalescingTableView : UITableView <UIGestureRecognizerDelegate> {

	 programmaticSelectionDelegate;
	 longPressDelegate;
	 longPressGestureRecognizer;
	 visibleCellsUpdate;
	 ignoreGraphUpdates;
	 pendingGraphUpdate;
	 previousHorizontalMargin;
	 _lastUpdateSeed;
	 bridgedState;
	 shouldDetermineInsetStyle;

}

@property (assign,nonatomic) CGRect bounds; 
+(BOOL)_isInternalTableView;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)layoutMarginsDidChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleLongPressWithRecognizer:(id)arg1 ;
@end

