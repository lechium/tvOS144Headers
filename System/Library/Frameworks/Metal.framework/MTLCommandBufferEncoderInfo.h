/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSArray;


@protocol MTLCommandBufferEncoderInfo <NSObject>
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSArray * debugSignposts; 
@property (nonatomic,readonly) long long errorState; 
@required
-(NSString *)label;
-(long long)errorState;
-(NSArray *)debugSignposts;

@end
