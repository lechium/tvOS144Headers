/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ARUIRingGroupAnimation <NSObject>
@property (assign,nonatomic,__weak) id<ARUIRingGroupAnimationDelegate> delegate; 
@required
-(id<ARUIRingGroupAnimationDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)update:(double)arg1;
-(BOOL)isAnimating;
-(void)completeAnimation;

@end

