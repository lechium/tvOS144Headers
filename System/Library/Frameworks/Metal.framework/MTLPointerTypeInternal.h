/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLPointerType.h>

@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {

	unsigned long long _dataType;
	unsigned long long _elementType;
	MTLType* _elementTypeInfo;
	unsigned long long _access;
	unsigned long long _alignment;
	unsigned long long _dataSize;
	BOOL _elementIsArgumentBuffer;
	BOOL _isConstantBuffer;
	BOOL _doRetain;

}
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(id)structType;
-(unsigned long long)elementType;
-(id)elementStructType;
-(id)elementArrayType;
-(unsigned long long)access;
-(BOOL)elementIsArgumentBuffer;
-(id)elementTypeDescription;
-(unsigned long long)alignment;
-(BOOL)isConstantBuffer;
-(void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 doRetain:(BOOL)arg8 ;
-(BOOL)elementIsIndirectArgumentBuffer;
-(unsigned long long)dataSize;
@end

