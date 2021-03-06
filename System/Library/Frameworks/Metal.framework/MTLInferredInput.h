/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MTLInferredInput : NSObject {

	unsigned long long _dataType;
	unsigned long long _offset;
	unsigned long long _bufferIndex;
	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _stepRate;
	BOOL _baseInstanceUnused;

}

@property (readonly) unsigned long long dataType;                  //@synthesize dataType=_dataType - In the implementation block
@property (readonly) unsigned long long offset;                    //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long bufferIndex;               //@synthesize bufferIndex=_bufferIndex - In the implementation block
@property (readonly) unsigned long long stride;                    //@synthesize stride=_stride - In the implementation block
@property (readonly) unsigned long long stepFunction;              //@synthesize stepFunction=_stepFunction - In the implementation block
@property (readonly) unsigned long long stepRate;                  //@synthesize stepRate=_stepRate - In the implementation block
@property (readonly) BOOL baseInstanceUnused;                      //@synthesize baseInstanceUnused=_baseInstanceUnused - In the implementation block
-(id)description;
-(unsigned long long)stride;
-(unsigned long long)stepFunction;
-(unsigned long long)stepRate;
-(unsigned long long)offset;
-(unsigned long long)bufferIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(id)initWithDataType:(unsigned long long)arg1 offset:(unsigned long long)arg2 bufferIndex:(unsigned long long)arg3 stride:(unsigned long long)arg4 stepFunction:(unsigned long long)arg5 stepRate:(unsigned long long)arg6 baseInstanceUnused:(BOOL)arg7 ;
-(BOOL)baseInstanceUnused;
@end

