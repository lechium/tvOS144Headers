/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXAutoScrollerDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@protocol PXSwipeSelectionManagerDelegate;
@class UIScrollView, PXSectionedSelectionManager, UIMultiSelectInteraction, PXIndexPathSet, PXUIAutoScroller, NSString;

@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver> {

	SCD_Struct_PX37 _needsUpdateFlags;
	struct {
		BOOL respondsToItemIndexPathAtLocation;
		BOOL respondsToItemIndexPathClosestLeadingLocation;
		BOOL respondsToItemIndexPathClosestAboveLocation;
		BOOL respondsToShouldSelectItemAtIndexPath;
		BOOL respondsToShouldBeginSelectionAtLocation;
		BOOL respondsToShouldAutomaticallyTransitionToMultiSelectModeAtPoint;
		BOOL respondsToAutomaticallyTransitionToMultiSelectMode;
		BOOL respondsToIndexPathSetFromIndexPathToIndexPath;
		BOOL respondsToDidAutoScroll;
	}  _delegateFlags;
	id<PXSwipeSelectionManagerDelegate> _delegate;
	unsigned long long _state;
	UIScrollView* _scrollView;
	PXSectionedSelectionManager* _selectionManager;
	UIMultiSelectInteraction* _multiSelectInteraction;
	unsigned long long __currentDataSourceIdentifier;
	PXIndexPathSet* __selectedIndexPathsBeforeSwipe;
	id __pausingChangesToken;
	PXUIAutoScroller* __autoScroller;
	PXSimpleIndexPath __startingIndexPath;
	PXSimpleIndexPath __currentIndexPath;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,setter=_setCurrentDataSourceIdentifier:,nonatomic) unsigned long long _currentDataSourceIdentifier;                //@synthesize _currentDataSourceIdentifier=__currentDataSourceIdentifier - In the implementation block
@property (assign,setter=_setStartingIndexPath:,nonatomic) PXSimpleIndexPath _startingIndexPath;                                     //@synthesize _startingIndexPath=__startingIndexPath - In the implementation block
@property (assign,setter=_setCurrentIndexPath:,nonatomic) PXSimpleIndexPath _currentIndexPath;                                       //@synthesize _currentIndexPath=__currentIndexPath - In the implementation block
@property (setter=_setSelectedIndexPathsBeforeSwipe:,nonatomic,retain) PXIndexPathSet * _selectedIndexPathsBeforeSwipe;              //@synthesize _selectedIndexPathsBeforeSwipe=__selectedIndexPathsBeforeSwipe - In the implementation block
@property (setter=_setPausingChangesToken:,nonatomic,retain) id _pausingChangesToken;                                                //@synthesize _pausingChangesToken=__pausingChangesToken - In the implementation block
@property (nonatomic,readonly) PXUIAutoScroller * _autoScroller;                                                                     //@synthesize _autoScroller=__autoScroller - In the implementation block
@property (assign,nonatomic,__weak) id<PXSwipeSelectionManagerDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                                       //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) UIMultiSelectInteraction * multiSelectInteraction;                                                    //@synthesize multiSelectInteraction=_multiSelectInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXSwipeSelectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PXSwipeSelectionManagerDelegate>)arg1 ;
-(unsigned long long)state;
-(void)_setState:(unsigned long long)arg1 ;
-(UIScrollView *)scrollView;
-(PXSectionedSelectionManager *)selectionManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(BOOL)_isSelecting;
-(PXSimpleIndexPath)_startingIndexPath;
-(PXSimpleIndexPath)_currentIndexPath;
-(PXIndexPathSet *)_selectedIndexPathsBeforeSwipe;
-(id)_pausingChangesToken;
-(PXUIAutoScroller *)_autoScroller;
-(void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2 ;
-(PXSimpleIndexPath)_itemIndexPathAtLocation:(CGPoint)arg1 ;
-(PXSimpleIndexPath)_itemIndexPathClosestLeadingLocation:(CGPoint)arg1 ;
-(PXSimpleIndexPath)_itemIndexPathClosestAboveLocation:(CGPoint)arg1 ;
-(void)_beginSelectionFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_updateSelectionWithHitIndexPath:(PXSimpleIndexPath)arg1 leadingClosestIndexPath:(PXSimpleIndexPath)arg2 aboveClosestIndexPath:(PXSimpleIndexPath)arg3 ;
-(void)_endSelection;
-(void)_invalidateSelectedIndexPaths;
-(void)_updateSelectedIndexPaths;
-(id)initWithSelectionManager:(id)arg1 scrollView:(id)arg2 ;
-(void)_setCurrentIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_updateWithDataSource:(id)arg1 changeHistory:(id)arg2 ;
-(UIMultiSelectInteraction *)multiSelectInteraction;
-(unsigned long long)_currentDataSourceIdentifier;
-(void)_setCurrentDataSourceIdentifier:(unsigned long long)arg1 ;
-(void)_setStartingIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_setSelectedIndexPathsBeforeSwipe:(id)arg1 ;
-(void)_setPausingChangesToken:(id)arg1 ;
@end

