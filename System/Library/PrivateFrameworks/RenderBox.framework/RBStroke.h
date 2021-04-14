/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBStroke <NSObject>
@property (nonatomic,readonly) int strokeType; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) float borderWidth; 
@required
-(float)borderWidth;
-(int)strokeType;
-(CGRect)boundingRect;
-(void)applyFunction:(/*function pointer*/void*)arg1 info:(void*)arg2;

@end
