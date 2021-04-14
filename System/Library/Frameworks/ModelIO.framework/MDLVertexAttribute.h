/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MDLVertexAttribute : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _offset;
	unsigned long long _bufferIndex;
	unsigned long long _format;
	double _time;
	 _initializationValue;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long bufferIndex;              //@synthesize bufferIndex=_bufferIndex - In the implementation block
@property (assign,nonatomic) double time;                                 //@synthesize time=_time - In the implementation block
@property (assign,nonatomic)  initializationValue;                        //@synthesize initializationValue=_initializationValue - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(double)time;
-(unsigned long long)format;
-(unsigned long long)offset;
-(unsigned long long)bufferIndex;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setBufferIndex:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setTime:(double)arg1 ;
-(id)initWithName:(id)arg1 format:(unsigned long long)arg2 offset:(unsigned long long)arg3 bufferIndex:(unsigned long long)arg4 ;
-(void)setInitializationValue:;
-()initializationValue;
@end

