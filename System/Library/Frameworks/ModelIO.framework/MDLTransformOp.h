/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MDLTransformOp
@property (nonatomic,readonly) NSString * name; 
@required
-(NSString *)name;
-(/*function pointer*/void**)float4x4AtTime:(double)arg1;
-(/*function pointer*/void**)double4x4AtTime:(double)arg1;
-(BOOL)IsInverseOp;

@end

