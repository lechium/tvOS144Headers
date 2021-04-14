/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSDictionaryCoding.h>

@class NSString;

@interface FlexMarker : NSObject <NSDictionaryCoding> {

	NSString* _name;
	long long _markerID;
	long long _position;
	unsigned long long _type;
	long long _number;

}

@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long markerID;                   //@synthesize markerID=_markerID - In the implementation block
@property (nonatomic,readonly) long long position;                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long number;                     //@synthesize number=_number - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(unsigned long long)type;
-(id)initWithDictionary:(id)arg1 ;
-(long long)number;
-(long long)position;
-(unsigned long long)_decodeTypeAndBarsFromName;
-(long long)markerID;
-(id)initWithName:(id)arg1 markerID:(long long)arg2 position:(long long)arg3 ;
-(id)encodeAsDictionary;
@end

