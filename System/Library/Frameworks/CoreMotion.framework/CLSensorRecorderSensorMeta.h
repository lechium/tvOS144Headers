/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding> {

	BOOL _movement;
	unsigned _offset;
	unsigned _dataSize;
	int _dataType;
	unsigned long long _identifier;
	double _startTime;
	unsigned long long _timestamp;
	unsigned long long _dataIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long dataIdentifier;              //@synthesize dataIdentifier=_dataIdentifier - In the implementation block
@property (assign) unsigned offset;                                //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned dataSize;                              //@synthesize dataSize=_dataSize - In the implementation block
@property (assign) int dataType;                                   //@synthesize dataType=_dataType - In the implementation block
@property (assign) BOOL movement;                                  //@synthesize movement=_movement - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(double)startTime;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)offset;
-(void)setOffset:(unsigned)arg1 ;
-(int)dataType;
-(void)setDataSize:(unsigned)arg1 ;
-(void)setDataType:(int)arg1 ;
-(id)initWithDataType:(int)arg1 ;
-(unsigned)dataSize;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)dataIdentifier;
-(void)setDataIdentifier:(unsigned long long)arg1 ;
-(BOOL)movement;
-(void)setMovement:(BOOL)arg1 ;
@end

