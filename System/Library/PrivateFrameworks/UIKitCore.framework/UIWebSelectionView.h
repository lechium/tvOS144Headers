/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIWebSelectionHandle, UIWebSelectionOutline, UIWebTextRangeView, UIWebDocumentView, UIWebSelectionNode, UIWebSelectionGraph, UIWebSelection;

@interface UIWebSelectionView : UIView {

	UIView* _center;
	CGRect _selectionFrame;
	UIWebSelectionHandle* _top;
	UIWebSelectionHandle* _right;
	UIWebSelectionHandle* _bottom;
	UIWebSelectionHandle* _left;
	UIWebSelectionOutline* _outline;
	UIWebTextRangeView* _textRangeView;
	UIWebDocumentView* _documentView;
	UIWebSelectionNode* _selectionNode;
	UIWebSelectionGraph* _selectionGraph;
	double _growThreshold;
	double _shrinkThreshold;
	SCD_Struct_UI135 _autoscrollData;
	SCD_Struct_UI137 _rangedSelectionData;
	int _nestedLayoutCalls;
	BOOL _calloutBarIsHiddenBeforeRotation;
	BOOL _rotating;
	int _selectionInFixedPosition;
	BOOL _creatingSelection;

}

@property (nonatomic,retain) UIWebSelectionNode * selectionNode;              //@synthesize selectionNode=_selectionNode - In the implementation block
@property (assign,nonatomic) CGRect selectionFrame; 
@property (nonatomic,readonly) UIWebSelection * selection; 
@property (assign,nonatomic) BOOL creatingSelection;                          //@synthesize creatingSelection=_creatingSelection - In the implementation block
-(void)dealloc;
-(id)handles;
-(UIWebSelection *)selection;
-(CGRect)visibleRect;
-(void)removeFromSuperview;
-(BOOL)isHorizontalWritingMode;
-(void)resetSelection;
-(void)clearSelection;
-(void)_didScroll;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)selectionChanged;
-(id)activeHandle;
-(void)showControls;
-(id)tintView;
-(void)updateSelectionRects;
-(void)stopAnyAutoscrolling;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(id)initWithWebDocumentView:(id)arg1 ;
-(void)hideControls;
-(CGRect)selectionFrame;
-(void)startSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)updateSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)endSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)scaleChanged;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(void)hideControlsBeforeRotation;
-(void)showControlsAfterRotation;
-(CGRect)selectionBoundingRect;
-(void)showRangeSelection;
-(void)setCreatingSelection:(BOOL)arg1 ;
-(void)updateFrameAndHandlesWithAnimation:(BOOL)arg1 ;
-(id)handleWithPosition:(int)arg1 ;
-(BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2 ;
-(void)onBeforeScrollOrZoomHidingSelection:(BOOL)arg1 ;
-(void)onAfterScrollOrZoomShowingSelection:(BOOL)arg1 ;
-(void)updateTextRangeViewSelectionRects;
-(void)showCopyCalloutWithAnimation:(BOOL)arg1 ;
-(void)hideCopyCallout;
-(CGRect)fetchSelectionBoundingTextSelectionRect;
-(CGRect)fetchSelectionBoundingRect;
-(void)setSelectionFrame:(CGRect)arg1 ;
-(void)setSelectionNode:(UIWebSelectionNode *)arg1 ;
-(void)considerFlipping;
-(void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2 ;
-(void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2 ;
-(id)scroller;
-(int)autoscrollDirectionsForHandle:(id)arg1 ;
-(void)touchChanged:(id)arg1 forHandleInText:(id)arg2 ;
-(void)shiftWebRangeSelectionAnimationDidStop;
-(id)nodeInPristineGraphAtPoint:(CGPoint)arg1 ;
-(UIWebSelectionNode *)selectionNode;
-(BOOL)activelyManipulatingTextSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
-(void)calloutBar:(id)arg1 selectedCommand:(id)arg2 ;
-(void)setSelectionFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(BOOL)canFlip;
-(void)updateAutoscrollForHandle:(id)arg1 ;
-(void)_subscribeToScrollNotificationsIfNecessary:(id)arg1 ;
-(BOOL)creatingSelection;
@end

