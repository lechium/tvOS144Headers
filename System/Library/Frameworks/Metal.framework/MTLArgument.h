/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@class NSString, MTLStructType, MTLPointerType;

@interface MTLArgument : NSObject

@property (readonly) MTLArgument * bufferIndirectArgumentType; 
@property (readonly) unsigned long long indirectConstantAlignment; 
@property (readonly) unsigned long long indirectConstantDataSize; 
@property (readonly) unsigned long long indirectConstantDataType; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long access; 
@property (readonly) unsigned long long index; 
@property (getter=isActive,readonly) BOOL active; 
@property (readonly) unsigned long long bufferAlignment; 
@property (readonly) unsigned long long bufferDataSize; 
@property (readonly) unsigned long long bufferDataType; 
@property (readonly) MTLStructType * bufferStructType; 
@property (readonly) MTLPointerType * bufferPointerType; 
@property (readonly) unsigned long long threadgroupMemoryAlignment; 
@property (readonly) unsigned long long threadgroupMemoryDataSize; 
@property (readonly) unsigned long long textureType; 
@property (readonly) unsigned long long textureDataType; 
@property (readonly) BOOL isDepthTexture; 
@property (readonly) unsigned long long arrayLength; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
@end

