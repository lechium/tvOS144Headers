/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class _UIStatusBarDisplayItemState, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation {

	BOOL _requirement;
	_UIStatusBarDisplayItemState* _itemState;
	_UIStatusBarDisplayItemPlacement* _placement;

}

@property (assign,nonatomic,__weak) _UIStatusBarDisplayItemState * itemState;              //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * placement;                 //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL requirement;                                             //@synthesize requirement=_requirement - In the implementation block
-(id)type;
-(void)setRequirement:(BOOL)arg1 ;
-(BOOL)requirement;
-(_UIStatusBarDisplayItemState *)itemState;
-(void)setItemState:(_UIStatusBarDisplayItemState *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(void)setPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(BOOL)isFulfilled;
-(id)_ui_descriptionBuilder;
-(id)itemStates;
@end

