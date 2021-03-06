/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>
#import <UIKit/UISelectionInteractionAssistant.h>

@class UIView, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UITextInteraction, _UIKeyboardTextSelectionController, _UIKeyboardBasedNonEditableTextSelectionGestureController, UIWebSelectionView, UIWebSelection, NSString, UIKeyboardTaskQueue;

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate, UISelectionInteractionAssistant> {

	UIView* _view;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapAndAHalfRecognizer* _tapAndAHalfGestureRecognizer;
	UILongPressGestureRecognizer* _forcePressGestureRecognizer;
	UITextInteraction* _textInteractions;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardBasedNonEditableTextSelectionGestureController* _textSelectionGestureController;
	BOOL _enabled;
	UIWebSelectionView* _selectionView;

}

@property (nonatomic,readonly) UIWebSelection * selection; 
@property (nonatomic,readonly) UIView * view;                                                             //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIWebSelectionView * selectionView;                                          //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                   //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * forcePressGestureRecognizer;                  //@synthesize forcePressGestureRecognizer=_forcePressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController;              //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(UIWebSelection *)selection;
-(UIView *)view;
-(UIWebSelectionView *)selectionView;
-(void)clearSelection;
-(id)scrollView;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1 ;
-(void)setGestureRecognizers;
-(void)selectionChanged;
-(void)showSelectionCommands;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)setSelectionView:(UIWebSelectionView *)arg1 ;
-(void)configureForSelectionMode;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)configureForHighlightMode;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(void)updateSelectionRects:(BOOL)arg1 ;
-(void)rangedMagnifierWithState:(long long)arg1 atPoint:(CGPoint)arg2 ;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(void)resignedFirstResponder;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)initializeSelectionView;
-(void)makeWebSelection:(id)arg1 ;
-(void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1 ;
-(CGRect)selectionFrame;
-(void)addSelectionViewIfNeeded;
-(void)scaleChanged;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(void)hideCallout;
-(void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2 ;
-(BOOL)isSelectionGestureRecognizer:(id)arg1 ;
-(void)tap:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3 ;
-(UILongPressGestureRecognizer *)forcePressGestureRecognizer;
-(void)setForcePressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

