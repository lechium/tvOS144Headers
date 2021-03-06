/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKBRTDecayingObject.h>

@interface _UIKBRTDecayingOffset : _UIKBRTDecayingObject {

	BOOL _limitMovement;
	CGPoint _offset;

}

@property (nonatomic,readonly) CGPoint offset; 
@property (nonatomic,readonly) CGPoint originalOffset; 
-(void)reset;
-(CGPoint)offset;
-(id)initWithTimeoutDuration:(double)arg1 limitMovement:(BOOL)arg2 ;
-(void)updateOffsetTo:(CGPoint)arg1 ;
-(CGPoint)originalOffset;
@end

