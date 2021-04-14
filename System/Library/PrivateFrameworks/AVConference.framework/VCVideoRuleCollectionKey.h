/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCVideoRuleCollectionKey : NSObject <NSCopying> {

	unsigned char _transportType;
	unsigned char _encodingType;
	int _payload;

}

@property (nonatomic,readonly) int payload;                              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned char transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned char encodingType;               //@synthesize encodingType=_encodingType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)payload;
-(unsigned char)transportType;
-(unsigned char)encodingType;
-(id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 ;
@end

