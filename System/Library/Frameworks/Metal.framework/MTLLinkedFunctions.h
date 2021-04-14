/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface MTLLinkedFunctions : NSObject <NSCopying>

@property (nonatomic,copy) NSArray * functions; 
@property (nonatomic,copy) NSDictionary * groups; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)linkedFunctions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

