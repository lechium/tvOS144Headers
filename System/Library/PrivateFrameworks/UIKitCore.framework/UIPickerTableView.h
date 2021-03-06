/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableIndexSet, UIColor, NSMutableArray, NSString;

@interface UIPickerTableView : UITableView <UITableViewDelegate> {

	CGRect _selectionBarRect;
	long long _selectionBarRow;
	NSMutableIndexSet* _checkedRows;
	double _lastClickedOffset;
	long long _lastSelectedRow;
	UIColor* _textColor;
	CGRect _visibleRect;
	NSMutableArray* _referencingCells;
	struct {
		unsigned allowsMultipleSelection : 1;
		unsigned scrollingDirection : 2;
		unsigned didSelectDisabled : 1;
		unsigned skipRowChangeNotifications : 1;
		unsigned scrollingForSelection : 1;
		unsigned pickerViewImplementsSelectionBarChanged : 2;
		unsigned cancellingAnimation : 1;
		unsigned updatingContentInset : 1;
	}  _pickerTableFlags;
	BOOL _playsFeedback;
	BOOL _generatorActivated;

}

@property (assign,setter=_setSelectionBarRow:,nonatomic) long long selectionBarRow;                     //@synthesize selectionBarRow=_selectionBarRow - In the implementation block
@property (assign,nonatomic) BOOL generatorActivated;                                                   //@synthesize generatorActivated=_generatorActivated - In the implementation block
@property (assign,nonatomic) CGRect selectionBarRect;                                                   //@synthesize selectionBarRect=_selectionBarRect - In the implementation block
@property (assign,nonatomic) long long lastSelectedRow;                                                 //@synthesize lastSelectedRow=_lastSelectedRow - In the implementation block
@property (setter=_setPlaysFeedback:,getter=_playsFeedback) BOOL playsFeedback;                         //@synthesize playsFeedback=_playsFeedback - In the implementation block
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * _textColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isInternalTableView;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UIColor *)_textColor;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)_containerView;
-(void)_scrollViewDidInterruptDecelerating:(id)arg1 ;
-(id)_pickerView;
-(void)_updateContentInsets;
-(long long)_contentInsetAdjustmentBehavior;
-(void)_setTextColor:(id)arg1 ;
-(BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)_visibleBounds;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(long long)selectionBarRow;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 visibleRect:(CGRect)arg3 ;
-(void)_setPlaysFeedback:(BOOL)arg1 ;
-(BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 updateChecked:(BOOL)arg4 ;
-(BOOL)isRowChecked:(long long)arg1 ;
-(void)setSelectionBarRect:(CGRect)arg1 ;
-(CGRect)selectionBarRect;
-(void)_setContentOffset:(CGPoint)arg1 notify:(BOOL)arg2 ;
-(BOOL)selectRow:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(id)_anyDateLabel;
-(void)_setSelectionBarRow:(long long)arg1 ;
-(CGPoint)contentOffsetForRowAtIndexPath:(id)arg1 ;
-(void)_notifyContentOffsetChange;
-(id)_checkedRows;
-(void)_rectChangedWithNewSize:(CGSize)arg1 oldSize:(CGSize)arg2 ;
-(double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2 ;
-(double)_viewYForUnitY:(double)arg1 ;
-(double)_rotationForCellCenterY:(double)arg1 ;
-(double)_distanceToCenterForY:(double)arg1 ;
-(double)_yForY:(double)arg1 ;
-(double)_unitYForViewY:(double)arg1 ;
-(double)_zForUnitY:(double)arg1 ;
-(CATransform3D)_transformForCellAtY:(double)arg1 ;
-(void)_playClickIfNecessary;
-(BOOL)_beginTrackingWithEvent:(id)arg1 ;
-(BOOL)didSelectDisabled:(BOOL)arg1 ;
-(void)_deactivateFeedbackGeneratorIfNeeded;
-(void)_scrollingFinished;
-(CGRect)_selectionBarRectForBounds:(CGRect)arg1 ;
-(double)_zCoordinateForYCoordinate:(double)arg1 ;
-(BOOL)_shouldWrapCells;
-(long long)lastSelectedRow;
-(void)setLastSelectedRow:(long long)arg1 ;
-(BOOL)_playsFeedback;
-(BOOL)generatorActivated;
-(void)setGeneratorActivated:(BOOL)arg1 ;
@end

