/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSIndexPath, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface TVPTableView : UITableView <UIGestureRecognizerDelegate> {

	NSIndexPath* _indexPathForDirectlyFocusedItem;
	UITapGestureRecognizer* _playButtonRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	NSIndexPath* _indexPathForLastFocusedItem;

}

@property (assign,nonatomic,__weak) id<TVPTableViewDelegate> delegate; 
@property (nonatomic,copy,readonly) NSIndexPath * indexPathForLastFocusedItem;              //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
-(void)_performBlockWithFocusedCellIndexPath:(/*^block*/id)arg1 ;
@end

