/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIFocusedInterfaceActionPressDelegate.h>

@class UIView, UIScrollView, NSArray, UILongPressGestureRecognizer, _UIInterfaceActionSelectionDelayGestureRecognizer, UIGestureRecognizer, NSMutableSet, _UIInterfaceActionSelectByPressGestureRecognizer, NSPointerArray, NSString;

@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate> {

	BOOL _scrubbingEnabled;
	BOOL _selectByPressGestureEnabled;
	BOOL _selectionFeedbackEnabled;
	UIView* _trackableContainerView;
	UIScrollView* _actionsScrollView;
	NSArray* _representationViews;
	UILongPressGestureRecognizer* _selectionGestureRecognizer;
	_UIInterfaceActionSelectionDelayGestureRecognizer* _selectionDelayGestureRecognizer;
	UIGestureRecognizer* _systemProvidedGestureRecognizer;
	NSMutableSet* _viewsRequiringSelectionGestureDisabling;
	_UIInterfaceActionSelectByPressGestureRecognizer* _selectByPressGestureRecognizer;
	NSPointerArray* _weakCooperatingSelectionTrackingControllers;
	id _scrollViewWillBeginDraggingNotificationToken;
	id _scrollViewDidEndDraggingNotificationToken;
	id _scrollViewDidEndDeceleratingNotificationToken;
	CGPoint _actionSelectionInitialLocationInContainerView;

}

@property (nonatomic,readonly) CGPoint actionSelectionInitialLocationInContainerView;                                            //@synthesize actionSelectionInitialLocationInContainerView=_actionSelectionInitialLocationInContainerView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * selectionGestureRecognizer;                                        //@synthesize selectionGestureRecognizer=_selectionGestureRecognizer - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionSelectionDelayGestureRecognizer * selectionDelayGestureRecognizer;              //@synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * systemProvidedGestureRecognizer;                                            //@synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * viewsRequiringSelectionGestureDisabling;                                           //@synthesize viewsRequiringSelectionGestureDisabling=_viewsRequiringSelectionGestureDisabling - In the implementation block
@property (nonatomic,retain) _UIInterfaceActionSelectByPressGestureRecognizer * selectByPressGestureRecognizer;                  //@synthesize selectByPressGestureRecognizer=_selectByPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSPointerArray * weakCooperatingSelectionTrackingControllers;                                       //@synthesize weakCooperatingSelectionTrackingControllers=_weakCooperatingSelectionTrackingControllers - In the implementation block
@property (nonatomic,retain) id scrollViewWillBeginDraggingNotificationToken;                                                    //@synthesize scrollViewWillBeginDraggingNotificationToken=_scrollViewWillBeginDraggingNotificationToken - In the implementation block
@property (nonatomic,retain) id scrollViewDidEndDraggingNotificationToken;                                                       //@synthesize scrollViewDidEndDraggingNotificationToken=_scrollViewDidEndDraggingNotificationToken - In the implementation block
@property (nonatomic,retain) id scrollViewDidEndDeceleratingNotificationToken;                                                   //@synthesize scrollViewDidEndDeceleratingNotificationToken=_scrollViewDidEndDeceleratingNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) UIView * trackableContainerView;                                                             //@synthesize trackableContainerView=_trackableContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * actionsScrollView;                                                            //@synthesize actionsScrollView=_actionsScrollView - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                                              //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectByPressGestureEnabled;                                                                   //@synthesize selectByPressGestureEnabled=_selectByPressGestureEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectionFeedbackEnabled;                                                                      //@synthesize selectionFeedbackEnabled=_selectionFeedbackEnabled - In the implementation block
@property (nonatomic,retain) NSArray * representationViews;                                                                      //@synthesize representationViews=_representationViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UILongPressGestureRecognizer *)selectionGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)selectionFeedbackEnabled;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)setCooperatingSelectionTrackingControllers:(id)arg1 ;
-(id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2 ;
-(BOOL)scrubbingEnabled;
-(void)setRepresentationViews:(NSArray *)arg1 ;
-(void)setSelectByPressGestureEnabled:(BOOL)arg1 ;
-(id)_interfaceActionOfFocusedRepresentationView;
-(void)_initializeSelectionGestureRecognizer;
-(void)_registerForScrollViewNotifications;
-(void)_unregisterForScrollViewNotifications;
-(void)setWeakCooperatingSelectionTrackingControllers:(NSPointerArray *)arg1 ;
-(void)setSelectByPressGestureRecognizer:(_UIInterfaceActionSelectByPressGestureRecognizer *)arg1 ;
-(id)_allActionViewsIncludingCooperatingActionViews;
-(void)_invokeHandlerForInterfaceAction:(id)arg1 ;
-(void)_setSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)_handleActionSelectionGestureRecognizer:(id)arg1 ;
-(id)_allGestureRecognizers;
-(void)_handleSystemProvidedGestureRecognizer:(id)arg1 ;
-(UIView *)trackableContainerView;
-(UIScrollView *)actionsScrollView;
-(BOOL)_isPresentedAndVisible;
-(BOOL)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1 ;
-(id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1 ;
-(void)_clearSystemProvidedGestureRecognizer;
-(id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1 ;
-(void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_noteScrollView:(id)arg1 isUserScrolling:(BOOL)arg2 ;
-(BOOL)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1 ;
-(void)handlePressedFocusedInterfaceAction:(id)arg1 ;
-(id)focusedInterfaceAction;
-(void)deselectAllActions;
-(void)setTrackableContainerView:(UIView *)arg1 ;
-(void)setActionsScrollView:(UIScrollView *)arg1 ;
-(BOOL)selectByPressGestureEnabled;
-(void)setSelectionFeedbackEnabled:(BOOL)arg1 ;
-(NSArray *)representationViews;
-(CGPoint)actionSelectionInitialLocationInContainerView;
-(_UIInterfaceActionSelectionDelayGestureRecognizer *)selectionDelayGestureRecognizer;
-(UIGestureRecognizer *)systemProvidedGestureRecognizer;
-(NSMutableSet *)viewsRequiringSelectionGestureDisabling;
-(_UIInterfaceActionSelectByPressGestureRecognizer *)selectByPressGestureRecognizer;
-(NSPointerArray *)weakCooperatingSelectionTrackingControllers;
-(id)scrollViewWillBeginDraggingNotificationToken;
-(void)setScrollViewWillBeginDraggingNotificationToken:(id)arg1 ;
-(id)scrollViewDidEndDraggingNotificationToken;
-(void)setScrollViewDidEndDraggingNotificationToken:(id)arg1 ;
-(id)scrollViewDidEndDeceleratingNotificationToken;
-(void)setScrollViewDidEndDeceleratingNotificationToken:(id)arg1 ;
@end

