/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, UIView;


@protocol UIInputViewSetPlacementApplicator <NSObject>
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (retain,readonly) UIView * twoFingerDraggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) CGRect popoverFrame; 
@required
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;
-(void)invalidate;
-(CGPoint)origin;
-(void)prepare;
-(NSArray *)constraints;
-(UIEdgeInsets)contentInsets;
-(void)applyChanges:(id)arg1;
-(UIView *)draggableView;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2;
-(BOOL)allConstraintsActive;
-(UIView *)twoFingerDraggableView;
-(CGRect)popoverFrame;

@end

