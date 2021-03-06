/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _MTLIndirectDrawArguments : NSObject {

	unsigned long long _primitiveType;
	unsigned long long _vertexStart;
	unsigned long long _vertexCount;
	unsigned long long _instanceCount;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long primitiveType;              //@synthesize primitiveType=_primitiveType - In the implementation block
@property (assign,nonatomic) unsigned long long vertexStart;                //@synthesize vertexStart=_vertexStart - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;              //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;               //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)primitiveType;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(unsigned long long)vertexStart;
-(void)setVertexStart:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(unsigned long long)instanceCount;
-(void)setInstanceCount:(unsigned long long)arg1 ;
-(unsigned long long)baseInstance;
-(void)setBaseInstance:(unsigned long long)arg1 ;
@end

