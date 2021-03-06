/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorDataRequestById : NSObject <NSSecureCoding> {

	int _dataType;
	unsigned long long _identifier;
	unsigned long long _metaIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long metaIdentifier;              //@synthesize metaIdentifier=_metaIdentifier - In the implementation block
@property (assign) int dataType;                                   //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(int)dataType;
-(void)setDataType:(int)arg1 ;
-(void)setMetaIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)metaIdentifier;
@end

