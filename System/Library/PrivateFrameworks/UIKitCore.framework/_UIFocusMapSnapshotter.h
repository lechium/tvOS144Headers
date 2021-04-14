/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIFocusRegionContainer, UICoordinateSpace;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIFocusSystem, _UIFocusRegionContentAttributes, _UIFocusRegion, _UIFocusSearchInfo;

@interface _UIFocusMapSnapshotter : NSObject {

	BOOL _snapshotFrameIsEmpty;
	BOOL _clipToSnapshotRect;
	UIFocusSystem* _focusSystem;
	id<_UIFocusRegionContainer> _rootContainer;
	id<UICoordinateSpace> _coordinateSpace;
	_UIFocusRegionContentAttributes* _contentAttributes;
	_UIFocusRegion* _focusedRegion;
	id<_UIFocusRegionContainer> _regionsContainer;
	_UIFocusSearchInfo* _searchInfo;
	CGRect _snapshotFrame;

}

@property (nonatomic,retain) _UIFocusSearchInfo * searchInfo;                                         //@synthesize searchInfo=_searchInfo - In the implementation block
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                                    //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,__weak,readonly) id<_UIFocusRegionContainer> rootContainer;                      //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace;                          //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,copy,readonly) _UIFocusRegionContentAttributes * contentAttributes;              //@synthesize contentAttributes=_contentAttributes - In the implementation block
@property (nonatomic,copy) _UIFocusRegion * focusedRegion;                                            //@synthesize focusedRegion=_focusedRegion - In the implementation block
@property (assign,nonatomic,__weak) id<_UIFocusRegionContainer> regionsContainer;                     //@synthesize regionsContainer=_regionsContainer - In the implementation block
@property (assign,nonatomic) CGRect snapshotFrame;                                                    //@synthesize snapshotFrame=_snapshotFrame - In the implementation block
@property (assign,nonatomic) BOOL clipToSnapshotRect;                                                 //@synthesize clipToSnapshotRect=_clipToSnapshotRect - In the implementation block
-(id)init;
-(_UIFocusRegionContentAttributes *)contentAttributes;
-(id<UICoordinateSpace>)coordinateSpace;
-(id)captureSnapshot;
-(id<_UIFocusRegionContainer>)rootContainer;
-(UIFocusSystem *)focusSystem;
-(_UIFocusSearchInfo *)searchInfo;
-(_UIFocusRegion *)focusedRegion;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
-(id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ;
-(void)setSnapshotFrame:(CGRect)arg1 ;
-(void)setClipToSnapshotRect:(BOOL)arg1 ;
-(BOOL)clipToSnapshotRect;
-(void)setFocusedRegion:(_UIFocusRegion *)arg1 ;
-(void)setRegionsContainer:(id<_UIFocusRegionContainer>)arg1 ;
-(id<_UIFocusRegionContainer>)regionsContainer;
-(id)_searchAreaForContainerSearchRect:(CGRect)arg1 ;
-(CGRect)snapshotFrame;
@end
