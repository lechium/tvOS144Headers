/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexDescriptor.h>

@class MTLVertexBufferLayoutDescriptorArrayInternal, MTLVertexAttributeDescriptorArrayInternal;

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {

	MTLVertexBufferLayoutDescriptorArrayInternal* _vertexBufferArray;
	MTLVertexAttributeDescriptorArrayInternal* _attributeArray;

}
+(id)vertexDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)attributes;
-(void)reset;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)layouts;
-(id)newSerializedDescriptor;
-(BOOL)validateWithVertexFunction:(id)arg1 error:(id*)arg2 renderPipelineDescriptor:(id)arg3 ;
@end

